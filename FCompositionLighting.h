#pragma once

#include "BaseDeclarations.h"
struct FCompositionLighting
{

	// Functions

	void ProcessAfterBasePass(FRHICommandListImmediate * RHICmdList, FViewInfo * View) { NativeCall<void, FRHICommandListImmediate *, FViewInfo *>(this, "FCompositionLighting.ProcessAfterBasePass", RHICmdList, View); }
	void ProcessBeforeBasePass(FRHICommandListImmediate * RHICmdList, FViewInfo * View) { NativeCall<void, FRHICommandListImmediate *, FViewInfo *>(this, "FCompositionLighting.ProcessBeforeBasePass", RHICmdList, View); }
	void ProcessLighting(FRHICommandListImmediate * RHICmdList, FViewInfo * View) { NativeCall<void, FRHICommandListImmediate *, FViewInfo *>(this, "FCompositionLighting.ProcessLighting", RHICmdList, View); }
};

