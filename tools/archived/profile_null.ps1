param([Parameter(Mandatory=$true)][string]$OutputDirectory,
      [ValidateSet('menu','match')][string[]]$Scenarios = @('menu','match'))
$ErrorActionPreference = 'Stop'
$workspace = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '..\build'))
$destination = [IO.Path]::GetFullPath($OutputDirectory)
if (!$destination.StartsWith($workspace + '\', [StringComparison]::OrdinalIgnoreCase)) {
    throw 'Profile files must stay under the ignored build directory'
}
New-Item -ItemType Directory -Path $destination -Force | Out-Null
# Hold an exclusive OS handle for this process lifetime. A second collector
# must fail before it can start/stop WPR or overwrite the first one's logs.
$collectorLock = [IO.File]::Open((Join-Path $destination 'collector.lock'), [IO.FileMode]::OpenOrCreate, [IO.FileAccess]::ReadWrite, [IO.FileShare]::None)
$PID | Set-Content -LiteralPath (Join-Path $destination 'collector.pid')
foreach ($scenario in $Scenarios) {
    foreach ($suffix in @('.ready','.done','.etl')) {
        if (Test-Path -LiteralPath (Join-Path $destination ($scenario+$suffix))) {
            throw 'Use a fresh collection directory; existing results are preserved'
        }
    }
}
'waiting' | Set-Content -LiteralPath (Join-Path $destination 'collector-status.txt')
foreach ($scenario in $Scenarios) {
    $request = Join-Path $destination ($scenario+'.request')
    $deadline = (Get-Date).AddMinutes(30)
    while (!(Test-Path -LiteralPath $request)) {
        if ((Get-Date) -gt $deadline) { throw 'Benchmark request timeout' }
        Start-Sleep -Milliseconds 500
    }
    $log = Join-Path $destination ($scenario+'.collector.log')
    $start = Start-Process -FilePath 'wpr.exe' -ArgumentList @('-start','CPU','-filemode') -WindowStyle Hidden -Wait -PassThru -RedirectStandardOutput $log -RedirectStandardError ($log+'.stderr')
    if ($start.ExitCode -ne 0) { throw ('WPR start failed; no session stopped. Exit='+$start.ExitCode+'; inspect '+$log+'.stderr') }
    try {
        'started' | Set-Content -LiteralPath (Join-Path $destination ($scenario+'.ready'))
        $deadline = (Get-Date).AddMinutes(4)
        while (!(Test-Path -LiteralPath (Join-Path $destination ($scenario+'.done')))) {
            if ((Get-Date) -gt $deadline) { throw 'Benchmark completion timeout' }
            Start-Sleep -Milliseconds 250
        }
    } finally {
        $tracePath = Join-Path $destination ($scenario+'.etl')
        $stop = Start-Process -FilePath 'wpr.exe' -ArgumentList @('-stop',('"'+$tracePath+'"')) -WindowStyle Hidden -Wait -PassThru -RedirectStandardOutput ($log+'.stop') -RedirectStandardError ($log+'.stop.stderr')
    }
    if ($stop.ExitCode -ne 0) { throw 'WPR stop failed' }
    'finished' | Set-Content -LiteralPath (Join-Path $destination ($scenario+'.finished'))
}
'complete' | Set-Content -LiteralPath (Join-Path $destination 'collector-status.txt')
