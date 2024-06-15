#pragma once

#include "BaseDeclarations.h"
struct FIKLegInfo
{
	char __padding[0xe0L];
	FRotator& OldTipRotationField() { return *GetNativePointerField<FRotator*>(this, "FIKLegInfo.OldTipRotation"); }
	FQuat& OldTipRotationQuatField() { return *GetNativePointerField<FQuat*>(this, "FIKLegInfo.OldTipRotationQuat"); }
	TArray<FVector>& FabrikPositionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FIKLegInfo.FabrikPositions"); }
	FName& RootBoneNameField() { return *GetNativePointerField<FName*>(this, "FIKLegInfo.RootBoneName"); }
	FName& IKBoneNameField() { return *GetNativePointerField<FName*>(this, "FIKLegInfo.IKBoneName"); }
	float& FeetOffsetField() { return *GetNativePointerField<float*>(this, "FIKLegInfo.FeetOffset"); }
	FRotator& IKBoneRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "FIKLegInfo.IKBoneRotationOffset"); }
	FVector& HitNormalWSField() { return *GetNativePointerField<FVector*>(this, "FIKLegInfo.HitNormalWS"); }
	FVector& HitLocationWSField() { return *GetNativePointerField<FVector*>(this, "FIKLegInfo.HitLocationWS"); }
	FVector& LastTargetHitNormalWSField() { return *GetNativePointerField<FVector*>(this, "FIKLegInfo.LastTargetHitNormalWS"); }
	FVector& LastTargetHitLocationWSField() { return *GetNativePointerField<FVector*>(this, "FIKLegInfo.LastTargetHitLocationWS"); }
	FTransform& EffectorTransformCSField() { return *GetNativePointerField<FTransform*>(this, "FIKLegInfo.EffectorTransformCS"); }
	float& IKAlphaField() { return *GetNativePointerField<float*>(this, "FIKLegInfo.IKAlpha"); }
	FBoneReference& TipBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FIKLegInfo.TipBone"); }
	FBoneReference& RootBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FIKLegInfo.RootBone"); }
	bool& bInitField() { return *GetNativePointerField<bool*>(this, "FIKLegInfo.bInit"); }
	bool& bHasGroundField() { return *GetNativePointerField<bool*>(this, "FIKLegInfo.bHasGround"); }
	int& MuteField() { return *GetNativePointerField<int*>(this, "FIKLegInfo.Mute"); }
	float& TimeIKStartedField() { return *GetNativePointerField<float*>(this, "FIKLegInfo.TimeIKStarted"); }

	// Functions

	FIKLegInfo * operator=(const FIKLegInfo * __that) { return NativeCall<FIKLegInfo *, const FIKLegInfo *>(this, "FIKLegInfo.operator=", __that); }
};

