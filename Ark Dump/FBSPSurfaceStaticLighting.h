#pragma once

#include "BaseDeclarations.h"
#include "FStaticLightingTextureMapping.h"
#include "FStaticLightingMapping.h"

struct FBSPSurfaceStaticLighting : FStaticLightingTextureMapping
{
	char __padding[0x128L];
	FieldArray<_BYTE, 168> anonymous_0Field() { return {this, "FBSPSurfaceStaticLighting.anonymous_0"}; }
	FQuantizedLightmapData * QuantizedDataField() { return GetNativePointerField<FQuantizedLightmapData *>(this, "FBSPSurfaceStaticLighting.QuantizedData"); }
	FIntRect& MappedRectField() { return *GetNativePointerField<FIntRect*>(this, "FBSPSurfaceStaticLighting.MappedRect"); }
	TWeakObjectPtr<UModel>& ModelField() { return *GetNativePointerField<TWeakObjectPtr<UModel>*>(this, "FBSPSurfaceStaticLighting.Model"); }
	FieldArray<_BYTE, 16> gap160Field() { return {this, "FBSPSurfaceStaticLighting.gap160"}; }
};

