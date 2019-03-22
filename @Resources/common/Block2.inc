[Styles]
@include=#@#common\Styles.inc

[Variables]
BlockWidth=340
BlockHeight=129

LedW=51
LedH=19

RoundlineX=(#BlockWidth# / 2)
RoundlineY=(#BlockHeight# / 2)


; ----------------------------------
; STYLES
; ----------------------------------

[GraphRight]
X=211
Y=43
H=43
W=96

[GraphRightTop]
X=211
Y=43
H=22
W=96

[GraphRightBottom]
X=211
Y=64
H=22
W=96

[TextTopLeft]
FontSize=#FontSize#
FontWeight=700
StringAlign=LeftCenter
X=40
Y=20

[TextBottomRight]
FontSize=#FontSize#
FontWeight=700
StringAlign=RightCenter
X=(#BlockWidth# - 40)
Y=(#BlockHeight# - 18)

[TextLeftLine1]
FontSize=11
FontWeight=700
StringAlign=LeftCenter
X=35
Y=55

[TextLeftLine2]
FontSize=11
FontWeight=700
StringAlign=LeftCenter
X=0r
Y=3R

[TextRoundline]
FontSize=#FontSize#
FontWeight=700
StringAlign=RightCenter
X=(#RoundlineX# + 20)
Y=#RoundlineY#


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
ImageName=#@#images\graph-bg-2.png
X=0
Y=0
W=#BlockWidth#
H=#BlockHeight#

[MeterLeds1]
Meter=Image
ImageName=#@#images\leds-2.png
ImageAlpha=([MeasureRandom] > 50 ? 255 : 150)
DynamicVariables=1
UpdateDivider=2
X=(#BlockWidth# - 60 - #LedW# / 2)
Y=(22 - #LedH# / 2)
W=#LedW#
H=#LedH#

[MeterLeds2]
Meter=Image
ImageName=#@#images\leds-2.png
ImageAlpha=([MeasureRandom] > 50 ? 255 : 150)
DynamicVariables=1
UpdateDivider=2
X=(60 - #LedW# / 2)
Y=(#BlockHeight# - 22 - #LedH# / 2)
W=#LedW#
H=#LedH#