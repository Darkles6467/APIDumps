#pragma once

#include "BaseDeclarations.h"
struct FLocalBoundShaderStateWorkArea
{
	char __padding[0x38L];
	FBoundShaderStateInput& ArgsField() { return *GetNativePointerField<FBoundShaderStateInput*>(this, "FLocalBoundShaderStateWorkArea.Args"); }
	FComputedBSS * ComputedBSSField() { return GetNativePointerField<FComputedBSS *>(this, "FLocalBoundShaderStateWorkArea.ComputedBSS"); }
};

