[Styles]
@include=#@#Common\Styles.inc

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

[StyleGraph]
X=(#BarX# + 1)
Y=80
W=(#BarW# - 1)
H=(#BarH# - 2)

[StyleTextTop]
FontSize=12
FontWeight=700
X=20
Y=17

[StyleTextBar]
StringAlign=RightTop
FontSize=(#FontSize# - 1)
FontWeight=700
X=-10R
Y=11r


; ----------------------------------
; DISPLAY
; ----------------------------------

[MeterBackground]
Meter=Image
ImageName=#@#Images\drive-bg.png
X=0
Y=0
W=#BlockWidth#
H=#BlockHeight#
