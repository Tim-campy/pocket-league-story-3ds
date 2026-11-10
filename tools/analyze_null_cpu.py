"""Intersect external ETW scheduling intervals with null-host frame QPC windows.

This reports scheduled processor time, not wall time or GetProcessTimes ticks.
If DPC/ISR events were not collected, interrupt time cannot be subtracted.
"""
import argparse
import csv
import json
import math
import statistics
from collections import defaultdict
from pathlib import Path


def union(intervals):
    result = []
    for begin, end in sorted(intervals):
        if result and begin <= result[-1][1]:
            result[-1] = (result[-1][0], max(result[-1][1], end))
        else:
            result.append((begin, end))
    return result


def frame_ticks(begin, end, scheduled, interrupts):
    total = excluded = 0
    for start, stop, cpu in scheduled:
        lo, hi = max(begin, start), min(end, stop)
        if hi <= lo:
            continue
        total += hi - lo
        excluded += sum(max(0, min(hi, b) - max(lo, a))
                        for a, b in interrupts.get(cpu, []))
    return total - excluded, excluded


def analyze(stdout, events):
    lines = stdout.read_text(encoding='utf-8').splitlines()
    def scalar(key):
        return int(next(line.split('=')[1] for line in lines if line.startswith(key + '=')))
    pid, frequency = scalar('PLS_NULL_PID'), scalar('PLS_NULL_QPC_FREQUENCY')
    frames = [list(map(int, line.split('=')[1].split(',')))
              for line in lines if line.startswith('PLS_NULL_QPC=')]
    if not frames:
        raise ValueError('Missing QPC frame windows')
    threads, switches, interrupt_events = set(), [], defaultdict(list)
    anchor = None
    encoding = 'utf-16' if events.read_bytes()[:2] in (b'\xff\xfe', b'\xfe\xff') else 'utf-8-sig'
    with events.open(encoding=encoding) as stream:
        for row in csv.reader(stream):
            if row[0] == 'T' and int(row[3]) == pid:
                threads.add(int(row[2]))
            elif row[0] == 'S':
                switches.append(tuple(map(int, row[1:])))
            elif row[0] == 'I':
                end = int(row[1])
                interrupt_events[int(row[2])].append((end-round(float(row[3])*frequency/1000), end))
            elif row[0] == 'A':
                anchor = (int(row[1]), float(row[2]))
    if anchor is None or not threads:
        raise ValueError('Missing trace anchor or target thread ownership')
    running, scheduled, mismatches = {}, [], 0
    for end, cpu, old, new in switches:
        if cpu in running:
            begin, thread = running[cpu]
            mismatches += thread != old
            if thread in threads:
                scheduled.append((begin, end, cpu))
        running[cpu] = (end, new)
    if mismatches:
        raise ValueError(f'Incomplete scheduling chains: {mismatches}')
    interrupts = {cpu: union(items) for cpu, items in interrupt_events.items()}
    measured = [frame_ticks(begin, end, scheduled, interrupts) for _, begin, end in frames]
    values = [ticks/frequency*1000 for ticks, _ in measured]
    return dict(pid=pid, frames=len(frames), threads=sorted(threads),
                metric='scheduled_cpu_ms',
                interrupt_event_count=sum(map(len, interrupt_events.values())),
                interrupt_exclusion='measured' if interrupt_events else 'UNKNOWN: no DPC/ISR events',
                excluded_interrupt_ms=sum(x[1] for x in measured)/frequency*1000,
                mean_ms=statistics.mean(values), p95_ms=sorted(values)[math.ceil(len(values)*.95)-1],
                max_ms=max(values), frame_cpu_ms=values,
                profile_range_us=[round((anchor[1]+(qpc-anchor[0])/frequency*1000)*1000)
                                  for qpc in (frames[0][1], frames[-1][2])])


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--stdout', type=Path, required=True)
    parser.add_argument('--events', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    result = analyze(args.stdout, args.events)
    args.output.write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps({k: v for k, v in result.items() if k != 'frame_cpu_ms'}))
