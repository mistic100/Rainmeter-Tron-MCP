; Space
[MeasureDriveTotal]
Measure=FreeDiskSpace
Drive=#Drive1#
UpdateDivider=50
Total=1

[MeasureDriveFree]
Measure=FreeDiskSpace
Drive=#Drive1#
UpdateDivider=50

[MeasureDriveUsage]
Measure=FreeDiskSpace
Drive=#Drive1#
InvertMeasure=1
UpdateDivider=50

; Activity
[MeasureDriveAccess]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Time
PerfMonInstance=#Drive1#
MaxValue=10000000

; Usage
[MeasureDriveBytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Bytes/sec
PerfMonInstance=#Drive1#

; Temp
[MeasureDriveTemp]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#Drive1TempSensorId#
HWiNFOSensorInstance=#Drive1TempSensorInstance#
HWiNFOEntryId=#Drive1TempEntryId#
HWiNFOType=CurrentValue
MaxValue=100
