#pragma once

#include "BaseDeclarations.h"
struct FBranchFilter
{
	char __padding[0xcL];
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FBranchFilter.BoneName"); }
	int& BlendDepthField() { return *GetNativePointerField<int*>(this, "FBranchFilter.BlendDepth"); }

	// Functions

};

