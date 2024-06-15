#pragma once

#include "BaseDeclarations.h"
struct FRootMotionMovementParams
{
	char __padding[0x40L];
	bool& bHasRootMotionField() { return *GetNativePointerField<bool*>(this, "FRootMotionMovementParams.bHasRootMotion"); }
	FTransform& RootMotionTransformField() { return *GetNativePointerField<FTransform*>(this, "FRootMotionMovementParams.RootMotionTransform"); }

	// Functions

	void Accumulate(const FRootMotionMovementParams * MovementParams) { NativeCall<void, const FRootMotionMovementParams *>(this, "FRootMotionMovementParams.Accumulate", MovementParams); }
	void Accumulate(const FTransform * InTransform) { NativeCall<void, const FTransform *>(this, "FRootMotionMovementParams.Accumulate", InTransform); }
};

