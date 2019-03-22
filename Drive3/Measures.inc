; Space
[MeasureDriveTotal]
Measure=FreeDiskSpace
Drive=#Drive3#
UpdateDivider=60
Total=1

[MeasureDriveFree]
Measure=FreeDiskSpace
Drive=#Drive3#
UpdateDivider=60

[MeasureDriveUsage]
Measure=FreeDiskSpace
Drive=#Drive3#
InvertMeasure=1
UpdateDivider=60

; Activity
[MeasureDriveAccess]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Time
PerfMonInstance=#Drive3#
MaxValue=10000000

; Usage
[MeasureDriveBytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Bytes/sec
PerfMonInstance=#Drive3#

; Temp
[MeasureDriveTemp]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#Drive3TempSensorId#
HWiNFOSensorInstance=#Drive3TempSensorInstance#
HWiNFOEntryId=#Drive3TempEntryId#
HWiNFOType=CurrentValue
MaxValue=100
