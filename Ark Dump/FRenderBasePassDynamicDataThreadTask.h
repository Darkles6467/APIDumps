#pragma once

#include "BaseDeclarations.h"
#include "FRenderTask.h"

struct FRenderBasePassDynamicDataThreadTask : FRenderTask
{
	char __padding[0x20L];
	FDeferredShadingSceneRenderer * ThisRendererField() { return GetNativePointerField<FDeferredShadingSceneRenderer *>(this, "FRenderBasePassDynamicDataThreadTask.ThisRenderer"); }
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FRenderBasePassDynamicDataThreadTask.View"); }
	bool * OutDirtyField() { return GetNativePointerField<bool *>(this, "FRenderBasePassDynamicDataThreadTask.OutDirty"); }
};

