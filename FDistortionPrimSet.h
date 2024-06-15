#pragma once

#include "BaseDeclarations.h"
struct FDistortionPrimSet
{
	char __padding[0x10L];

	// Functions

	bool DrawAccumulatedOffsets(FRHICommandListImmediate * RHICmdList, const FViewInfo * View, bool bInitializeOffsets) { return NativeCall<bool, FRHICommandListImmediate *, const FViewInfo *, bool>(this, "FDistortionPrimSet.DrawAccumulatedOffsets", RHICmdList, View, bInitializeOffsets); }
	void AddScenePrimitive(FPrimitiveSceneProxy * PrimitiveSceneProxy) { NativeCall<void, FPrimitiveSceneProxy *>(this, "FDistortionPrimSet.AddScenePrimitive", PrimitiveSceneProxy); }
};

