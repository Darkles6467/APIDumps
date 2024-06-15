#pragma once

#include "BaseDeclarations.h"
#include "FIntRect.h"

struct FRenderingCompositePassContext
{
	char __padding[0x58L];
	FViewInfo * ViewField() { return GetNativePointerField<FViewInfo *>(this, "FRenderingCompositePassContext.View"); }
	FRenderingCompositePass * PassField() { return GetNativePointerField<FRenderingCompositePass *>(this, "FRenderingCompositePassContext.Pass"); }
	FRenderingCompositePass * RootField() { return GetNativePointerField<FRenderingCompositePass *>(this, "FRenderingCompositePassContext.Root"); }
	FRenderingCompositionGraph& GraphField() { return *GetNativePointerField<FRenderingCompositionGraph*>(this, "FRenderingCompositePassContext.Graph"); }
	FIntRect& ViewPortRectField() { return *GetNativePointerField<FIntRect*>(this, "FRenderingCompositePassContext.ViewPortRect"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FRenderingCompositePassContext.FeatureLevel"); }

	// Functions

	void SetViewportAndCallRHI(FIntRect InViewPortRect, float InMinZ, float InMaxZ) { NativeCall<void, FIntRect, float, float>(this, "FRenderingCompositePassContext.SetViewportAndCallRHI", InViewPortRect, InMinZ, InMaxZ); }
	void Process(const wchar_t * GraphDebugName) { NativeCall<void, const wchar_t *>(this, "FRenderingCompositePassContext.Process", GraphDebugName); }
};

