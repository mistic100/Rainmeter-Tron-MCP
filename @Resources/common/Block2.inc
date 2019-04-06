[Styles]
@include=#@#common\Styles.inc

[Variables]
BlockWidth=340
BlockHeight=129

RoundlineX=(#BlockWidth# / 2)
RoundlineY=(#BlockHeight# / 2)

GraphRightX=214
GraphRightY=43
GraphRightH=43
GraphRightW=92
GraphRightP=13


; ----------------------------------
; STYLES
; ----------------------------------

[GraphRight]
X=#GraphRightX#
Y=#GraphRightY#
H=#GraphRightH#
W=#GraphRightW#

[GraphRightTop]
X=#GraphRightX#
Y=#GraphRightY#
H=(Ceil(#GraphRightH# / 2))
W=#GraphRightW#

[GraphRightBottom]
X=#GraphRightX#
Y=(#GraphRightY# + Floor(#GraphRightH# / 2))
H=(Ceil(#GraphRightH# / 2))
W=#GraphRightW#

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
W=90
ClipString=1

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
; DISPLAY
; ----------------------------------

[MeterBackground]
Meter=Image
ImageName=#@#images\graph-bg-2.png
X=0
Y=0
W=#BlockWidth#
H=#BlockHeight#
