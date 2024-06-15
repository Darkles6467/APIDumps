#pragma once

#include "BaseDeclarations.h"
struct FBoneModifierRange
{
	char __padding[0x3cL];
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FBoneModifierRange.BoneName"); }
	FVector& MinScaleField() { return *GetNativePointerField<FVector*>(this, "FBoneModifierRange.MinScale"); }
	FVector& MaxScaleField() { return *GetNativePointerField<FVector*>(this, "FBoneModifierRange.MaxScale"); }
	FVector& MinTranslationField() { return *GetNativePointerField<FVector*>(this, "FBoneModifierRange.MinTranslation"); }
	FVector& MaxTranslationField() { return *GetNativePointerField<FVector*>(this, "FBoneModifierRange.MaxTranslation"); }
	bool& RecursiveField() { return *GetNativePointerField<bool*>(this, "FBoneModifierRange.Recursive"); }

	// Functions

};

