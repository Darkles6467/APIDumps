#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FVelocityPS : FMeshMaterialShader
{

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FVelocityPS.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	void SetParameters(FRHICommandList * RHICmdList, const FVertexFactory * VertexFactory, const FMaterialRenderProxy * MaterialRenderProxy, const FViewInfo * View) { NativeCall<void, FRHICommandList *, const FVertexFactory *, const FMaterialRenderProxy *, const FViewInfo *>(this, "FVelocityPS.SetParameters", RHICmdList, VertexFactory, MaterialRenderProxy, View); }
};

