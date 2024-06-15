#pragma once

#include "BaseDeclarations.h"
#include "FParticleVertexFactoryBase.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"

struct FParticleSpriteVertexFactory : FParticleVertexFactoryBase
{
	char __padding[0x8L];

	// Functions

	void InitRHI() { NativeCall<void>(this, "FParticleSpriteVertexFactory.InitRHI"); }
	void InitStreams() { NativeCall<void>(this, "FParticleSpriteVertexFactory.InitStreams"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FParticleSpriteVertexFactory.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	void SetDynamicParameterBuffer(const FVertexBuffer * InDynamicParameterBuffer, unsigned int StreamOffset, unsigned int Stride, bool bInstanced) { NativeCall<void, const FVertexBuffer *, unsigned int, unsigned int, bool>(this, "FParticleSpriteVertexFactory.SetDynamicParameterBuffer", InDynamicParameterBuffer, StreamOffset, Stride, bInstanced); }
	void SetInstanceBuffer(const FVertexBuffer * InInstanceBuffer, unsigned int StreamOffset, unsigned int Stride, bool bInstanced) { NativeCall<void, const FVertexBuffer *, unsigned int, unsigned int, bool>(this, "FParticleSpriteVertexFactory.SetInstanceBuffer", InInstanceBuffer, StreamOffset, Stride, bInstanced); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, FShaderType * ShaderType) { return NativeCall<bool, EShaderPlatform, FMaterial *, FShaderType *>(nullptr, "FParticleSpriteVertexFactory.ShouldCache", Platform, Material, ShaderType); }
};

