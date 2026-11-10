param([Parameter(Mandatory=$true)][string]$OutputDirectory)
$ErrorActionPreference = 'Stop'
$workspace = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '..\build'))
$destination = [IO.Path]::GetFullPath($OutputDirectory)
if (!$destination.StartsWith($workspace + '\', [StringComparison]::OrdinalIgnoreCase)) {
    throw 'Profile files must stay under the ignored build directory'
}
New-Item -ItemType Directory -Path $destination -Force | Out-Null
foreach ($scenario in @('menu','match')) {
    foreach ($suffix in @('.ready','.done','.etl')) {
        if (Test-Path -LiteralPath (Join-Path $destination ($scenario+$suffix))) {
            throw 'Use a fresh collection directory; existing results are preserved'
        }
    }
}
'waiting' | Set-Content -LiteralPath (Join-Path $destination 'collector-status.txt')
foreach ($scenario in @('menu','match')) {
    $request = Join-Path $destination ($scenario+'.request')
    $deadline = (Get-Date).AddMinutes(30)
    while (!(Test-Path -LiteralPath $request)) {
        if ((Get-Date) -gt $deadline) { throw 'Benchmark request timeout' }
        Start-Sleep -Milliseconds 500
    }
    $log = Join-Path $destination ($scenario+'.collector.log')
    & wpr.exe -start CPU -filemode 2>&1 | Out-File -LiteralPath $log
    if ($LASTEXITCODE -ne 0) { throw 'WPR start failed; no session stopped' }
    try {
        'started' | Set-Content -LiteralPath (Join-Path $destination ($scenario+'.ready'))
        $deadline = (Get-Date).AddMinutes(4)
        while (!(Test-Path -LiteralPath (Join-Path $destination ($scenario+'.done')))) {
            if ((Get-Date) -gt $deadline) { throw 'Benchmark completion timeout' }
            Start-Sleep -Milliseconds 250
        }
    } finally {
        & wpr.exe -stop (Join-Path $destination ($scenario+'.etl')) 2>&1 | Out-File -LiteralPath $log -Append
    }
    if ($LASTEXITCODE -ne 0) { throw 'WPR stop failed' }
    'finished' | Set-Content -LiteralPath (Join-Path $destination ($scenario+'.finished'))
}
'complete' | Set-Content -LiteralPath (Join-Path $destination 'collector-status.txt')
