#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"
#include "FShaderParameter.h"
#include "FShaderResourceParameter.h"

struct FGPUSkinCache : FRenderResource
{
	enum SkinCacheInitSettings
	{
		MaxBufferSize = 0x2000000,
		MaxUniformBufferBones = 0x100,
		MaxCachedElements = 0x400,
		MaxCachedVertexBufferSRVs = 0x80,
	};

	char __padding[0x58L];
	unsigned int& FrameCounterField() { return *GetNativePointerField<unsigned int*>(this, "FGPUSkinCache.FrameCounter"); }
	int& CacheMaxVectorCountField() { return *GetNativePointerField<int*>(this, "FGPUSkinCache.CacheMaxVectorCount"); }
	int& CacheCurrentFloatOffsetField() { return *GetNativePointerField<int*>(this, "FGPUSkinCache.CacheCurrentFloatOffset"); }
	int& CacheCurrentFrameOffsetField() { return *GetNativePointerField<int*>(this, "FGPUSkinCache.CacheCurrentFrameOffset"); }
	int& CachedChunksThisFrameCountField() { return *GetNativePointerField<int*>(this, "FGPUSkinCache.CachedChunksThisFrameCount"); }
	TArray<FGPUSkinCache::FElementCacheStatusInfo>& CachedElementsField() { return *GetNativePointerField<TArray<FGPUSkinCache::FElementCacheStatusInfo>*>(this, "FGPUSkinCache.CachedElements"); }
	FRWBuffer& SkinCacheBufferRWField() { return *GetNativePointerField<FRWBuffer*>(this, "FGPUSkinCache.SkinCacheBufferRW"); }

	// Functions

	void ReleaseRHI() { NativeCall<void>(this, "FGPUSkinCache.ReleaseRHI"); }
	bool SetVertexStreamFromCache(FRHICommandList * RHICmdList, int Key, FShader * Shader, const FVertexFactory * VertexFactory, unsigned int BaseVertexIndex, bool VelocityPass, FShaderParameter PreviousStreamFloatOffset, FShaderParameter PreviousStreamFloatStride, FShaderResourceParameter PreviousStreamBuffer) { return NativeCall<bool, FRHICommandList *, int, FShader *, const FVertexFactory *, unsigned int, bool, FShaderParameter, FShaderParameter, FShaderResourceParameter>(this, "FGPUSkinCache.SetVertexStreamFromCache", RHICmdList, Key, Shader, VertexFactory, BaseVertexIndex, VelocityPass, PreviousStreamFloatOffset, PreviousStreamFloatStride, PreviousStreamBuffer); }
};

