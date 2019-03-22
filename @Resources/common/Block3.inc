[Styles]
@include=#@#common\Styles.inc

[Variables]
BlockWidth=340
BlockHeight=86

LedW=35
LedH=19

RoundlineLeftX=132
RoundlineRightX=283
RoundlineY=(#BlockHeight# / 2)


; ----------------------------------
; STYLES
; ----------------------------------

[TextLeft]
FontSize=13
FontWeight=700
StringAlign=LeftCenter
X=28
Y=(#BlockHeight# / 2)

[TextRightLine1]
FontSize=11
FontWeight=700
StringAlign=LeftCenter
X=190
Y=35

[TextRightLine2]
FontSize=11
FontWeight=700
StringAlign=LeftCenter
X=0r
Y=2R

[TextRoundlineLeft]
FontSize=#FontSize#
FontWeight=700
StringAlign=RightCenter
X=(#RoundlineLeftX# + 20)
Y=#RoundlineY#

[TextRoundlineRight]
FontSize=#FontSize#
FontWeight=700
StringAlign=RightCenter
X=(#RoundlineRightX# + 20)
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
ImageName=#@#images\graph-bg-3.png
X=0
Y=0
W=#BlockWidth#
H=#BlockHeight#

[MeterLeds1]
Meter=Image
ImageName=#@#images\leds-3.png
ImageAlpha=([MeasureRandom] > 50 ? 255 : 150)
DynamicVariables=1
UpdateDivider=2
X=(238 - #LedW# / 2)
Y=(16 - #LedH# / 2)
W=#LedW#
H=#LedH#

[MeterLeds2]
Meter=Image
ImageName=#@#images\leds-3.png
ImageAlpha=([MeasureRandom] > 50 ? 255 : 150)
DynamicVariables=1
UpdateDivider=2
X=(85 - #LedW# / 2)
Y=(#BlockHeight# - 15 - #LedH# / 2)
W=#LedW#
H=#LedH#
