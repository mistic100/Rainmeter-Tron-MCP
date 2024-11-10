[Variables]
ColorBlue=329c9d
ColorOrange=df740c
ColorWhite=e6ffff

ColorWhiteTransparent=#ColorWhite#22
ColorOrangeTransparent=#ColorOrange#44

FontName=GeosansLight
FontSize=12

RoundlineSize=40
RoundlineSmallSize=29
RoundlineSpacing=3
RoundlineThinLength=5
RoundlineThinPadding=1
RoundlineStdLength=(#RoundlineThinLength# * 2 + #RoundlineSpacing#)
RoundlineStdPadding=2


; ----------------------------------
; STYLES
; ----------------------------------

[RoundlineBackground]
Solid=1
AntiAlias=1
LineColor=#ColorWhiteTransparent#

[RoundlineBlue]
Solid=1
AntiAlias=1
LineColor=#ColorBlue#

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
LineStart=(#RoundlineSmallSize# - #RoundlineStdLength# + #RoundlineStdPadding# + 3)
LineLength=(#RoundlineSmallSize# - #RoundlineStdPadding#)

[RoundlineSmall]
LineStart=(#RoundlineSmallSize# - #RoundlineStdLength# + 3)
LineLength=(#RoundlineSmallSize#)

[StyleTextOrange]
AntiAlias=1
FontColor=#ColorOrange#
FontFace=#FontName#
FontSize=#FontSize#

[StyleTextWhite]
AntiAlias=1
FontColor=#ColorWhite#
FontFace=#FontName#
FontSize=#FontSize#

[StyleTextBlue]
AntiAlias=1
FontColor=#ColorBlue#
FontFace=#FontName#
FontSize=#FontSize#

[StyleTextWhiteShadow]
InlineSetting=Shadow | 0 | 0 | 3 | #ColorWhite#

[StyleTextBlueShadow]
InlineSetting=Shadow | 0 | 0 | 3 | #ColorBlue#

[StyleTextGraph]
FontSize=(#FontSize# - 1)
X=0r
Y=0r
