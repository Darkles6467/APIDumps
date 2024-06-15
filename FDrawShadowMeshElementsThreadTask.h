#pragma once

#include "BaseDeclarations.h"
#include "FRenderTask.h"

struct FDrawShadowMeshElementsThreadTask : FRenderTask
{
	char __padding[0x20L];
	FProjectedShadowInfo * ThisRendererField() { return GetNativePointerField<FProjectedShadowInfo *>(this, "FDrawShadowMeshElementsThreadTask.ThisRenderer"); }
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FDrawShadowMeshElementsThreadTask.View"); }
	bool& bReflectiveField() { return *GetNativePointerField<bool*>(this, "FDrawShadowMeshElementsThreadTask.bReflective"); }
};

