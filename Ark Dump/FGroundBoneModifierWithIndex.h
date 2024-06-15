#pragma once

#include "BaseDeclarations.h"
struct FGroundBoneModifierWithIndex
{
	char __padding[0x70L];
	int& BoneIndexField() { return *GetNativePointerField<int*>(this, "FGroundBoneModifierWithIndex.BoneIndex"); }
	FTransform& BoneTransformField() { return *GetNativePointerField<FTransform*>(this, "FGroundBoneModifierWithIndex.BoneTransform"); }
	FGroundBoneModifier * GroundBoneModifierField() { return GetNativePointerField<FGroundBoneModifier *>(this, "FGroundBoneModifierWithIndex.GroundBoneModifier"); }
	FVector& EffectiveTargetLocCSField() { return *GetNativePointerField<FVector*>(this, "FGroundBoneModifierWithIndex.EffectiveTargetLocCS"); }
	FVector& HitNormalField() { return *GetNativePointerField<FVector*>(this, "FGroundBoneModifierWithIndex.HitNormal"); }
	bool& AboveGroundField() { return *GetNativePointerField<bool*>(this, "FGroundBoneModifierWithIndex.AboveGround"); }
};

