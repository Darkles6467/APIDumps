#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FHeightfieldLightingAtlas : FRenderResource
{
	char __padding[0x38L];
	bool& bIsDirtyField() { return *GetNativePointerField<bool*>(this, "FHeightfieldLightingAtlas.bIsDirty"); }
	FIntPoint& AtlasSizeField() { return *GetNativePointerField<FIntPoint*>(this, "FHeightfieldLightingAtlas.AtlasSize"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FHeightfieldLightingAtlas.InitDynamicRHI"); }
	void InitializeForSize(FIntPoint InAtlasSize) { NativeCall<void, FIntPoint>(this, "FHeightfieldLightingAtlas.InitializeForSize", InAtlasSize); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FHeightfieldLightingAtlas.ReleaseDynamicRHI"); }
};

