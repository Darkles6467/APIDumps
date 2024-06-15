#pragma once

#include "BaseDeclarations.h"
#include "FParticleVertexFactoryBase.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"
#include "FParticleBeamTrailUniformParameters.h"

struct FParticleBeamTrailVertexFactory : FParticleVertexFactoryBase
{
	char __padding[0x8L];
	TUniformBufferRef<FParticleBeamTrailUniformParameters>& BeamTrailUniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FParticleBeamTrailUniformParameters>*>(this, "FParticleBeamTrailVertexFactory.BeamTrailUniformBuffer"); }

	// Functions

	TUniformBufferRef<FParticleBeamTrailUniformParameters> * GetBeamTrailUniformBuffer(TUniformBufferRef<FParticleBeamTrailUniformParameters> * result) { return NativeCall<TUniformBufferRef<FParticleBeamTrailUniformParameters> *, TUniformBufferRef<FParticleBeamTrailUniformParameters> *>(this, "FParticleBeamTrailVertexFactory.GetBeamTrailUniformBuffer", result); }
	void InitRHI() { NativeCall<void>(this, "FParticleBeamTrailVertexFactory.InitRHI"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FParticleBeamTrailVertexFactory.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	void SetDynamicParameterBuffer(const FVertexBuffer * InDynamicParameterBuffer, unsigned int StreamOffset, unsigned int Stride) { NativeCall<void, const FVertexBuffer *, unsigned int, unsigned int>(this, "FParticleBeamTrailVertexFactory.SetDynamicParameterBuffer", InDynamicParameterBuffer, StreamOffset, Stride); }
	void SetVertexBuffer(const FVertexBuffer * InBuffer, unsigned int StreamOffset, unsigned int Stride) { NativeCall<void, const FVertexBuffer *, unsigned int, unsigned int>(this, "FParticleBeamTrailVertexFactory.SetVertexBuffer", InBuffer, StreamOffset, Stride); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, FShaderType * ShaderType) { return NativeCall<bool, EShaderPlatform, FMaterial *, FShaderType *>(nullptr, "FParticleBeamTrailVertexFactory.ShouldCache", Platform, Material, ShaderType); }
};

