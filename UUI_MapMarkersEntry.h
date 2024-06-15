#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_MapMarkersEntry : UPrimalUI
{
	char __padding[0x1a8L];
	TSubclassOf<UDinoListButtonWidget>& SlotButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UDinoListButtonWidget>*>(this, "UUI_MapMarkersEntry.SlotButtonTemplate"); }
	FName& TabBgSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.TabBgSwitcherName"); }
	FName& AddEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.AddEnabledEffectName"); }
	FName& RemoveEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.RemoveEnabledEffectName"); }
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.CloseButtonName"); }
	FName& AcceptButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.AcceptButtonName"); }
	FName& TitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.TitleLabelName"); }
	FName& CoordOneLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.CoordOneLabelName"); }
	FName& CoordTwoLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.CoordTwoLabelName"); }
	FName& MarkerNameLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.MarkerNameLabelName"); }
	FName& MarkerNameTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.MarkerNameTextBoxName"); }
	FName& CoordOneTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.CoordOneTextBoxName"); }
	FName& CoordTwoTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.CoordTwoTextBoxName"); }
	FName& errorBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.errorBlockName"); }
	FName& RemoveCloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.RemoveCloseButtonName"); }
	FName& RemoveAcceptButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.RemoveAcceptButtonName"); }
	FName& RemoveMarkersListNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.RemoveMarkersListName"); }
	FName& RemoveMarkersPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.RemoveMarkersPanelName"); }
	FName& AddMarkersPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.AddMarkersPanelName"); }
	FName& GoToAddButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.GoToAddButtonName"); }
	FName& GoToRemoveButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_MapMarkersEntry.GoToRemoveButtonName"); }
	float& MaxOpenTimeField() { return *GetNativePointerField<float*>(this, "UUI_MapMarkersEntry.MaxOpenTime"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MapMarkersEntry.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MapMarkersEntry.SwitcherTextInactiveColor"); }
	TArray<FLinearColor>& ColorSetMarkersField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "UUI_MapMarkersEntry.ColorSetMarkers"); }
	float& errorTimeField() { return *GetNativePointerField<float*>(this, "UUI_MapMarkersEntry.errorTime"); }
	UTextBlock * TitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MapMarkersEntry.TitleLabel"); }
	UTextBlock * CoordOneLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MapMarkersEntry.CoordOneLabel"); }
	UTextBlock * CoordTwoLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MapMarkersEntry.CoordTwoLabel"); }
	UTextBlock * MarkerNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MapMarkersEntry.MarkerNameLabel"); }
	UTextBlock * errorBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MapMarkersEntry.errorBlock"); }
	UDataListPanel * MarkersListField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_MapMarkersEntry.MarkersList"); }
	TArray<UDinoListButtonWidget *>& EntryWidgetsField() { return *GetNativePointerField<TArray<UDinoListButtonWidget *>*>(this, "UUI_MapMarkersEntry.EntryWidgets"); }
	USlider * PinColorSliderField() { return GetNativePointerField<USlider *>(this, "UUI_MapMarkersEntry.PinColorSlider"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_MapMarkersEntry.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_MapMarkersEntry.ClickedButton", clickedWidget); }
	void CloseMenu() { NativeCall<void>(this, "UUI_MapMarkersEntry.CloseMenu"); }
	bool EnsureNumeric(FString * text, int maxChars) { return NativeCall<bool, FString *, int>(this, "UUI_MapMarkersEntry.EnsureNumeric", text, maxChars); }
	FLinearColor * GetInterpolatedMarkerColor(FLinearColor * result, float InterpolationPercent) { return NativeCall<FLinearColor *, FLinearColor *, float>(this, "UUI_MapMarkersEntry.GetInterpolatedMarkerColor", result, InterpolationPercent); }
	void MarkerButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_MapMarkersEntry.MarkerButtonSelected", theWidget); }
	void OnColorSliderValueChanged(float SliderValue) { NativeCall<void, float>(this, "UUI_MapMarkersEntry.OnColorSliderValueChanged", SliderValue); }
	void OnTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_MapMarkersEntry.OnTextChanged", Text); }
	void OnTextCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_MapMarkersEntry.OnTextCommitted", Text, CommitMethod); }
	void RefreshMarkers() { NativeCall<void>(this, "UUI_MapMarkersEntry.RefreshMarkers"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_MapMarkersEntry.Tick_Implementation", MyGeometry, InDeltaTime); }
};

