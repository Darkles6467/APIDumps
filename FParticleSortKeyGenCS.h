#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FParticleKeyGenParameters.h"

struct FParticleSortKeyGenCS : FGlobalShader
{
	char __padding[0x18L];

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FParticleSortKeyGenCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FParticleSortKeyGenCS.Serialize", Ar); }
	void SetOutput(FRHICommandList * RHICmdList, FRHIUnorderedAccessView * OutKeysUAV, FRHIUnorderedAccessView * OutIndicesUAV) { NativeCall<void, FRHICommandList *, FRHIUnorderedAccessView *, FRHIUnorderedAccessView *>(this, "FParticleSortKeyGenCS.SetOutput", RHICmdList, OutKeysUAV, OutIndicesUAV); }
	void SetParameters(FRHICommandList * RHICmdList, TUniformBufferRef<FParticleKeyGenParameters> * UniformBuffer, FRHIShaderResourceView * InIndicesSRV) { NativeCall<void, FRHICommandList *, TUniformBufferRef<FParticleKeyGenParameters> *, FRHIShaderResourceView *>(this, "FParticleSortKeyGenCS.SetParameters", RHICmdList, UniformBuffer, InIndicesSRV); }
	void SetPositionTextures(FRHICommandList * RHICmdList, FRHITexture2D * PositionTextureRHI) { NativeCall<void, FRHICommandList *, FRHITexture2D *>(this, "FParticleSortKeyGenCS.SetPositionTextures", RHICmdList, PositionTextureRHI); }
	void UnbindBuffers(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FParticleSortKeyGenCS.UnbindBuffers", RHICmdList); }
};

