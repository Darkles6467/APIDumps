#pragma once

#include "BaseDeclarations.h"
struct FInputBlendPose
{
	char __padding[0x10L];
	TArray<FBranchFilter>& BranchFiltersField() { return *GetNativePointerField<TArray<FBranchFilter>*>(this, "FInputBlendPose.BranchFilters"); }

	// Functions

};

