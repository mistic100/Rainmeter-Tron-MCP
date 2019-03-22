; Space
[MeasureDriveTotal]
Measure=FreeDiskSpace
Drive=#Drive6#
UpdateDivider=60
Total=1

[MeasureDriveFree]
Measure=FreeDiskSpace
Drive=#Drive6#
UpdateDivider=60

[MeasureDriveUsage]
Measure=FreeDiskSpace
Drive=#Drive6#
InvertMeasure=1
UpdateDivider=60

; Activity
[MeasureDriveAccess]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Time
PerfMonInstance=#Drive6#
MaxValue=10000000

; Usage
[MeasureDriveBytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Bytes/sec
PerfMonInstance=#Drive6#

; Temp
[MeasureDriveTemp]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#Drive6TempSensorId#
HWiNFOSensorInstance=#Drive6TempSensorInstance#
HWiNFOEntryId=#Drive6TempEntryId#
HWiNFOType=CurrentValue
MaxValue=100
