#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_Slot : FAnimNode_Base
{
	char __padding[0x28L];
	FPoseLink& SourceField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimNode_Slot.Source"); }
	FName& SlotNameField() { return *GetNativePointerField<FName*>(this, "FAnimNode_Slot.SlotName"); }
	float& SourceWeightField() { return *GetNativePointerField<float*>(this, "FAnimNode_Slot.SourceWeight"); }
	float& SlotNodeWeightField() { return *GetNativePointerField<float*>(this, "FAnimNode_Slot.SlotNodeWeight"); }

	// Functions

	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_Slot.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_Slot.GatherDebugData", DebugData); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_Slot.Initialize", Context); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_Slot.Update", Context); }
};

