[Styles]
@include=#@#common\Styles.inc

[Variables]
BlockWidth=340
BlockHeight=129

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
X=(#BlockWidth# - #RoundlineX# + 20)
Y=#RoundlineY#


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
