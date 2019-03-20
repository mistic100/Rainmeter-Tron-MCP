[Variables]
Update=5

TronBlue=329c9d
TronOrange=df740c
TronWhite=e6ffff
TronYellow=ffe64d
TronBlack=0c141f

TronWhiteTransparent=#TronWhite#22
TronOrangeTransparent=#TronOrange#44

Font=GeosansLight
FontSize=12

RoundlineSize=40
RoundlineSmallSize=24
RoundlineSpacing=3
RoundlineThinLength=5
RoundlineThinPadding=1
RoundlineStdLength=(#RoundlineThinLength# * 2 + #RoundlineSpacing#)
RoundlineStdPadding=2

RoundlineSmallLeftX=133
RoundlineSmallRightX=283
RoundlineSmallY=(#HeightSmall# / 2)


; ----------------------------------
; STYLES
; ----------------------------------

[RoundlineBackground]
Solid=1
AntiAlias=1
LineColor=#TronWhiteTransparent#

[RoundlineBlue]
Solid=1
AntiAlias=1
LineColor=#TronBlue#

[RoundlineTopLeftBottom]
StartAngle=(Rad(-90))
RotationAngle=(Rad(-180))

[RoundlineTopRightBottom]
StartAngle=(Rad(-90))
RotationAngle=(Rad(180))

[RoundlineBottomLeftTop]
StartAngle=(Rad(90))
RotationAngle=(Rad(180))

[RoundlineBottomRightTop]
StartAngle=(Rad(90))
RotationAngle=(Rad(-180))

[RoundlineTopRightTop]
StartAngle=(Rad(-90))
RotationAngle(Rad(360))

[RoundlineThinBackground1]
LineStart=(#RoundlineSize# - #RoundlineSpacing# * 0 - #RoundlineThinLength# * 1 + #RoundlineThinPadding#)
LineLength=(#RoundlineSize# - #RoundlineSpacing# * 0 - #RoundlineThinLength# * 0 - #RoundlineThinPadding#)

[RoundlineThinBackground2]
LineStart=(#RoundlineSize# - #RoundlineSpacing# * 1 - #RoundlineThinLength# * 2 + #RoundlineThinPadding#)
LineLength=(#RoundlineSize# - #RoundlineSpacing# * 1 - #RoundlineThinLength# * 1 - #RoundlineThinPadding#)

[RoundlineThinBackground3]
LineStart=(#RoundlineSize# - #RoundlineSpacing# * 2 - #RoundlineThinLength# * 3 + #RoundlineThinPadding#)
LineLength=(#RoundlineSize# - #RoundlineSpacing# * 2 - #RoundlineThinLength# * 2 - #RoundlineThinPadding#)

[RoundlineThin1]
LineStart=(#RoundlineSize# - #RoundlineSpacing# * 0 - #RoundlineThinLength# * 1)
LineLength=(#RoundlineSize# - #RoundlineSpacing# * 0 - #RoundlineThinLength# * 0)

[RoundlineThin2]
LineStart=(#RoundlineSize# - #RoundlineSpacing# * 1 - #RoundlineThinLength# * 2)
LineLength=(#RoundlineSize# - #RoundlineSpacing# * 1 - #RoundlineThinLength# * 1)

[RoundlineThin3]
LineStart=(#RoundlineSize# - #RoundlineSpacing# * 2 - #RoundlineThinLength# * 3)
LineLength=(#RoundlineSize# - #RoundlineSpacing# * 2 - #RoundlineThinLength# * 2)

[RoundlineStdBackground1]
LineStart=(#RoundlineSize# - #RoundlineSpacing# * 0 - #RoundlineStdLength# * 1 + #RoundlineStdPadding#)
LineLength=(#RoundlineSize# - #RoundlineSpacing# * 0 - #RoundlineStdLength# * 0 - #RoundlineStdPadding#)

[RoundlineStdBackground2]
LineStart=(#RoundlineSize# - #RoundlineSpacing# * 1 - #RoundlineStdLength# * 2 + #RoundlineStdPadding#)
LineLength=(#RoundlineSize# - #RoundlineSpacing# * 1 - #RoundlineStdLength# * 1 - #RoundlineStdPadding#)

[RoundlineStd1]
LineStart=(#RoundlineSize# - #RoundlineSpacing# * 0 - #RoundlineStdLength# * 1)
LineLength=(#RoundlineSize# - #RoundlineSpacing# * 0 - #RoundlineStdLength# * 0)

[RoundlineStd2]
LineStart=(#RoundlineSize# - #RoundlineSpacing# * 1 - #RoundlineStdLength# * 2)
LineLength=(#RoundlineSize# - #RoundlineSpacing# * 1 - #RoundlineStdLength# * 1)

[RoundlineSmallBackground]
LineStart=(#RoundlineSmallSize# - #RoundlineThinLength# + #RoundlineThinPadding#) 
LineLength=(#RoundlineSmallSize# - #RoundlineThinPadding#)

[RoundlineSmall]
LineStart=(#RoundlineSmallSize# - #RoundlineThinLength#) 
LineLength=(#RoundlineSmallSize#)

[TextOrange]
AntiAlias=1
FontColor=#TronOrange#
FontFace=#Font#

[TextWhite]
AntiAlias=1
FontColor=#TronWhite#
FontFace=#Font#
