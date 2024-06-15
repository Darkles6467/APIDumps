#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_BlendSpacePlayer : FAnimNode_Base
{
	char __padding[0xd0L];
	float& XField() { return *GetNativePointerField<float*>(this, "FAnimNode_BlendSpacePlayer.X"); }
	float& YField() { return *GetNativePointerField<float*>(this, "FAnimNode_BlendSpacePlayer.Y"); }
	float& ZField() { return *GetNativePointerField<float*>(this, "FAnimNode_BlendSpacePlayer.Z"); }
	float& PlayRateField() { return *GetNativePointerField<float*>(this, "FAnimNode_BlendSpacePlayer.PlayRate"); }
	bool& bLoopField() { return *GetNativePointerField<bool*>(this, "FAnimNode_BlendSpacePlayer.bLoop"); }
	int& GroupIndexField() { return *GetNativePointerField<int*>(this, "FAnimNode_BlendSpacePlayer.GroupIndex"); }
	TEnumAsByte<enum EAnimGroupRole::Type>& GroupRoleField() { return *GetNativePointerField<TEnumAsByte<enum EAnimGroupRole::Type>*>(this, "FAnimNode_BlendSpacePlayer.GroupRole"); }
	float& InternalTimeAccumulatorField() { return *GetNativePointerField<float*>(this, "FAnimNode_BlendSpacePlayer.InternalTimeAccumulator"); }
	FBlendFilter& BlendFilterField() { return *GetNativePointerField<FBlendFilter*>(this, "FAnimNode_BlendSpacePlayer.BlendFilter"); }
	TArray<FBlendSampleData>& BlendSampleDataCacheField() { return *GetNativePointerField<TArray<FBlendSampleData>*>(this, "FAnimNode_BlendSpacePlayer.BlendSampleDataCache"); }

	// Functions

	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_BlendSpacePlayer.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_BlendSpacePlayer.GatherDebugData", DebugData); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_BlendSpacePlayer.Initialize", Context); }
	void OverrideAsset(UAnimationAsset * NewAsset) { NativeCall<void, UAnimationAsset *>(this, "FAnimNode_BlendSpacePlayer.OverrideAsset", NewAsset); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_BlendSpacePlayer.Update", Context); }
};

