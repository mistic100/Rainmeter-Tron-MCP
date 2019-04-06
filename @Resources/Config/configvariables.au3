#include <ButtonConstants.au3>
#include <EditConstants.au3>
#include <GUIConstantsEx.au3>
#include <GUIListBox.au3>
#include <StaticConstants.au3>
#include <WindowsConstants.au3>
#include <ScrollBarConstants.au3>
#include <array.au3>
#include <GuiStatusBar.au3>
#include <GuiEdit.au3>
#include <GuiButton.au3>
#include <Misc.au3>
#include <String.au3>
#Include <File.au3>

Opt("TrayIconHide", 1)

$cfgRefreshCommand = IniRead("cvsettings.inc", "Settings", "RefreshCommand", "")
$cfgTaskbarTitle = IniRead("cvsettings.inc", "Settings", "TaskbarTitle", "")
$cfgPanelWidth = IniRead("cvsettings.inc", "Settings", "PanelWidth", "")
$cfgPanelHeight = IniRead("cvsettings.inc", "Settings", "PanelHeight", "")
$cfgHeaderImage = IniRead("cvsettings.inc", "Settings", "HeaderImage", "")
$cfgDescriptionLines = IniRead("cvsettings.inc", "Settings", "DescriptionLines", "")
$cfgFiles = IniReadSection("cvsettings.inc", "Files")
$cfgVariables = IniReadSection("cvsettings.inc", "Variables")

$spacing = 10
$headerHeight = 60
$btnHeight = 33
$NOT_FOUND = "###NOT_FOUND###"

$Gui = GUICreate($cfgTaskbarTitle, $cfgPanelWidth, $cfgPanelHeight, -1, -1, BitOR($WS_SYSMENU, $WS_POPUP, $WS_POPUPWINDOW, $WS_BORDER, $WS_CLIPSIBLINGS))
GUISetFont(14, 400, 0, "Segoe UI")

$Drag = GUICtrlCreatePic($cfgHeaderImage, 0, 0, $cfgPanelWidth, $headerHeight, Default, $GUI_WS_EX_PARENTDRAG)

$VariablesList = GUICtrlCreateList("", $spacing, $headerHeight+$spacing, $cfgPanelWidth-$spacing*2, $cfgPanelHeight-$headerHeight-$spacing*5-$btnHeight*2-$cfgDescriptionLines*14, $WS_VSCROLL, 0)

$VariableDescription = GUICtrlCreateLabel("", $spacing, $cfgPanelHeight-$spacing*3-$btnHeight*2-$cfgDescriptionLines*14*2, $cfgPanelWidth-$spacing*2, $cfgDescriptionLines*14*2)

$VariableInput = GUICtrlCreateInput("", $spacing, $cfgPanelHeight-$spacing*2-$btnHeight*2, $cfgPanelWidth-$spacing*2, $btnHeight, BitOR($SS_NOTIFY, $ES_LEFT, $ES_AUTOHSCROLL))

$UpdateButton = GUICtrlCreateButton("Update", $spacing, $cfgPanelHeight-41, $cfgPanelWidth/2-$spacing/2*3, $btnHeight)

$ExitButton = GUICtrlCreateButton("Exit", $cfgPanelWidth/2+$spacing/2, $cfgPanelHeight-41, $cfgPanelWidth/2-$spacing/2*3, $btnHeight)

GUISetState(@SW_SHOW)

For $i = 1 to $cfgVariables[0][0]
   GUICtrlSetData($VariablesList, $cfgVariables[$i][0] & "|")
Next

While 1
   $nMsg = GUIGetMsg()

   Switch $nMsg

	  Case $GUI_EVENT_CLOSE
		 Exit

	  Case $ExitButton
		 Exit

	  Case $UpdateButton
		 ShellExecute("refresh.exe", $cfgRefreshCommand)

	  Case $VariableInput
		 $NewVarValue = GUICtrlRead($VariableInput)

		 If $NewVarValue <> $CurrentVarValue Then
			For $i = 1 to $cfgFiles[0][0]
			   $Temp = IniRead($cfgFiles[$i][1], "Variables", $CurrentVarName, $NOT_FOUND)
			   If $Temp <> $NOT_FOUND then
				  IniWrite ($cfgFiles[$i][1], "Variables", $CurrentVarName, GUICtrlRead($VariableInput))
				  ExitLoop
			   EndIf
			Next
		 EndIf

		 $CurrentVarValue = $NewVarValue

	  Case $VariablesList
		 $CurrentVarName = GUICtrlRead($VariablesList)
		 $CurrentVarValue = ""

		 For $i = 1 to $cfgVariables[0][0]
			if $cfgVariables[$i][0] = $CurrentVarName Then
			   GUICtrlSetData($VariableDescription, $cfgVariables[$i][1])
			   ExitLoop
			EndIf
		 Next

		 For $i = 1 to $cfgFiles[0][0]
			$Temp = IniRead($cfgFiles[$i][1], "Variables", $CurrentVarName, $NOT_FOUND)
			If $Temp <> $NOT_FOUND then
			   GUICtrlSetData($VariableInput, $Temp)
			   $CurrentVarValue = $Temp
			   ExitLoop
			EndIf
		 Next

EndSwitch
WEnd