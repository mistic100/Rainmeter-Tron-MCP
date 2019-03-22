; Space
[MeasureDriveTotal]
Measure=FreeDiskSpace
Drive=#Drive4#
UpdateDivider=60
Total=1

[MeasureDriveFree]
Measure=FreeDiskSpace
Drive=#Drive4#
UpdateDivider=60

[MeasureDriveUsage]
Measure=FreeDiskSpace
Drive=#Drive4#
InvertMeasure=1
UpdateDivider=60

; Activity
[MeasureDriveAccess]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Time
PerfMonInstance=#Drive4#
MaxValue=10000000

; Usage
[MeasureDriveBytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Bytes/sec
PerfMonInstance=#Drive4#

; Temp
[MeasureDriveTemp]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#Drive4TempSensorId#
HWiNFOSensorInstance=#Drive4TempSensorInstance#
HWiNFOEntryId=#Drive4TempEntryId#
HWiNFOType=CurrentValue
MaxValue=100
