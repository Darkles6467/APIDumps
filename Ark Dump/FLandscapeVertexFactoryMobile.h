#pragma once

#include "BaseDeclarations.h"
#include "FLandscapeVertexFactory.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"

struct FLandscapeVertexFactoryMobile : FLandscapeVertexFactory
{
	char __padding[0x38L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FLandscapeVertexFactoryMobile.InitRHI"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FLandscapeVertexFactoryMobile.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, FShaderType * ShaderType) { return NativeCall<bool, EShaderPlatform, FMaterial *, FShaderType *>(nullptr, "FLandscapeVertexFactoryMobile.ShouldCache", Platform, Material, ShaderType); }
};

