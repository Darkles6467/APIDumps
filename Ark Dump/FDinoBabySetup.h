#pragma once

#include "BaseDeclarations.h"
struct FDinoBabySetup
{
	char __padding[0x38L];
	FName& DinoNameTagField() { return *GetNativePointerField<FName*>(this, "FDinoBabySetup.DinoNameTag"); }
	TArray<FBoneModifierRangeArray>& BabyBoneModifierRangesField() { return *GetNativePointerField<TArray<FBoneModifierRangeArray>*>(this, "FDinoBabySetup.BabyBoneModifierRanges"); }
	TArray<float>& WildRandomScaleRangeWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FDinoBabySetup.WildRandomScaleRangeWeights"); }
	TArray<FRandValueRange>& WildRandomScaleRangesField() { return *GetNativePointerField<TArray<FRandValueRange>*>(this, "FDinoBabySetup.WildRandomScaleRanges"); }

	// Functions

	FDinoBabySetup * operator=(const FDinoBabySetup * __that) { return NativeCall<FDinoBabySetup *, const FDinoBabySetup *>(this, "FDinoBabySetup.operator=", __that); }
};

