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
FontSize=14
StringAlign=Right
Y=0R
H=20

[TextLabel]
FontSize=13
ClipString=1
H=20
X=5r
Y=0r


; ----------------------------------
; MEASURES
; ----------------------------------

[MeasureRandom]
Measure=Calc
Formula=Random
UpdateRandom=1
UpdateDivider=2

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
ImageAlpha=([MeasureRandom] < 50 ? 255 : 150)
DynamicVariables=1
UpdateDivider=2
X=0r
Y=0r
W=#CoreSize#
H=#CoreSize#

[MeterCore2]
Meter=Image
ImageName=#@#images\core-2.png
ImageAlpha=([MeasureRandom] >= 25 ? ([MeasureRandom] <= 75 ? 255 : 150) : 150)
DynamicVariables=1
UpdateDivider=2
X=0r
Y=0r
W=#CoreSize#
H=#CoreSize#

[MeterCore3]
Meter=Image
ImageName=#@#images\core-3.png
ImageAlpha=([MeasureRandom] > 50 ? 255 : 150)
DynamicVariables=1
UpdateDivider=2
X=0r
Y=0r
W=#CoreSize#
H=#CoreSize#
