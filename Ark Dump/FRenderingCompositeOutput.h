#pragma once

#include "BaseDeclarations.h"
struct FRenderingCompositeOutput
{
	char __padding[0x58L];
	FPooledRenderTargetDesc& RenderTargetDescField() { return *GetNativePointerField<FPooledRenderTargetDesc*>(this, "FRenderingCompositeOutput.RenderTargetDesc"); }
	unsigned int& DependenciesField() { return *GetNativePointerField<unsigned int*>(this, "FRenderingCompositeOutput.Dependencies"); }

	// Functions

	const FSceneRenderTargetItem * RequestSurface(const FRenderingCompositePassContext * Context) { return NativeCall<const FSceneRenderTargetItem *, const FRenderingCompositePassContext *>(this, "FRenderingCompositeOutput.RequestSurface", Context); }
};

