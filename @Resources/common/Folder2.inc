[Styles]
@include=#@#common\Styles.inc

[Variables]
BlockWidth=340
BlockHeight=170

CoreSize=100

FirstLine=20


; ----------------------------------
; STYLES
; ----------------------------------

[TextTitle]
FontSize=#FontSize#
FontWeight=700
StringAlign=RightCenter
X=(#BlockWidth# - 15)
Y=(#BlockHeight# - 23)

[TextValue]
FontSize=13
StringAlign=Right
Y=0R
H=20

[TextLabel]
FontSize=12
ClipString=1
H=19
X=5r
Y=1r


; ----------------------------------
; MEASURES
; ----------------------------------

[MeasureLoop1]
Measure=Loop
StartValue=0
EndValue=180
Increment=6
UpdateDivider=1

[MeasureLoop2]
Measure=Calc
Formula=[MeasureLoop1] < 135 ? [MeasureLoop1] + 45 : [MeasureLoop1] - 135
DynamicVariables=1
UpdateDivider=1

[MeasureLoop3]
Measure=Calc
Formula=[MeasureLoop2] < 135 ? [MeasureLoop2] + 45 : [MeasureLoop2] - 135
DynamicVariables=1
UpdateDivider=1

[MeasureLoop4]
Measure=Calc
Formula=[MeasureLoop3] < 135 ? [MeasureLoop3] + 45 : [MeasureLoop3] - 135
DynamicVariables=1
UpdateDivider=1


; ----------------------------------
; DISPLAY
; ----------------------------------

[MeterBackground]
Meter=Image
ImageName=#@#images\folder-1.png
ImageFlip=Both
X=0
Y=0
W=#BlockWidth#
H=#BlockHeight#

[MeterCoreCenter]
Meter=Image
ImageName=#@#images\core-0.png
X=220
Y=21
W=#CoreSize#
H=#CoreSize#

[MeterCore1]
Meter=Image
ImageName=#@#images\core-1.png
ImageAlpha=(Sin(Rad([MeasureLoop1])) * 200)
DynamicVariables=1
UpdateDivider=1
X=0r
Y=0r
W=#CoreSize#
H=#CoreSize#

[MeterCore2]
Meter=Image
ImageName=#@#images\core-2.png
ImageAlpha=(Sin(Rad([MeasureLoop2])) * 200)
DynamicVariables=1
UpdateDivider=1
X=0r
Y=0r
W=#CoreSize#
H=#CoreSize#

[MeterCore3]
Meter=Image
ImageName=#@#images\core-3.png
ImageAlpha=(Sin(Rad([MeasureLoop3])) * 200)
DynamicVariables=1
UpdateDivider=1
X=0r
Y=0r
W=#CoreSize#
H=#CoreSize#

[MeterCore4]
Meter=Image
ImageName=#@#images\core-4.png
ImageAlpha=(Sin(Rad([MeasureLoop4])) * 200)
DynamicVariables=1
UpdateDivider=1
X=0r
Y=0r
W=#CoreSize#
H=#CoreSize#
