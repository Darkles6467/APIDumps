#pragma once

#include "BaseDeclarations.h"
struct FBoneModifier
{
	char __padding[0x20L];
	int& BoneIndexField() { return *GetNativePointerField<int*>(this, "FBoneModifier.BoneIndex"); }
	FVector& ScaleField() { return *GetNativePointerField<FVector*>(this, "FBoneModifier.Scale"); }
	FVector& TranslationField() { return *GetNativePointerField<FVector*>(this, "FBoneModifier.Translation"); }
	bool& RecursiveField() { return *GetNativePointerField<bool*>(this, "FBoneModifier.Recursive"); }

	// Functions

};

