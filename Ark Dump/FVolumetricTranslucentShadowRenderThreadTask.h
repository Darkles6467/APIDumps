#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FVolumetricTranslucentShadowRenderThreadTask
{
	char __padding[0x28L];
	const FTranslucentPrimSet * PrimSetField() { return GetNativePointerField<const FTranslucentPrimSet *>(this, "FVolumetricTranslucentShadowRenderThreadTask.PrimSet"); }
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FVolumetricTranslucentShadowRenderThreadTask.View"); }
	FDeferredShadingSceneRenderer * RendererField() { return GetNativePointerField<FDeferredShadingSceneRenderer *>(this, "FVolumetricTranslucentShadowRenderThreadTask.Renderer"); }
	bool& bSeparateTranslucencyPassField() { return *GetNativePointerField<bool*>(this, "FVolumetricTranslucentShadowRenderThreadTask.bSeparateTranslucencyPass"); }
	int& IndexField() { return *GetNativePointerField<int*>(this, "FVolumetricTranslucentShadowRenderThreadTask.Index"); }

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FVolumetricTranslucentShadowRenderThreadTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

