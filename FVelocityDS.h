#pragma once

#include "BaseDeclarations.h"
#include "FBaseDS.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FVelocityDS : FBaseDS
{

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, const FMaterialRenderProxy * MaterialRenderProxy, const FViewInfo * View) { NativeCall<void, FRHICommandList *, const FMaterialRenderProxy *, const FViewInfo *>(this, "FVelocityDS.SetParameters", RHICmdList, MaterialRenderProxy, View); }
};

