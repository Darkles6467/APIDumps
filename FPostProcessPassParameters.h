#pragma once

#include "BaseDeclarations.h"
struct FPostProcessPassParameters
{
	char __padding[0xc2L];

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FPostProcessPassParameters.Bind", ParameterMap); }
	void SetCS(FRHIComputeShader *const * ShaderRHI, const FRenderingCompositePassContext * Context, FRHISamplerState * Filter, bool bWhiteIfNoTexture, FRHISamplerState ** FilterOverrideArray) { NativeCall<void, FRHIComputeShader *const *, const FRenderingCompositePassContext *, FRHISamplerState *, bool, FRHISamplerState **>(this, "FPostProcessPassParameters.SetCS", ShaderRHI, Context, Filter, bWhiteIfNoTexture, FilterOverrideArray); }
	void SetPS(FRHIPixelShader *const * ShaderRHI, const FRenderingCompositePassContext * Context, FRHISamplerState * Filter, bool bWhiteIfNoTexture, FRHISamplerState ** FilterOverrideArray) { NativeCall<void, FRHIPixelShader *const *, const FRenderingCompositePassContext *, FRHISamplerState *, bool, FRHISamplerState **>(this, "FPostProcessPassParameters.SetPS", ShaderRHI, Context, Filter, bWhiteIfNoTexture, FilterOverrideArray); }
	void SetVS(FRHIVertexShader *const * ShaderRHI, const FRenderingCompositePassContext * Context, FRHISamplerState * Filter, bool bWhiteIfNoTexture, FRHISamplerState ** FilterOverrideArray) { NativeCall<void, FRHIVertexShader *const *, const FRenderingCompositePassContext *, FRHISamplerState *, bool, FRHISamplerState **>(this, "FPostProcessPassParameters.SetVS", ShaderRHI, Context, Filter, bWhiteIfNoTexture, FilterOverrideArray); }
};

