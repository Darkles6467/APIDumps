#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_DepthOfFieldMenu : UPrimalUI
{
	char __padding[0x198L];
	FName& SaveButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.SaveButtonName"); }
	FName& ApplyButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.ApplyButtonName"); }
	FName& CancelButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.CancelButtonName"); }
	FName& NearButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.NearButtonName"); }
	FName& MediumButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.MediumButtonName"); }
	FName& FarButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.FarButtonName"); }
	FName& ClearButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.ClearButtonName"); }
	FName& FocalDistanceSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.FocalDistanceSliderName"); }
	FName& FocalRegionSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.FocalRegionSliderName"); }
	FName& NearTransitionRegionSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.NearTransitionRegionSliderName"); }
	FName& FarTransitionRegionSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.FarTransitionRegionSliderName"); }
	FName& ScaleSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.ScaleSliderName"); }
	FName& MaxBokehSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.MaxBokehSliderName"); }
	FName& OcclusionSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.OcclusionSliderName"); }
	FName& FocalDistanceTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.FocalDistanceTextBoxName"); }
	FName& FocalRegionTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.FocalRegionTextBoxName"); }
	FName& NearTransitionRegionTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.NearTransitionRegionTextBoxName"); }
	FName& FarTransitionRegionTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.FarTransitionRegionTextBoxName"); }
	FName& ScaleTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.ScaleTextBoxName"); }
	FName& MaxBokehTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.MaxBokehTextBoxName"); }
	FName& OcclusionTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.OcclusionTextBoxName"); }
	FName& BlurModeComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_DepthOfFieldMenu.BlurModeComboBoxName"); }
	USlider * FocalDistanceSliderField() { return GetNativePointerField<USlider *>(this, "UUI_DepthOfFieldMenu.FocalDistanceSlider"); }
	USlider * FocalRegionSliderField() { return GetNativePointerField<USlider *>(this, "UUI_DepthOfFieldMenu.FocalRegionSlider"); }
	USlider * NearTransitionRegionSliderField() { return GetNativePointerField<USlider *>(this, "UUI_DepthOfFieldMenu.NearTransitionRegionSlider"); }
	USlider * FarTransitionRegionSliderField() { return GetNativePointerField<USlider *>(this, "UUI_DepthOfFieldMenu.FarTransitionRegionSlider"); }
	USlider * ScaleSliderField() { return GetNativePointerField<USlider *>(this, "UUI_DepthOfFieldMenu.ScaleSlider"); }
	USlider * MaxBokehSliderField() { return GetNativePointerField<USlider *>(this, "UUI_DepthOfFieldMenu.MaxBokehSlider"); }
	USlider * OcclusionSliderField() { return GetNativePointerField<USlider *>(this, "UUI_DepthOfFieldMenu.OcclusionSlider"); }
	UComboBoxString * StoredSettingComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_DepthOfFieldMenu.StoredSettingComboBox"); }
	UCheckBox * UseGaussianCheckBoxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_DepthOfFieldMenu.UseGaussianCheckBox"); }
	DepthOfFieldLimits& DoFLimitsField() { return *GetNativePointerField<DepthOfFieldLimits*>(this, "UUI_DepthOfFieldMenu.DoFLimits"); }
	bool& bIsUpdatingNumericValueField() { return *GetNativePointerField<bool*>(this, "UUI_DepthOfFieldMenu.bIsUpdatingNumericValue"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_DepthOfFieldMenu.AddToViewport"); }
	void ApplyDepthOfField() { NativeCall<void>(this, "UUI_DepthOfFieldMenu.ApplyDepthOfField"); }
	void ClearSettings() { NativeCall<void>(this, "UUI_DepthOfFieldMenu.ClearSettings"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_DepthOfFieldMenu.ClickedButton", clickedWidget); }
	bool EnsureNumeric(FString * text, int maxChars) { return NativeCall<bool, FString *, int>(this, "UUI_DepthOfFieldMenu.EnsureNumeric", text, maxChars); }
	float GetNumericValue(UEditableTextBox * TextBox) { return NativeCall<float, UEditableTextBox *>(this, "UUI_DepthOfFieldMenu.GetNumericValue", TextBox); }
	void LoadSettings() { NativeCall<void>(this, "UUI_DepthOfFieldMenu.LoadSettings"); }
	void OnCheckBoxChanged(bool isChecked) { NativeCall<void, bool>(this, "UUI_DepthOfFieldMenu.OnCheckBoxChanged", isChecked); }
	void OnNumericValueCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_DepthOfFieldMenu.OnNumericValueCommitted", Text, CommitMethod); }
	void OnSliderValueChanged(float SliderValue) { NativeCall<void, float>(this, "UUI_DepthOfFieldMenu.OnSliderValueChanged", SliderValue); }
	void RestoreSettings() { NativeCall<void>(this, "UUI_DepthOfFieldMenu.RestoreSettings"); }
	void RevertSettings() { NativeCall<void>(this, "UUI_DepthOfFieldMenu.RevertSettings"); }
	void SaveSettings() { NativeCall<void>(this, "UUI_DepthOfFieldMenu.SaveSettings"); }
	void SetCurrentUsedIndex(int index) { NativeCall<void, int>(this, "UUI_DepthOfFieldMenu.SetCurrentUsedIndex", index); }
	void StoreSettings() { NativeCall<void>(this, "UUI_DepthOfFieldMenu.StoreSettings"); }
	void StoreSpecificValues(float FocalDistance, float FocalRegion, float NearRegion, float FarRegion, float Scale, float MaxBokeh, float Occlusion, bool UseGaussian) { NativeCall<void, float, float, float, float, float, float, float, bool>(this, "UUI_DepthOfFieldMenu.StoreSpecificValues", FocalDistance, FocalRegion, NearRegion, FarRegion, Scale, MaxBokeh, Occlusion, UseGaussian); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_DepthOfFieldMenu.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateSliderFromValue(USlider * Slider, UEditableTextBox * TextBox, float Scale, float Offset) { NativeCall<void, USlider *, UEditableTextBox *, float, float>(this, "UUI_DepthOfFieldMenu.UpdateSliderFromValue", Slider, TextBox, Scale, Offset); }
	void UpdateValueFromSlider(USlider * Slider, UEditableTextBox * TextBox, float Scale, float Offset) { NativeCall<void, USlider *, UEditableTextBox *, float, float>(this, "UUI_DepthOfFieldMenu.UpdateValueFromSlider", Slider, TextBox, Scale, Offset); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_DepthOfFieldMenu.RemoveFromViewport"); }
};

