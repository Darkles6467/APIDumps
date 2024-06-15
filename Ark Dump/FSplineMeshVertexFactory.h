#pragma once

#include "BaseDeclarations.h"
#include "FLocalVertexFactory.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"

struct FSplineMeshVertexFactory : FLocalVertexFactory
{
	char __padding[0x8L];
	FSplineMeshSceneProxy * SplineSceneProxyField() { return GetNativePointerField<FSplineMeshSceneProxy *>(this, "FSplineMeshVertexFactory.SplineSceneProxy"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FSplineMeshVertexFactory.InitRHI"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FSplineMeshVertexFactory.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, FShaderType * ShaderType) { return NativeCall<bool, EShaderPlatform, FMaterial *, FShaderType *>(nullptr, "FSplineMeshVertexFactory.ShouldCache", Platform, Material, ShaderType); }
};

