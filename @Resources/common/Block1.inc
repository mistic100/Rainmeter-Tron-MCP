[Styles]
@include=#@#common\Styles.inc

[Variables]
BlockWidth=340
BlockHeight=129

LedW=19
LedH=19

RoundlineX=70
RoundlineY=(#BlockHeight# / 2)


; ----------------------------------
; STYLES
; ----------------------------------

[Graph]
X=116
Y=43
H=43
W=109

[TextTopCenter]
FontSize=#FontSize#
FontWeight=700
StringAlign=CenterCenter
X=(#BlockWidth# / 2)
Y=20

[TextBottomCenter]
FontSize=#FontSize#
FontWeight=700
StringAlign=CenterCenter
X=(#BlockWidth# / 2)
Y=(#BlockHeight# - 18)

[TextRoundlineLeft]
FontSize=#FontSize#
FontWeight=700
StringAlign=RightCenter
X=(#RoundlineX# + 20)
Y=#RoundlineY#

[TextRoundlineRight]
FontSize=#FontSize#
FontWeight=700
StringAlign=RightCenter
X=(#Width# - #RoundlineX# + 20)
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
ImageName=#@#images\graph-bg-1.png
X=0
Y=0
W=#BlockWidth#
H=#BlockHeight#

[MeterLeds1]
Meter=Image
ImageName=#@#images\leds-1.png
ImageAlpha=([MeasureRandom] > 50 ? 255 : 150)
DynamicVariables=1
UpdateDivider=2
X=(#BlockWidth# - 110 - #LedW# / 2)
Y=(22 - #LedH# / 2)
W=#LedW#
H=#LedH#

[MeterLeds2]
Meter=Image
ImageName=#@#images\leds-1.png
ImageAlpha=([MeasureRandom] > 50 ? 255 : 150)
DynamicVariables=1
UpdateDivider=2
X=(110 - #LedW# / 2)
Y=(#BlockHeight# - 22 - #LedH# / 2)
W=#LedW#
H=#LedH#
