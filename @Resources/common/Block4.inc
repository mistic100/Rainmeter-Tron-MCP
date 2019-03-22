[Styles]
@include=#@#common\Styles.inc

[Variables]
BlockWidth=170
BlockHeight=129

LedW=19
LedH=19

BarX=20
BarY=44
BarW=95
BarH=30


; ----------------------------------
; STYLES
; ----------------------------------

[Graph]
X=#BarX#
Y=79
W=#BarW#
H=#BarH#

[TextTop]
FontSize=12
FontWeight=700
X=20
Y=17

[TextBar]
StringAlign=RightTop
FontSize=11
FontWeight=700
X=-10R
Y=11r


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
ImageName=#@#images\graph-bg-4.png
X=0
Y=0
W=#BlockWidth#
H=#BlockHeight#

[MeterLeds]
Meter=Image
ImageName=#@#images\leds-1.png
ImageAlpha=([MeasureRandom] > 50 ? 255 : 150)
DynamicVariables=1
UpdateDivider=2
X=4
Y=4
W=#LedW#
H=#LedH#
