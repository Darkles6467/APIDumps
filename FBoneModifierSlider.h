#pragma once

#include "BaseDeclarations.h"
struct FBoneModifierSlider
{
	char __padding[0x28L];
	FName& SliderWidgetNameField() { return *GetNativePointerField<FName*>(this, "FBoneModifierSlider.SliderWidgetName"); }
	TArray<FBoneModifierRange>& BoneModifierRangesField() { return *GetNativePointerField<TArray<FBoneModifierRange>*>(this, "FBoneModifierSlider.BoneModifierRanges"); }
	TEnumAsByte<enum EBoneModifierType::Type>& BoneModifierTypeField() { return *GetNativePointerField<TEnumAsByte<enum EBoneModifierType::Type>*>(this, "FBoneModifierSlider.BoneModifierType"); }
	USlider * SliderField() { return GetNativePointerField<USlider *>(this, "FBoneModifierSlider.Slider"); }

	// Functions

	FBoneModifierSlider * operator=(const FBoneModifierSlider * __that) { return NativeCall<FBoneModifierSlider *, const FBoneModifierSlider *>(this, "FBoneModifierSlider.operator=", __that); }
};

