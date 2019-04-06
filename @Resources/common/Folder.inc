[Styles]
@include=#@#common\Styles.inc

[Variables]
BlockWidth=340
BlockHeight=129

FirstLine=33


; ----------------------------------
; STYLES
; ----------------------------------

[TextTitle]
FontSize=#FontSize#
FontWeight=700
StringAlign=CenterCenter
X=(#BlockWidth# / 2)
Y=21

[TextValue]
FontSize=(#FontSize# + 1)
Y=0R
H=21

[TextLabel]
FontSize=#FontSize#
ClipString=1
H=20
X=0r
Y=1r


; ----------------------------------
; DISPLAY
; ----------------------------------

[MeterBackground]
Meter=Image
ImageName=#@#images\folder.png
X=0
Y=0
W=#BlockWidth#
H=#BlockHeight#
