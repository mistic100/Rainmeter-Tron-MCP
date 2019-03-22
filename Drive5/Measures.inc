; Space
[MeasureDriveTotal]
Measure=FreeDiskSpace
Drive=#Drive5#
UpdateDivider=60
Total=1

[MeasureDriveFree]
Measure=FreeDiskSpace
Drive=#Drive5#
UpdateDivider=60

[MeasureDriveUsage]
Measure=FreeDiskSpace
Drive=#Drive5#
InvertMeasure=1
UpdateDivider=60

; Activity
[MeasureDriveAccess]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Time
PerfMonInstance=#Drive5#
MaxValue=10000000

; Usage
[MeasureDriveBytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Bytes/sec
PerfMonInstance=#Drive5#

; Temp
[MeasureDriveTemp]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#Drive5TempSensorId#
HWiNFOSensorInstance=#Drive5TempSensorInstance#
HWiNFOEntryId=#Drive5TempEntryId#
HWiNFOType=CurrentValue
MaxValue=100
