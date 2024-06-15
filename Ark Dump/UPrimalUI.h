#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "FKey.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"
#include "FControllerEvent.h"

struct UPrimalUI : UUserWidget
{
	char __padding[0x2d8L];
	bool& bAddedToViewportClientField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bAddedToViewportClient"); }
	long double& PressedSelectButtonTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalUI.PressedSelectButtonTime"); }
	bool& bSelectButtonPressedField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bSelectButtonPressed"); }
	bool& bIsHoldingSelectButtonField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsHoldingSelectButton"); }
	float& IntervalToActivateHoldField() { return *GetNativePointerField<float*>(this, "UPrimalUI.IntervalToActivateHold"); }
	bool& bCaptureMouseInputField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bCaptureMouseInput"); }
	bool& bIsClosingField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsClosing"); }
	bool& bWantsPrimalItemNotificationsField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bWantsPrimalItemNotifications"); }
	bool& bEscapeClosesMenuField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bEscapeClosesMenu"); }
	bool& bEscapeOpensPauseMenuField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bEscapeOpensPauseMenu"); }
	bool& bClickClosesMenuField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bClickClosesMenu"); }
	bool& bIsGameplayUIField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsGameplayUI"); }
	bool& bIsTopUIField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsTopUI"); }
	TEnumAsByte<enum HighlightStartingPoint>& HighlightStartPointTypeField() { return *GetNativePointerField<TEnumAsByte<enum HighlightStartingPoint>*>(this, "UPrimalUI.HighlightStartPointType"); }
	TSubclassOf<UUI_GenericConfirmationDialog>& ConfirmationDialogUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_GenericConfirmationDialog>*>(this, "UPrimalUI.ConfirmationDialogUITemplate"); }
	TSubclassOf<UUI_XBoxFooter>& XBoxFooterUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_XBoxFooter>*>(this, "UPrimalUI.XBoxFooterUITemplate"); }
	bool& bShowCancelIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowCancelIcon"); }
	bool& bShowAcceptIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowAcceptIcon"); }
	bool& bShowLStickIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowLStickIcon"); }
	bool& bShowRStickIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowRStickIcon"); }
	bool& bShowBumpersIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowBumpersIcon"); }
	bool& bShowStartBtnIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowStartBtnIcon"); }
	bool& bShowLTBtnIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowLTBtnIcon"); }
	bool& bShowRTBtnIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowRTBtnIcon"); }
	bool& bShowFaceBtnLeftIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowFaceBtnLeftIcon"); }
	bool& bShowFaceBtnTopIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowFaceBtnTopIcon"); }
	bool& bShowFaceBtnRightIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowFaceBtnRightIcon"); }
	bool& bShowFaceBtnBottomIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowFaceBtnBottomIcon"); }
	bool& bShowLeftShoulderBtnIconField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowLeftShoulderBtnIcon"); }
	bool& bShowXBoxFooterField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShowXBoxFooter"); }
	bool& bIgnoreUIScalingField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIgnoreUIScaling"); }
	float& SplitscreenDPIScalerField() { return *GetNativePointerField<float*>(this, "UPrimalUI.SplitscreenDPIScaler"); }
	bool& bDoExtraDataListButtonPanelFilteringChecksField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bDoExtraDataListButtonPanelFilteringChecks"); }
	FName& DefaultHighlightWidgetOverrideNameField() { return *GetNativePointerField<FName*>(this, "UPrimalUI.DefaultHighlightWidgetOverrideName"); }
	bool& bShouldValidateInputOnRemoveField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bShouldValidateInputOnRemove"); }
	bool& bIsDraggingWidgetField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsDraggingWidget"); }
	long double& OpenedTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalUI.OpenedTime"); }
	float& AnalogDeltaXField() { return *GetNativePointerField<float*>(this, "UPrimalUI.AnalogDeltaX"); }
	float& AnalogDeltaYField() { return *GetNativePointerField<float*>(this, "UPrimalUI.AnalogDeltaY"); }
	float& LeftAnalogDeltaXField() { return *GetNativePointerField<float*>(this, "UPrimalUI.LeftAnalogDeltaX"); }
	float& LeftAnalogDeltaYField() { return *GetNativePointerField<float*>(this, "UPrimalUI.LeftAnalogDeltaY"); }
	FVector2D& ScrollMaxVelocityField() { return *GetNativePointerField<FVector2D*>(this, "UPrimalUI.ScrollMaxVelocity"); }
	FVector2D& ScrollCurrentVelocityField() { return *GetNativePointerField<FVector2D*>(this, "UPrimalUI.ScrollCurrentVelocity"); }
	FVector2D& ScrollTagetVelocityField() { return *GetNativePointerField<FVector2D*>(this, "UPrimalUI.ScrollTagetVelocity"); }
	bool& bScrolledField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bScrolled"); }
	bool& bKeepControllerOpenedToolTipField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bKeepControllerOpenedToolTip"); }
	bool& bKeepToolTipOpenField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bKeepToolTipOpen"); }
	FVector2D& LastHighlightedScreenPosField() { return *GetNativePointerField<FVector2D*>(this, "UPrimalUI.LastHighlightedScreenPos"); }
	float& LastXLeftField() { return *GetNativePointerField<float*>(this, "UPrimalUI.LastXLeft"); }
	float& LastYLeftField() { return *GetNativePointerField<float*>(this, "UPrimalUI.LastYLeft"); }
	bool& bRemovedFromViewportField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bRemovedFromViewport"); }
	long double& LastGamepadMovementTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalUI.LastGamepadMovementTime"); }
	bool& bCanBeTopField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bCanBeTop"); }
	bool& bUsingTooltipField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bUsingTooltip"); }
	FKey& ShowGlobalChatKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ShowGlobalChatKey"); }
	FKey& ShowTribeChatKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ShowTribeChatKey"); }
	FKey& ShowLocalChatKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ShowLocalChatKey"); }
	FKey& ShowAllianceChatKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ShowAllianceChatKey"); }
	FKey& ToggleAutoChatKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ToggleAutoChatKey"); }
	FKey& ScrollChatDownKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ScrollChatDownKey"); }
	FKey& ScrollChatUpKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ScrollChatUpKey"); }
	FKey& ScrollUpGamePadKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ScrollUpGamePadKey"); }
	FKey& ScrollDownGamePadKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.ScrollDownGamePadKey"); }
	FKey& RightStickFunctionModifierKeyField() { return *GetNativePointerField<FKey*>(this, "UPrimalUI.RightStickFunctionModifierKey"); }
	bool& bModifyRightStickFunctionField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bModifyRightStickFunction"); }
	bool& bIsPaintingField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bIsPainting"); }
	bool& bHasCycleHighlightedField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bHasCycleHighlighted"); }
	bool& bDisableHighlightSetAfterAnimationIfCycleHighlightedField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bDisableHighlightSetAfterAnimationIfCycleHighlighted"); }
	bool& bCachedIsGamepadActiveField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bCachedIsGamepadActive"); }
	long double& LastTooltipChangeTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalUI.LastTooltipChangeTime"); }
	float& LastTargetVelocityYField() { return *GetNativePointerField<float*>(this, "UPrimalUI.LastTargetVelocityY"); }
	bool& bResetTooltipField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bResetTooltip"); }
	bool& bForceDirtyWidgetGeometryCacheField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bForceDirtyWidgetGeometryCache"); }
	bool& bBlockMovementForAddingField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bBlockMovementForAdding"); }
	float& OrgRenderTransformPivotYField() { return *GetNativePointerField<float*>(this, "UPrimalUI.OrgRenderTransformPivotY"); }
	float& OrgRenderTransformTranslationYField() { return *GetNativePointerField<float*>(this, "UPrimalUI.OrgRenderTransformTranslationY"); }
	FVector2D& OrgRenderTransformScaleField() { return *GetNativePointerField<FVector2D*>(this, "UPrimalUI.OrgRenderTransformScale"); }
	bool& bDirtyCacheField() { return *GetNativePointerField<bool*>(this, "UPrimalUI.bDirtyCache"); }

	// Functions

	void NotifyInventoryFolderAdded(UPrimalInventoryComponent * inventoryComp, FString FolderName, int InventoryCompType) { NativeCall<void, UPrimalInventoryComponent *, FString, int>(this, "UPrimalUI.NotifyInventoryFolderAdded", inventoryComp, FolderName, InventoryCompType); }
	void SetItemContainer(APrimalStructureItemContainer * Container) { NativeCall<void, APrimalStructureItemContainer *>(this, "UPrimalUI.SetItemContainer", Container); }
	void UpdateHighlightedWidgets(TArray<UWidget *> Widgets) { NativeCall<void, TArray<UWidget *>>(this, "UPrimalUI.UpdateHighlightedWidgets", Widgets); }
	void AddToViewport() { NativeCall<void>(this, "UPrimalUI.AddToViewport"); }
	void BPProcessSplitscreenAndAddToViewport(bool ScaleX) { NativeCall<void, bool>(this, "UPrimalUI.BPProcessSplitscreenAndAddToViewport", ScaleX); }
	void CacheLastHighlightedWidget(UWidget * widget) { NativeCall<void, UWidget *>(this, "UPrimalUI.CacheLastHighlightedWidget", widget); }
	void CacheSplitScreenValues() { NativeCall<void>(this, "UPrimalUI.CacheSplitScreenValues"); }
	bool CanBeHighlightedForGamePad(UWidget * widget) { return NativeCall<bool, UWidget *>(this, "UPrimalUI.CanBeHighlightedForGamePad", widget); }
	bool CanControlScene(const FControllerEvent * ControllerEvent) { return NativeCall<bool, const FControllerEvent *>(this, "UPrimalUI.CanControlScene", ControllerEvent); }
	static unsigned int ChangeChildrenTextColor(UPanelWidget * parent, const FSlateColor * newColor, bool recursive) { return NativeCall<unsigned int, UPanelWidget *, const FSlateColor *, bool>(nullptr, "UPrimalUI.ChangeChildrenTextColor", parent, newColor, recursive); }
	void CheckGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UPrimalUI.CheckGamepadActiveChanged", bIsGamepadActive); }
	bool CheckRehighlight(UPrimalItem * Item, bool bSwapped) { return NativeCall<bool, UPrimalItem *, bool>(this, "UPrimalUI.CheckRehighlight", Item, bSwapped); }
	void ClickedButtonWithController(UWidget * clickedWidget, int ControllerId) { NativeCall<void, UWidget *, int>(this, "UPrimalUI.ClickedButtonWithController", clickedWidget, ControllerId); }
	void CloseScene() { NativeCall<void>(this, "UPrimalUI.CloseScene"); }
	void CloseTooltip() { NativeCall<void>(this, "UPrimalUI.CloseTooltip"); }
	void CloseWithAnimation() { NativeCall<void>(this, "UPrimalUI.CloseWithAnimation"); }
	bool ComponentsHasKeyboardFocus() { return NativeCall<bool>(this, "UPrimalUI.ComponentsHasKeyboardFocus"); }
	void ControlHighlighted(ControlDirection Dir, FKey theKey, float AnalogValue) { NativeCall<void, ControlDirection, FKey, float>(this, "UPrimalUI.ControlHighlighted", Dir, theKey, AnalogValue); }
	void CycleComboBox(UComboBoxString * CBox, ControlDirection Dir) { NativeCall<void, UComboBoxString *, ControlDirection>(this, "UPrimalUI.CycleComboBox", CBox, Dir); }
	void CycleHighlighted(UWidget * RestrictToParent, UDataListPanel * RestrictToDataListPanel) { NativeCall<void, UWidget *, UDataListPanel *>(this, "UPrimalUI.CycleHighlighted", RestrictToParent, RestrictToDataListPanel); }
	void DisableClipChildren() { NativeCall<void>(this, "UPrimalUI.DisableClipChildren"); }
	bool EnsureAlphaNumeric(FString * text, int maxChars) { return NativeCall<bool, FString *, int>(this, "UPrimalUI.EnsureAlphaNumeric", text, maxChars); }
	bool EnsureNumeric(FString * text, int maxChars) { return NativeCall<bool, FString *, int>(this, "UPrimalUI.EnsureNumeric", text, maxChars); }
	void GetAbsPosSize(UWidget * Widget, FVector2D * AbsPos, FVector2D * Size) { NativeCall<void, UWidget *, FVector2D *, FVector2D *>(this, "UPrimalUI.GetAbsPosSize", Widget, AbsPos, Size); }
	void GetAllWidgets(TArray<UWidget *> * Widgets) { NativeCall<void, TArray<UWidget *> *>(this, "UPrimalUI.GetAllWidgets", Widgets); }
	void GetDirectionStartAndEndPoint(FVector * DirP1, FVector * DirP2, FVector2D * DirToCurr) { NativeCall<void, FVector *, FVector *, FVector2D *>(this, "UPrimalUI.GetDirectionStartAndEndPoint", DirP1, DirP2, DirToCurr); }
	AShooterPlayerController * GetPC() { return NativeCall<AShooterPlayerController *>(this, "UPrimalUI.GetPC"); }
	AShooterPlayerState * GetPlayerState() { return NativeCall<AShooterPlayerState *>(this, "UPrimalUI.GetPlayerState"); }
	AShooterHUD * GetShooterHud() { return NativeCall<AShooterHUD *>(this, "UPrimalUI.GetShooterHud"); }
	bool GetWidgetGeometry(UWidget * Widget, FGeometry * Geometry) { return NativeCall<bool, UWidget *, FGeometry *>(this, "UPrimalUI.GetWidgetGeometry", Widget, Geometry); }
	void HTTPGetString(FString InURL) { NativeCall<void, FString>(this, "UPrimalUI.HTTPGetString", InURL); }
	void HTTPGetStringRequestCompleted(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "UPrimalUI.HTTPGetStringRequestCompleted", HttpRequest, HttpResponse, bSucceeded); }
	bool HandleControllerAnalogValueChanged(FControllerEvent ControllerEvent) { return NativeCall<bool, FControllerEvent>(this, "UPrimalUI.HandleControllerAnalogValueChanged", ControllerEvent); }
	bool HandleControllerButtonPressedFromViewport(FControllerEvent ControllerEvent) { return NativeCall<bool, FControllerEvent>(this, "UPrimalUI.HandleControllerButtonPressedFromViewport", ControllerEvent); }
	bool HandleControllerButtonReleasedFromViewport(FControllerEvent ControllerEvent) { return NativeCall<bool, FControllerEvent>(this, "UPrimalUI.HandleControllerButtonReleasedFromViewport", ControllerEvent); }
	void HighlightDefaultWidget(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UPrimalUI.HighlightDefaultWidget", RestrictToPanel); }
	void HighlightItemInDataListByIndex(UDataListPanel * Panel, int index) { NativeCall<void, UDataListPanel *, int>(this, "UPrimalUI.HighlightItemInDataListByIndex", Panel, index); }
	bool HighlightPrevHighlightedWidget() { return NativeCall<bool>(this, "UPrimalUI.HighlightPrevHighlightedWidget"); }
	void HighlightWidgetOnStart(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UPrimalUI.HighlightWidgetOnStart", RestrictToPanel); }
	void HighlightedWidgetPressed(int ControllerId) { NativeCall<void, int>(this, "UPrimalUI.HighlightedWidgetPressed", ControllerId); }
	void InitForObjects(UObject * AssociatedObject1, UObject * AssociatedObject2, unsigned int ExtraID1, unsigned int ExtraID2) { NativeCall<void, UObject *, UObject *, unsigned int, unsigned int>(this, "UPrimalUI.InitForObjects", AssociatedObject1, AssociatedObject2, ExtraID1, ExtraID2); }
	bool IsWidgetInView(UWidget * widget) { return NativeCall<bool, UWidget *>(this, "UPrimalUI.IsWidgetInView", widget); }
	void OnAnimationFinishedPlaying(UUMGSequencePlayer * Player) { NativeCall<void, UUMGSequencePlayer *>(this, "UPrimalUI.OnAnimationFinishedPlaying", Player); }
	void OnConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>(this, "UPrimalUI.OnConfirmationDialogClosed", bAccept); }
	void OnGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UPrimalUI.OnGamepadActiveChanged", bIsGamepadActive); }
	void OnHoldSelectButton() { NativeCall<void>(this, "UPrimalUI.OnHoldSelectButton"); }
	void PopulateWidgetGeometryCache(FArrangedWidget * Root) { NativeCall<void, FArrangedWidget *>(this, "UPrimalUI.PopulateWidgetGeometryCache", Root); }
	void ProcessSplitscreen(bool ScaleX) { NativeCall<void, bool>(this, "UPrimalUI.ProcessSplitscreen", ScaleX); }
	void ProcessSplitscreenAndAddToViewport(bool ScaleX) { NativeCall<void, bool>(this, "UPrimalUI.ProcessSplitscreenAndAddToViewport", ScaleX); }
	void ProcessSplitscreenScaling(bool ScaleX) { NativeCall<void, bool>(this, "UPrimalUI.ProcessSplitscreenScaling", ScaleX); }
	void ReHighlightSlotInDataList(int index, UDataListPanel * ParentDataList) { NativeCall<void, int, UDataListPanel *>(this, "UPrimalUI.ReHighlightSlotInDataList", index, ParentDataList); }
	void RefreshKeyBindings() { NativeCall<void>(this, "UPrimalUI.RefreshKeyBindings"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UPrimalUI.RemoveFromViewport"); }
	void RemoveWidget(UWidget * WidgetToRemove) { NativeCall<void, UWidget *>(this, "UPrimalUI.RemoveWidget", WidgetToRemove); }
	void SelectClosestToLastHighlightedPos() { NativeCall<void>(this, "UPrimalUI.SelectClosestToLastHighlightedPos"); }
	void SetCachedItemForReHighlight(UWidget * widget) { NativeCall<void, UWidget *>(this, "UPrimalUI.SetCachedItemForReHighlight", widget); }
	void SetHighlightedWidget(UWidget * widget, bool bSetLastHighlightedPosition) { NativeCall<void, UWidget *, bool>(this, "UPrimalUI.SetHighlightedWidget", widget, bSetLastHighlightedPosition); }
	void SetInputMode() { NativeCall<void>(this, "UPrimalUI.SetInputMode"); }
	void SetOverlayWidget(UWidget * InOverlayWidget) { NativeCall<void, UWidget *>(this, "UPrimalUI.SetOverlayWidget", InOverlayWidget); }
	void SetSelectedAndDraggedEntry(UWidget * widget) { NativeCall<void, UWidget *>(this, "UPrimalUI.SetSelectedAndDraggedEntry", widget); }
	void SetupInputFocusAndHighlight() { NativeCall<void>(this, "UPrimalUI.SetupInputFocusAndHighlight"); }
	void SetupSpecialWidgetAdjacents(UWidget * InWidget) { NativeCall<void, UWidget *>(this, "UPrimalUI.SetupSpecialWidgetAdjacents", InWidget); }
	void SetupWidgetAdjacents() { NativeCall<void>(this, "UPrimalUI.SetupWidgetAdjacents"); }
	bool ShouldHighlightParentPanel(UWidget * widget) { return NativeCall<bool, UWidget *>(this, "UPrimalUI.ShouldHighlightParentPanel", widget); }
	void ShowConfirmationDialog(const FString * TitleText, const FString * MessageText) { NativeCall<void, const FString *, const FString *>(this, "UPrimalUI.ShowConfirmationDialog", TitleText, MessageText); }
	void ShowToolTip(UWidget * sponsorWidget) { NativeCall<void, UWidget *>(this, "UPrimalUI.ShowToolTip", sponsorWidget); }
	void ShowToolTipForHighlighted() { NativeCall<void>(this, "UPrimalUI.ShowToolTipForHighlighted"); }
	void StadiaDetectHeldSelectButtonFallback() { NativeCall<void>(this, "UPrimalUI.StadiaDetectHeldSelectButtonFallback"); }
	void StadiaDetermineIfButtonShouldTriggerHeldActivation() { NativeCall<void>(this, "UPrimalUI.StadiaDetermineIfButtonShouldTriggerHeldActivation"); }
	void StopHighlightedWidgets() { NativeCall<void>(this, "UPrimalUI.StopHighlightedWidgets"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UPrimalUI.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UnHighlightWidget(bool bAllWidgets) { NativeCall<void, bool>(this, "UPrimalUI.UnHighlightWidget", bAllWidgets); }
	void UpdateTooltips(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalUI.UpdateTooltips", DeltaSeconds); }
	bool WantsVisible() { return NativeCall<bool>(this, "UPrimalUI.WantsVisible"); }
	void WidgetTreeGetAllChildWidgets(UWidget * Parent, TArray<UWidget *> * Widgets) { NativeCall<void, UWidget *, TArray<UWidget *> *>(this, "UPrimalUI.WidgetTreeGetAllChildWidgets", Parent, Widgets); }
	void AddedToViewport() { NativeCall<void>(this, "UPrimalUI.AddedToViewport"); }
	void RemovedFromViewport() { NativeCall<void>(this, "UPrimalUI.RemovedFromViewport"); }
};

