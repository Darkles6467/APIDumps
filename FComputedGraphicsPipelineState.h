#pragma once

#include "BaseDeclarations.h"
struct FComputedGraphicsPipelineState
{
	char __padding[0x10L];
	int& UseCountField() { return *GetNativePointerField<int*>(this, "FComputedGraphicsPipelineState.UseCount"); }
};

