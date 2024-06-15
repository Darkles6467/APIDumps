#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{
	char __padding[0x88L];
	FBoneReference& TrailBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_Trail.TrailBone"); }
	int& ChainLengthField() { return *GetNativePointerField<int*>(this, "FAnimNode_Trail.ChainLength"); }
	TEnumAsByte<enum EAxis::Type>& ChainBoneAxisField() { return *GetNativePointerField<TEnumAsByte<enum EAxis::Type>*>(this, "FAnimNode_Trail.ChainBoneAxis"); }
	bool& bInvertChainBoneAxisField() { return *GetNativePointerField<bool*>(this, "FAnimNode_Trail.bInvertChainBoneAxis"); }
	bool& bLimitStretchField() { return *GetNativePointerField<bool*>(this, "FAnimNode_Trail.bLimitStretch"); }
	float& TrailRelaxationField() { return *GetNativePointerField<float*>(this, "FAnimNode_Trail.TrailRelaxation"); }
	float& StretchLimitField() { return *GetNativePointerField<float*>(this, "FAnimNode_Trail.StretchLimit"); }
	FVector& FakeVelocityField() { return *GetNativePointerField<FVector*>(this, "FAnimNode_Trail.FakeVelocity"); }
	bool& bActorSpaceFakeVelField() { return *GetNativePointerField<bool*>(this, "FAnimNode_Trail.bActorSpaceFakeVel"); }
	float& ThisTimstepField() { return *GetNativePointerField<float*>(this, "FAnimNode_Trail.ThisTimstep"); }
	bool& bHadValidStrengthField() { return *GetNativePointerField<bool*>(this, "FAnimNode_Trail.bHadValidStrength"); }
	TArray<FVector>& TrailBoneLocationsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FAnimNode_Trail.TrailBoneLocations"); }
	FMatrix& OldLocalToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FAnimNode_Trail.OldLocalToWorld"); }

	// Functions

	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_Trail.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_Trail.GatherDebugData", DebugData); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_Trail.Update", Context); }
	FAnimNode_Trail * operator=(const FAnimNode_Trail * __that) { return NativeCall<FAnimNode_Trail *, const FAnimNode_Trail *>(this, "FAnimNode_Trail.operator=", __that); }
};

