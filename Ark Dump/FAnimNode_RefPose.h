#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_RefPose : FAnimNode_Base
{
	char __padding[0x8L];
	TEnumAsByte<enum ERefPoseType>& RefPoseTypeField() { return *GetNativePointerField<TEnumAsByte<enum ERefPoseType>*>(this, "FAnimNode_RefPose.RefPoseType"); }

	// Functions

	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_RefPose.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_RefPose.GatherDebugData", DebugData); }
};

