#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FOneColorPS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	void SetColors(FRHICommandList * RHICmdList, const FLinearColor * ClearColorArray, int NumClearColors) { NativeCall<void, FRHICommandList *, const FLinearColor *, int>(this, "FOneColorPS.SetColors", RHICmdList, ClearColorArray, NumClearColors); }
};

