#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_Hairstyle : UPrimalUI
{
	char __padding[0x188L];
	FName& TabBgSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hairstyle.TabBgSwitcherName"); }
	FName& HeadHairEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hairstyle.HeadHairEnabledEffectName"); }
	FName& FacialHairEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hairstyle.FacialHairEnabledEffectName"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_Hairstyle.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_Hairstyle.SwitcherTextInactiveColor"); }
	TSubclassOf<UDinoListButtonWidget>& HairStyleEntryTemplateField() { return *GetNativePointerField<TSubclassOf<UDinoListButtonWidget>*>(this, "UUI_Hairstyle.HairStyleEntryTemplate"); }
	UUI_PreviewWidget * PreviewWidgetField() { return GetNativePointerField<UUI_PreviewWidget *>(this, "UUI_Hairstyle.PreviewWidget"); }
	TWeakObjectPtr<AShooterCharacter>& TargetActorField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "UUI_Hairstyle.TargetActor"); }
	UDataListPanel * HeadHairDyeItemsDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_Hairstyle.HeadHairDyeItemsDataList"); }
	UDataListPanel * FacialHairDyeItemsDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_Hairstyle.FacialHairDyeItemsDataList"); }
	USlider * TheCurrentHeadHairGrowthSliderField() { return GetNativePointerField<USlider *>(this, "UUI_Hairstyle.TheCurrentHeadHairGrowthSlider"); }
	USlider * TheNewHeadHairGrowthSliderField() { return GetNativePointerField<USlider *>(this, "UUI_Hairstyle.TheNewHeadHairGrowthSlider"); }
	USlider * TheCurrentFacialHairGrowthSliderField() { return GetNativePointerField<USlider *>(this, "UUI_Hairstyle.TheCurrentFacialHairGrowthSlider"); }
	USlider * TheNewFacialHairGrowthSliderField() { return GetNativePointerField<USlider *>(this, "UUI_Hairstyle.TheNewFacialHairGrowthSlider"); }
	UTextBlock * ChangeWarningLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Hairstyle.ChangeWarningLabel"); }
	UTextBlock * CurrentHeadHairStyleField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Hairstyle.CurrentHeadHairStyle"); }
	UTextBlock * CurrentFacialHairStyleField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Hairstyle.CurrentFacialHairStyle"); }
	TArray<UDinoListButtonWidget *>& HeadHairStyleEntriesField() { return *GetNativePointerField<TArray<UDinoListButtonWidget *>*>(this, "UUI_Hairstyle.HeadHairStyleEntries"); }
	TArray<UDinoListButtonWidget *>& FacialHairStyleEntriesField() { return *GetNativePointerField<TArray<UDinoListButtonWidget *>*>(this, "UUI_Hairstyle.FacialHairStyleEntries"); }
	bool& bAllowPositiveCutField() { return *GetNativePointerField<bool*>(this, "UUI_Hairstyle.bAllowPositiveCut"); }
	float& DyeHairColorSaturationField() { return *GetNativePointerField<float*>(this, "UUI_Hairstyle.DyeHairColorSaturation"); }
	int& OriginalHeadHairIndexField() { return *GetNativePointerField<int*>(this, "UUI_Hairstyle.OriginalHeadHairIndex"); }
	int& OriginalFacialHairIndexField() { return *GetNativePointerField<int*>(this, "UUI_Hairstyle.OriginalFacialHairIndex"); }
	int& OpeningFrameCounterField() { return *GetNativePointerField<int*>(this, "UUI_Hairstyle.OpeningFrameCounter"); }
	FLinearColor& OriginalHairColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_Hairstyle.OriginalHairColor"); }
	bool& Gamepad_IsZoomingPreviewField() { return *GetNativePointerField<bool*>(this, "UUI_Hairstyle.Gamepad_IsZoomingPreview"); }
	bool& Gamepad_IsRotatingPreviewField() { return *GetNativePointerField<bool*>(this, "UUI_Hairstyle.Gamepad_IsRotatingPreview"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_Hairstyle.AddToViewport"); }
	bool CanBeHighlightedForGamePad(UWidget * widget) { return NativeCall<bool, UWidget *>(this, "UUI_Hairstyle.CanBeHighlightedForGamePad", widget); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_Hairstyle.ClickedButton", clickedWidget); }
	bool Gamepad_DidPanZoomRotatePreview(const FKey * key, const FKey * keyMatch, ControlDirection controlDirection, float rotateDelta, float zoomDelta, const FVector2D * panDelta) { return NativeCall<bool, const FKey *, const FKey *, ControlDirection, float, float, const FVector2D *>(this, "UUI_Hairstyle.Gamepad_DidPanZoomRotatePreview", key, keyMatch, controlDirection, rotateDelta, zoomDelta, panDelta); }
	int GetSelectedFacialHairStyleIndex() { return NativeCall<int>(this, "UUI_Hairstyle.GetSelectedFacialHairStyleIndex"); }
	int GetSelectedHeadHairStyleIndex() { return NativeCall<int>(this, "UUI_Hairstyle.GetSelectedHeadHairStyleIndex"); }
	void InitForObjects(UObject * AssociatedObject1, UObject * AssociatedObject2, unsigned int ExtraID1, unsigned int ExtraID2) { NativeCall<void, UObject *, UObject *, unsigned int, unsigned int>(this, "UUI_Hairstyle.InitForObjects", AssociatedObject1, AssociatedObject2, ExtraID1, ExtraID2); }
	void OnFacialHairStyleButtonClicked(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_Hairstyle.OnFacialHairStyleButtonClicked", theWidget); }
	void OnGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UUI_Hairstyle.OnGamepadActiveChanged", bIsGamepadActive); }
	void OnHeadHairStyleButtonClicked(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_Hairstyle.OnHeadHairStyleButtonClicked", theWidget); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_Hairstyle.RemoveFromViewport"); }
	void ResetCamera() { NativeCall<void>(this, "UUI_Hairstyle.ResetCamera"); }
	void SetConsoleImageVisibility(bool bIsVisible) { NativeCall<void, bool>(this, "UUI_Hairstyle.SetConsoleImageVisibility", bIsVisible); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_Hairstyle.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdatePreview() { NativeCall<void>(this, "UUI_Hairstyle.UpdatePreview"); }
};

