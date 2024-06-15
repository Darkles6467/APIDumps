#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FSlateColor.h"

struct USpinBox : UWidget
{
	char __padding[0x378L];
	FSpinBoxStyle& WidgetStyleField() { return *GetNativePointerField<FSpinBoxStyle*>(this, "USpinBox.WidgetStyle"); }
	USlateWidgetStyleAsset * Style_DEPRECATEDField() { return GetNativePointerField<USlateWidgetStyleAsset *>(this, "USpinBox.Style_DEPRECATED"); }
	float& ValueField() { return *GetNativePointerField<float*>(this, "USpinBox.Value"); }
	float& DeltaField() { return *GetNativePointerField<float*>(this, "USpinBox.Delta"); }
	float& SliderExponentField() { return *GetNativePointerField<float*>(this, "USpinBox.SliderExponent"); }
	FSlateFontInfo& FontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "USpinBox.Font"); }
	float& MinDesiredWidthField() { return *GetNativePointerField<float*>(this, "USpinBox.MinDesiredWidth"); }
	bool& ClearKeyboardFocusOnCommitField() { return *GetNativePointerField<bool*>(this, "USpinBox.ClearKeyboardFocusOnCommit"); }
	bool& SelectAllTextOnCommitField() { return *GetNativePointerField<bool*>(this, "USpinBox.SelectAllTextOnCommit"); }
	FSlateColor& ForegroundColorField() { return *GetNativePointerField<FSlateColor*>(this, "USpinBox.ForegroundColor"); }
	USpinBox::FOnSpinBoxValueChangedEvent& OnValueChangedField() { return *GetNativePointerField<USpinBox::FOnSpinBoxValueChangedEvent*>(this, "USpinBox.OnValueChanged"); }
	USpinBox::FOnSpinBoxValueCommittedEvent& OnValueCommittedField() { return *GetNativePointerField<USpinBox::FOnSpinBoxValueCommittedEvent*>(this, "USpinBox.OnValueCommitted"); }
	USpinBox::FOnSpinBoxBeginSliderMovement& OnBeginSliderMovementField() { return *GetNativePointerField<USpinBox::FOnSpinBoxBeginSliderMovement*>(this, "USpinBox.OnBeginSliderMovement"); }
	USpinBox::FOnSpinBoxValueChangedEvent& OnEndSliderMovementField() { return *GetNativePointerField<USpinBox::FOnSpinBoxValueChangedEvent*>(this, "USpinBox.OnEndSliderMovement"); }
	float& MinValueField() { return *GetNativePointerField<float*>(this, "USpinBox.MinValue"); }
	float& MaxValueField() { return *GetNativePointerField<float*>(this, "USpinBox.MaxValue"); }
	float& MinSliderValueField() { return *GetNativePointerField<float*>(this, "USpinBox.MinSliderValue"); }
	float& MaxSliderValueField() { return *GetNativePointerField<float*>(this, "USpinBox.MaxSliderValue"); }
	TSharedPtr<SSpinBox<float>,0>& MySpinBoxField() { return *GetNativePointerField<TSharedPtr<SSpinBox<float>,0>*>(this, "USpinBox.MySpinBox"); }

	// Functions

	void ClearMaxSliderValue() { NativeCall<void>(this, "USpinBox.ClearMaxSliderValue"); }
	void ClearMaxValue() { NativeCall<void>(this, "USpinBox.ClearMaxValue"); }
	void ClearMinSliderValue() { NativeCall<void>(this, "USpinBox.ClearMinSliderValue"); }
	void ClearMinValue() { NativeCall<void>(this, "USpinBox.ClearMinValue"); }
	float GetMaxSliderValue() { return NativeCall<float>(this, "USpinBox.GetMaxSliderValue"); }
	float GetMaxValue() { return NativeCall<float>(this, "USpinBox.GetMaxValue"); }
	float GetMinSliderValue() { return NativeCall<float>(this, "USpinBox.GetMinSliderValue"); }
	float GetMinValue() { return NativeCall<float>(this, "USpinBox.GetMinValue"); }
	float GetValue() { return NativeCall<float>(this, "USpinBox.GetValue"); }
	void HandleOnBeginSliderMovement() { NativeCall<void>(this, "USpinBox.HandleOnBeginSliderMovement"); }
	void HandleOnEndSliderMovement(float InValue) { NativeCall<void, float>(this, "USpinBox.HandleOnEndSliderMovement", InValue); }
	void HandleOnValueChanged(float InValue) { NativeCall<void, float>(this, "USpinBox.HandleOnValueChanged", InValue); }
	void HandleOnValueCommitted(float InValue, ETextCommit::Type CommitMethod) { NativeCall<void, float, ETextCommit::Type>(this, "USpinBox.HandleOnValueCommitted", InValue, CommitMethod); }
	void PostLoad() { NativeCall<void>(this, "USpinBox.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "USpinBox.ReleaseSlateResources", bReleaseChildren); }
	void SetForegroundColor(FSlateColor InForegroundColor) { NativeCall<void, FSlateColor>(this, "USpinBox.SetForegroundColor", InForegroundColor); }
	void SetMaxSliderValue(float InMaxSliderValue) { NativeCall<void, float>(this, "USpinBox.SetMaxSliderValue", InMaxSliderValue); }
	void SetMaxValue(float InMaxValue) { NativeCall<void, float>(this, "USpinBox.SetMaxValue", InMaxValue); }
	void SetMinSliderValue(float InMinSliderValue) { NativeCall<void, float>(this, "USpinBox.SetMinSliderValue", InMinSliderValue); }
	void SetMinValue(float InMinValue) { NativeCall<void, float>(this, "USpinBox.SetMinValue", InMinValue); }
	void SetValue(float InValue) { NativeCall<void, float>(this, "USpinBox.SetValue", InValue); }
	void SynchronizeProperties() { NativeCall<void>(this, "USpinBox.SynchronizeProperties"); }
};

