#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FVolumeControlStyle : FSlateWidgetStyle
{
	char __padding[0x440L];
	FSliderStyle& SliderStyleField() { return *GetNativePointerField<FSliderStyle*>(this, "FVolumeControlStyle.SliderStyle"); }

	// Functions

	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FVolumeControlStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FVolumeControlStyle.GetTypeName", result); }
	FVolumeControlStyle * SetHighVolumeImage(const FSlateBrush * InHighVolumeImage) { return NativeCall<FVolumeControlStyle *, const FSlateBrush *>(this, "FVolumeControlStyle.SetHighVolumeImage", InHighVolumeImage); }
	FCheckBoxStyle * SetLowVolumeImage(const FSlateBrush * InUndeterminedImage) { return NativeCall<FCheckBoxStyle *, const FSlateBrush *>(this, "FVolumeControlStyle.SetLowVolumeImage", InUndeterminedImage); }
	FVolumeControlStyle * SetMidVolumeImage(const FSlateBrush * InMidVolumeImage) { return NativeCall<FVolumeControlStyle *, const FSlateBrush *>(this, "FVolumeControlStyle.SetMidVolumeImage", InMidVolumeImage); }
	FVolumeControlStyle * SetSliderStyle(const FSliderStyle * InSliderStyle) { return NativeCall<FVolumeControlStyle *, const FSliderStyle *>(this, "FVolumeControlStyle.SetSliderStyle", InSliderStyle); }
	FCheckBoxStyle * SetMutedImage(const FSlateBrush * InUndeterminedPressedImage) { return NativeCall<FCheckBoxStyle *, const FSlateBrush *>(this, "FVolumeControlStyle.SetMutedImage", InUndeterminedPressedImage); }
	FVolumeControlStyle * operator=(const FVolumeControlStyle * __that) { return NativeCall<FVolumeControlStyle *, const FVolumeControlStyle *>(this, "FVolumeControlStyle.operator=", __that); }
};

