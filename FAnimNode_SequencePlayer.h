#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_SequencePlayer : FAnimNode_Base
{
	char __padding[0x20L];
	float& InternalTimeAccumulatorField() { return *GetNativePointerField<float*>(this, "FAnimNode_SequencePlayer.InternalTimeAccumulator"); }
	bool& bLoopAnimationField() { return *GetNativePointerField<bool*>(this, "FAnimNode_SequencePlayer.bLoopAnimation"); }
	float& PlayRateField() { return *GetNativePointerField<float*>(this, "FAnimNode_SequencePlayer.PlayRate"); }
	int& GroupIndexField() { return *GetNativePointerField<int*>(this, "FAnimNode_SequencePlayer.GroupIndex"); }
	TEnumAsByte<enum EAnimGroupRole::Type>& GroupRoleField() { return *GetNativePointerField<TEnumAsByte<enum EAnimGroupRole::Type>*>(this, "FAnimNode_SequencePlayer.GroupRole"); }

	// Functions

	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_SequencePlayer.GatherDebugData", DebugData); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_SequencePlayer.Initialize", Context); }
	void OverrideAsset(UAnimationAsset * NewAsset) { NativeCall<void, UAnimationAsset *>(this, "FAnimNode_SequencePlayer.OverrideAsset", NewAsset); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_SequencePlayer.Update", Context); }
};

