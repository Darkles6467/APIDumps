#pragma once

#include "BaseDeclarations.h"
struct FBoneModifierRangeArray
{
	char __padding[0x20L];
	float& MinLegLengthMultiplierField() { return *GetNativePointerField<float*>(this, "FBoneModifierRangeArray.MinLegLengthMultiplier"); }
	float& MaxLegLengthMultiplierField() { return *GetNativePointerField<float*>(this, "FBoneModifierRangeArray.MaxLegLengthMultiplier"); }
	TArray<FBoneModifierRange>& BoneArrayField() { return *GetNativePointerField<TArray<FBoneModifierRange>*>(this, "FBoneModifierRangeArray.BoneArray"); }

	// Functions

	FBoneModifierRangeArray * operator=(const FBoneModifierRangeArray * __that) { return NativeCall<FBoneModifierRangeArray *, const FBoneModifierRangeArray *>(this, "FBoneModifierRangeArray.operator=", __that); }
};

