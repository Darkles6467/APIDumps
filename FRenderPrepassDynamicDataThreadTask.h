#pragma once

#include "BaseDeclarations.h"
#include "FRenderTask.h"

struct FRenderPrepassDynamicDataThreadTask : FRenderTask
{
	char __padding[0x20L];
	FDeferredShadingSceneRenderer * ThisRendererField() { return GetNativePointerField<FDeferredShadingSceneRenderer *>(this, "FRenderPrepassDynamicDataThreadTask.ThisRenderer"); }
	FViewInfo * ViewField() { return GetNativePointerField<FViewInfo *>(this, "FRenderPrepassDynamicDataThreadTask.View"); }
	bool * OutDirtyField() { return GetNativePointerField<bool *>(this, "FRenderPrepassDynamicDataThreadTask.OutDirty"); }
};

