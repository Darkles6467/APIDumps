#pragma once

#include "BaseDeclarations.h"
#include "FRenderTask.h"

struct FRenderVelocityDynamicThreadTask : FRenderTask
{
	char __padding[0x28L];
	FDeferredShadingSceneRenderer * ThisRendererField() { return GetNativePointerField<FDeferredShadingSceneRenderer *>(this, "FRenderVelocityDynamicThreadTask.ThisRenderer"); }
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FRenderVelocityDynamicThreadTask.View"); }
	FDeferredShadingSceneRenderer * SceneRendererField() { return GetNativePointerField<FDeferredShadingSceneRenderer *>(this, "FRenderVelocityDynamicThreadTask.SceneRenderer"); }
	int& FirstIndexField() { return *GetNativePointerField<int*>(this, "FRenderVelocityDynamicThreadTask.FirstIndex"); }
	int& LastIndexField() { return *GetNativePointerField<int*>(this, "FRenderVelocityDynamicThreadTask.LastIndex"); }
};

