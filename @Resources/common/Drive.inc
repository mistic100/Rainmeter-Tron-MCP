[Styles]
@include=#@#common\Styles.inc

[Variables]
BlockWidth=170
BlockHeight=129

BarX=20
BarY=44
BarW=95
BarH=30


; ----------------------------------
; STYLES
; ----------------------------------

[Graph]
X=(#BarX# + 1)
Y=80
W=(#BarW# - 1)
H=(#BarH# - 2)

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
; DISPLAY
; ----------------------------------

[MeterBackground]
Meter=Image
ImageName=#@#images\drive-bg.png
X=0
Y=0
W=#BlockWidth#
H=#BlockHeight#
