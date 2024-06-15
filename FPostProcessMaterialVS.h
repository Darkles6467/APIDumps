#pragma once

#include "BaseDeclarations.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessMaterialVS : FMaterialShader
{

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FPostProcessMaterialVS.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessMaterialVS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FRenderingCompositePassContext * Context) { NativeCall<void, FRHICommandList *, const FRenderingCompositePassContext *>(this, "FPostProcessMaterialVS.SetParameters", RHICmdList, Context); }
};

