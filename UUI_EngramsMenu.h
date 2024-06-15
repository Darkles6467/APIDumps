#pragma once

#include "BaseDeclarations.h"
#include "UPrimalSubMenuUI.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_EngramsMenu : UPrimalSubMenuUI
{
	char __padding[0x120L];
	FName& ARKPrimeEngramsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.ARKPrimeEngramsButtonName"); }
	FName& ScorchedEarthEngramsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.ScorchedEarthEngramsButtonName"); }
	FName& TekgramsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.TekgramsButtonName"); }
	FName& LearnEngramButtonTextNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.LearnEngramButtonTextName"); }
	FName& AvailablePointsTextNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.AvailablePointsTextName"); }
	FName& UnlearnedEngramsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.UnlearnedEngramsButtonName"); }
	FName& AberrationEngramsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.AberrationEngramsButtonName"); }
	FName& ExtinctionEngramsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.ExtinctionEngramsButtonName"); }
	FName& GenesisEngramsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.GenesisEngramsButtonName"); }
	FName& EngramTitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.EngramTitleLabelName"); }
	FName& EngramsDataListNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.EngramsDataListName"); }
	FName& EngramFilterTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.EngramFilterTextBoxName"); }
	FName& LearnEngramButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_EngramsMenu.LearnEngramButtonName"); }
	long double& DelayInputUntilField() { return *GetNativePointerField<long double*>(this, "UUI_EngramsMenu.DelayInputUntil"); }
	UTextBlock * EngramTitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_EngramsMenu.EngramTitleLabel"); }
	UTextBlock * LearnEngramButtonTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_EngramsMenu.LearnEngramButtonText"); }
	UTextBlock * AvailablePointsTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_EngramsMenu.AvailablePointsText"); }
	UDataListPanel * EngramsDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_EngramsMenu.EngramsDataList"); }
	UCustomButtonWidget * ARKPrimeEngramsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_EngramsMenu.ARKPrimeEngramsButton"); }
	UCustomButtonWidget * ScorchedEarthEngramsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_EngramsMenu.ScorchedEarthEngramsButton"); }
	UCustomButtonWidget * TekEngramsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_EngramsMenu.TekEngramsButton"); }
	UCustomButtonWidget * UnlearnedEngramsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_EngramsMenu.UnlearnedEngramsButton"); }
	UCustomButtonWidget * AberrationEngramsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_EngramsMenu.AberrationEngramsButton"); }
	UCustomButtonWidget * ExtinctionEngramsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_EngramsMenu.ExtinctionEngramsButton"); }
	UCustomButtonWidget * GenesisEngramsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_EngramsMenu.GenesisEngramsButton"); }
	UCustomButtonWidget * Gen2EngramButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_EngramsMenu.Gen2EngramButton"); }
	UImage * LearnEngramGamepadCalloutField() { return GetNativePointerField<UImage *>(this, "UUI_EngramsMenu.LearnEngramGamepadCallout"); }
	TArray<OverlayAnimationData>& EffectEntriesField() { return *GetNativePointerField<TArray<OverlayAnimationData>*>(this, "UUI_EngramsMenu.EffectEntries"); }
	UDataListEntryWidget * LastSelectedEntryField() { return GetNativePointerField<UDataListEntryWidget *>(this, "UUI_EngramsMenu.LastSelectedEntry"); }
	FVector2D& LastGamepadClickedHighlightedScreenPosField() { return *GetNativePointerField<FVector2D*>(this, "UUI_EngramsMenu.LastGamepadClickedHighlightedScreenPos"); }
	bool& bGamepadEngramLearnFinishedField() { return *GetNativePointerField<bool*>(this, "UUI_EngramsMenu.bGamepadEngramLearnFinished"); }
	int& LatestPlayerLevelField() { return *GetNativePointerField<int*>(this, "UUI_EngramsMenu.LatestPlayerLevel"); }
	float& ScrollOffsetField() { return *GetNativePointerField<float*>(this, "UUI_EngramsMenu.ScrollOffset"); }
	bool& bForceScrollOffsetField() { return *GetNativePointerField<bool*>(this, "UUI_EngramsMenu.bForceScrollOffset"); }
	int& NextEngramToCheckField() { return *GetNativePointerField<int*>(this, "UUI_EngramsMenu.NextEngramToCheck"); }

	// Functions

	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_EngramsMenu.ClickedButton", clickedWidget); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UUI_EngramsMenu.ConfirmationDialogAccepted"); }
	void ConfirmationDialogCancelled() { NativeCall<void>(this, "UUI_EngramsMenu.ConfirmationDialogCancelled"); }
	void EngramDoubleClicked(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UUI_EngramsMenu.EngramDoubleClicked", theButton); }
	void EngramSelected(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UUI_EngramsMenu.EngramSelected", theButton); }
	int GetChainedEngramCostTotal(UPrimalEngramEntry * anEntry) { return NativeCall<int, UPrimalEngramEntry *>(this, "UUI_EngramsMenu.GetChainedEngramCostTotal", anEntry); }
	int GetEngramsFilterBitmask() { return NativeCall<int>(this, "UUI_EngramsMenu.GetEngramsFilterBitmask"); }
	void HighlightDefaultWidget(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_EngramsMenu.HighlightDefaultWidget", RestrictToPanel); }
	void InitializeSubMenu(UUI_Hub * Hub) { NativeCall<void, UUI_Hub *>(this, "UUI_EngramsMenu.InitializeSubMenu", Hub); }
	void OnEngramFilterChanged(const FText * text) { NativeCall<void, const FText *>(this, "UUI_EngramsMenu.OnEngramFilterChanged", text); }
	void OnEngramsFilterChanged(bool bIsChecked) { NativeCall<void, bool>(this, "UUI_EngramsMenu.OnEngramsFilterChanged", bIsChecked); }
	void OnHighlightedWidget(UWidget * HighlightedWidget) { NativeCall<void, UWidget *>(this, "UUI_EngramsMenu.OnHighlightedWidget", HighlightedWidget); }
	void OnShow() { NativeCall<void>(this, "UUI_EngramsMenu.OnShow"); }
	void TickLearnedEngramAnimations(float InDeltaTime) { NativeCall<void, float>(this, "UUI_EngramsMenu.TickLearnedEngramAnimations", InDeltaTime); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_EngramsMenu.Tick_Implementation", MyGeometry, InDeltaTime); }
};

