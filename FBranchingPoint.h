#pragma once

#include "BaseDeclarations.h"
struct FBranchingPoint
{
	char __padding[0x10L];
	FName& EventNameField() { return *GetNativePointerField<FName*>(this, "FBranchingPoint.EventName"); }
	float& DisplayTimeField() { return *GetNativePointerField<float*>(this, "FBranchingPoint.DisplayTime"); }
	float& TriggerTimeOffsetField() { return *GetNativePointerField<float*>(this, "FBranchingPoint.TriggerTimeOffset"); }

	// Functions

};

