#pragma once

#include "BaseDeclarations.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"

struct FGPUSpriteVertexFactory : FVertexFactory
{
	char __padding[0x38L];
	unsigned int& ParticleIndicesOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FGPUSpriteVertexFactory.ParticleIndicesOffset"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FGPUSpriteVertexFactory.InitRHI"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FGPUSpriteVertexFactory.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, FShaderType * ShaderType) { return NativeCall<bool, EShaderPlatform, FMaterial *, FShaderType *>(nullptr, "FGPUSpriteVertexFactory.ShouldCache", Platform, Material, ShaderType); }
};

