"""Read ARM registers/stack through a local GDB stub; never write target memory."""
import argparse
import json
from pathlib import Path
import socket
import time


class Remote:
    def __init__(self, port):
        self.socket=socket.create_connection(('127.0.0.1',port),timeout=10)
        self.socket.settimeout(30)

    def send(self, text):
        body=text.encode('ascii')
        self.socket.sendall(b'$'+body+b'#'+f'{sum(body)%256:02x}'.encode())

    def receive(self):
        while True:
            char=self.socket.recv(1)
            if not char:raise EOFError('Stub disconnected')
            if char==b'$':break
        body=bytearray()
        while True:
            char=self.socket.recv(1)
            if not char:raise EOFError('Truncated packet')
            if char==b'#':break
            body.extend(char)
        checksum=b''
        while len(checksum)<2:checksum+=self.socket.recv(2-len(checksum))
        if int(checksum,16)!=sum(body)%256:raise ValueError('Packet checksum differs')
        self.socket.sendall(b'+')
        return body.decode('ascii')

    def command(self, text):
        self.send(text)
        return self.receive()


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--port',type=int,default=24689)
    parser.add_argument('--log',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    parser.add_argument('--delay',type=float,default=10)
    parser.add_argument('--samples',type=int,default=3)
    parser.add_argument('--all-threads',action='store_true')
    parser.add_argument('--marker',default='PLS_NULL_WARMUP_BEGIN=1')
    args=parser.parse_args()
    initial_log_time=args.log.stat().st_mtime_ns if args.log.exists() else 0
    remote=Remote(args.port);observations=[]
    print('connected '+remote.command('qSupported'),flush=True)
    print('initial '+remote.command('?'),flush=True)
    remote.send('c')
    try:
        deadline=time.monotonic()+240
        while not args.log.exists() or args.log.stat().st_mtime_ns<=initial_log_time or args.marker not in args.log.read_text(errors='replace'):
            if time.monotonic()>deadline:raise TimeoutError('Warmup marker not reached')
            time.sleep(1)
        for sample in range(args.samples):
            time.sleep(args.delay)
            remote.socket.sendall(b'\x03');stop=remote.receive()
            threads=remote.command('qfThreadInfo')
            if args.all_threads:
                states=[]
                thread_ids=[]
                while threads.startswith('m'):
                    thread_ids.extend(threads[1:].split(','));threads=remote.command('qsThreadInfo')
                for tid in thread_ids:
                    if remote.command('Hg'+tid)!='OK':raise RuntimeError('Thread selection failed')
                    regs={name:int.from_bytes(bytes.fromhex(remote.command(f'p{index:x}')),'little')for name,index in [(f'r{i}',i)for i in range(13)]+[('sp',13),('lr',14),('pc',15)]}
                    raw=remote.command(f"m{regs['sp']:x},1000")
                    words=[]if raw.startswith('E')else[int.from_bytes(bytes.fromhex(raw[i:i+8]),'little')for i in range(0,len(raw),8)]
                    states.append(dict(thread=tid,registers=regs,stack_words=words))
                observations.append(dict(sample=sample,stop=stop,states=states))
                args.output.write_text(json.dumps(observations,indent=2)+'\n',encoding='utf8')
                print(json.dumps(dict(sample=sample,states=[{k:v for k,v in state.items()if k!='stack_words'}for state in states])),flush=True)
                remote.send('c')
                continue
            registers={}
            for name,index in [('sp',13),('lr',14),('pc',15),('fp',11)]:
                raw=remote.command(f'p{index:x}')
                registers[name]=int.from_bytes(bytes.fromhex(raw),'little')
            raw=remote.command(f"m{registers['sp']:x},100")
            stack=[] if raw.startswith('E') else [int.from_bytes(bytes.fromhex(raw[i:i+8]),'little')for i in range(0,len(raw),8)]
            observation=dict(sample=sample,stop=stop,registers=registers,stack_words=stack,
                             threads=threads)
            observations.append(observation)
            args.output.write_text(json.dumps(observations,indent=2)+'\n',encoding='utf8')
            print(json.dumps({k:v for k,v in observation.items()if k!='stack_words'}),flush=True)
            remote.send('c')
    finally:
        # Detaching resumes the emulated process. This client never changes
        # registers, memory or breakpoints; output remains a private diagnostic.
        try:
            remote.socket.sendall(b'\x03');remote.receive();remote.command('D')
        finally:remote.socket.close()


if __name__=='__main__':main()
