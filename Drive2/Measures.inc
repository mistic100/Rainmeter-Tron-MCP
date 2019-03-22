; Space
[MeasureDriveTotal]
Measure=FreeDiskSpace
Drive=#Drive2#
UpdateDivider=60
Total=1

[MeasureDriveFree]
Measure=FreeDiskSpace
Drive=#Drive2#
UpdateDivider=60

[MeasureDriveUsage]
Measure=FreeDiskSpace
Drive=#Drive2#
InvertMeasure=1
UpdateDivider=60

; Activity
[MeasureDriveAccess]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Time
PerfMonInstance=#Drive2#
MaxValue=10000000

; Usage
[MeasureDriveBytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Bytes/sec
PerfMonInstance=#Drive2#

; Temp
[MeasureDriveTemp]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#Drive2TempSensorId#
HWiNFOSensorInstance=#Drive2TempSensorInstance#
HWiNFOEntryId=#Drive2TempEntryId#
HWiNFOType=CurrentValue
MaxValue=100
