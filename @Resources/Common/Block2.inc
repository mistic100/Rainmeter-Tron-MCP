[Styles]
@include=#@#Common\Styles.inc

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

[StyleGraph]
X=#GraphRightX#
Y=#GraphRightY#
H=#GraphRightH#
W=#GraphRightW#

[StyleGraphTop]
X=#GraphRightX#
Y=#GraphRightY#
H=(Ceil(#GraphRightH# / 2))
W=#GraphRightW#

[StyleGraphBottom]
X=#GraphRightX#
Y=(#GraphRightY# + Floor(#GraphRightH# / 2))
H=(Ceil(#GraphRightH# / 2))
W=#GraphRightW#

[StyleTextTopLeft]
FontWeight=700
StringAlign=LeftCenter
X=40
Y=20

[StyleTextBottomRight]
FontWeight=700
StringAlign=RightCenter
X=(#BlockWidth# - 40)
Y=(#BlockHeight# - 18)
W=90
ClipString=1

[StyleTextLeftLine1]
FontSize=(#FontSize# - 1)
FontWeight=700
StringAlign=LeftCenter
X=33
Y=55

[StyleTextLeftLine2]
FontSize=(#FontSize# - 1)
FontWeight=700
StringAlign=LeftCenter
X=0r
Y=3R

[StyleTextRoundline]
FontWeight=700
StringAlign=RightCenter
X=(#RoundlineX# + 20)
Y=#RoundlineY#


; ----------------------------------
; DISPLAY
; ----------------------------------

[MeterBackground]
Meter=Image
ImageName=#@#Images\graph-bg-2.png
X=0
Y=0
W=#BlockWidth#
H=#BlockHeight#
