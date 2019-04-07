[Styles]
@include=#@#Common\Styles.inc

[Variables]
BlockWidth=340
BlockHeight=129

RoundlineX=70
RoundlineY=(#BlockHeight# / 2)


; ----------------------------------
; STYLES
; ----------------------------------

[StyleGraph]
X=116
Y=43
H=43
W=109

[StyleTextTopCenter]
FontWeight=700
StringAlign=CenterCenter
X=(#BlockWidth# / 2)
Y=20

[StyleTextBottomCenter]
FontWeight=700
StringAlign=CenterCenter
X=(#BlockWidth# / 2)
Y=(#BlockHeight# - 18)

[StyleTextRoundlineLeft]
FontWeight=700
StringAlign=RightCenter
X=(#RoundlineX# + 20)
Y=#RoundlineY#

[StyleTextRoundlineRight]
FontWeight=700
StringAlign=RightCenter
X=(#BlockWidth# - #RoundlineX# + 20)
Y=#RoundlineY#


; ----------------------------------
; DISPLAY
; ----------------------------------

[MeterBackground]
Meter=Image
ImageName=#@#Images\graph-bg-1.png
X=0
Y=0
W=#BlockWidth#
H=#BlockHeight#
