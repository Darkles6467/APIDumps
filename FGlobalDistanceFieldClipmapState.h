#pragma once

#include "BaseDeclarations.h"
struct FGlobalDistanceFieldClipmapState
{
	char __padding[0x58L];
	FIntVector& FullUpdateOriginField() { return *GetNativePointerField<FIntVector*>(this, "FGlobalDistanceFieldClipmapState.FullUpdateOrigin"); }
	FIntVector& LastPartialUpdateOriginField() { return *GetNativePointerField<FIntVector*>(this, "FGlobalDistanceFieldClipmapState.LastPartialUpdateOrigin"); }
	float& CachedMaxOcclusionDistanceField() { return *GetNativePointerField<float*>(this, "FGlobalDistanceFieldClipmapState.CachedMaxOcclusionDistance"); }
	float& CachedGlobalDistanceFieldViewDistanceField() { return *GetNativePointerField<float*>(this, "FGlobalDistanceFieldClipmapState.CachedGlobalDistanceFieldViewDistance"); }
	unsigned int& CacheMostlyStaticSeparatelyField() { return *GetNativePointerField<unsigned int*>(this, "FGlobalDistanceFieldClipmapState.CacheMostlyStaticSeparately"); }
	FieldArray<FGlobalDistanceFieldCacheTypeState, 2> CacheField() { return {this, "FGlobalDistanceFieldClipmapState.Cache"}; }

	// Functions

};

