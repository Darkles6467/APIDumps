#pragma once

#include "BaseDeclarations.h"
struct FCustomDepthPrimSet
{
	char __padding[0x10L];

	// Functions

	bool DrawPrims(FRHICommandListImmediate * RHICmdList, const FViewInfo * View, bool bWriteCustomStencilValues) { return NativeCall<bool, FRHICommandListImmediate *, const FViewInfo *, bool>(this, "FCustomDepthPrimSet.DrawPrims", RHICmdList, View, bWriteCustomStencilValues); }
};

