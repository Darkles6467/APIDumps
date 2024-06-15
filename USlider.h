#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USlider : UWidget
{
	char __padding[0x268L];
	FSliderStyle& WidgetStyleField() { return *GetNativePointerField<FSliderStyle*>(this, "USlider.WidgetStyle"); }
	float& ValueField() { return *GetNativePointerField<float*>(this, "USlider.Value"); }
	TEnumAsByte<enum EOrientation>& OrientationField() { return *GetNativePointerField<TEnumAsByte<enum EOrientation>*>(this, "USlider.Orientation"); }
	FLinearColor& SliderBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "USlider.SliderBarColor"); }
	FLinearColor& SliderHandleColorField() { return *GetNativePointerField<FLinearColor*>(this, "USlider.SliderHandleColor"); }
	bool& IndentHandleField() { return *GetNativePointerField<bool*>(this, "USlider.IndentHandle"); }
	bool& LockedField() { return *GetNativePointerField<bool*>(this, "USlider.Locked"); }
	TSharedPtr<SSlider,0>& MySliderField() { return *GetNativePointerField<TSharedPtr<SSlider,0>*>(this, "USlider.MySlider"); }

	// Functions

	float GetValue() { return NativeCall<float>(this, "USlider.GetValue"); }
	void HandleOnMouseCaptureBegin() { NativeCall<void>(this, "USlider.HandleOnMouseCaptureBegin"); }
	void HandleOnMouseCaptureEnd() { NativeCall<void>(this, "USlider.HandleOnMouseCaptureEnd"); }
	void HandleOnValueChanged(float InValue) { NativeCall<void, float>(this, "USlider.HandleOnValueChanged", InValue); }
	void SetSliderBarColor(FLinearColor InSliderBarColor) { NativeCall<void, FLinearColor>(this, "USlider.SetSliderBarColor", InSliderBarColor); }
	void SetSliderHandleColor(FLinearColor InSliderHandleColor) { NativeCall<void, FLinearColor>(this, "USlider.SetSliderHandleColor", InSliderHandleColor); }
	void SetValue(float InValue) { NativeCall<void, float>(this, "USlider.SetValue", InValue); }
	void SynchronizeProperties() { NativeCall<void>(this, "USlider.SynchronizeProperties"); }
};

