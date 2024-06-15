#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FSystemTextures : FRenderResource
{
	char __padding[0x40L];
	ERHIFeatureLevel::Type& FeatureLevelInitializedToField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FSystemTextures.FeatureLevelInitializedTo"); }
	bool& bTexturesInitializedField() { return *GetNativePointerField<bool*>(this, "FSystemTextures.bTexturesInitialized"); }

	// Functions

	void InitializeTextures(FRHICommandListImmediate * RHICmdList, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, FRHICommandListImmediate *, ERHIFeatureLevel::Type>(this, "FSystemTextures.InitializeTextures", RHICmdList, InFeatureLevel); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FSystemTextures.ReleaseDynamicRHI"); }
};

