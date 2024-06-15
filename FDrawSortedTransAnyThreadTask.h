#pragma once

#include "BaseDeclarations.h"
#include "FRenderTask.h"

struct FDrawSortedTransAnyThreadTask : FRenderTask
{
	char __padding[0x28L];
	FDeferredShadingSceneRenderer * RendererField() { return GetNativePointerField<FDeferredShadingSceneRenderer *>(this, "FDrawSortedTransAnyThreadTask.Renderer"); }
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FDrawSortedTransAnyThreadTask.View"); }
	bool& bSeparateTranslucencyPassField() { return *GetNativePointerField<bool*>(this, "FDrawSortedTransAnyThreadTask.bSeparateTranslucencyPass"); }
	const int& FirstIndexField() { return *GetNativePointerField<const int*>(this, "FDrawSortedTransAnyThreadTask.FirstIndex"); }
	const int& LastIndexField() { return *GetNativePointerField<const int*>(this, "FDrawSortedTransAnyThreadTask.LastIndex"); }
};

