#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_RotateRootBone : FAnimNode_Base
{
	char __padding[0x30L];
	FPoseLink& BasePoseField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimNode_RotateRootBone.BasePose"); }
	float& PitchField() { return *GetNativePointerField<float*>(this, "FAnimNode_RotateRootBone.Pitch"); }
	float& YawField() { return *GetNativePointerField<float*>(this, "FAnimNode_RotateRootBone.Yaw"); }
	FRotator& MeshToComponentField() { return *GetNativePointerField<FRotator*>(this, "FAnimNode_RotateRootBone.MeshToComponent"); }

	// Functions

	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_RotateRootBone.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_RotateRootBone.GatherDebugData", DebugData); }
};

