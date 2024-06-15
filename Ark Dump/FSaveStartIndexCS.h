#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FSaveStartIndexCS : FGlobalShader
{
	char __padding[0x10L];
	FRWShaderParameter& SavedStartIndexField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FSaveStartIndexCS.SavedStartIndex"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSaveStartIndexCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int DepthLevel) { NativeCall<void, FRHICommandList *, FSceneView *, int>(this, "FSaveStartIndexCS.SetParameters", RHICmdList, View, DepthLevel); }
};

