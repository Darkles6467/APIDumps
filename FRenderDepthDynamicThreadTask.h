#pragma once

#include "BaseDeclarations.h"
#include "FRenderTask.h"

struct FRenderDepthDynamicThreadTask : FRenderTask
{
	char __padding[0x28L];
	FProjectedShadowInfo * ThisRendererField() { return GetNativePointerField<FProjectedShadowInfo *>(this, "FRenderDepthDynamicThreadTask.ThisRenderer"); }
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FRenderDepthDynamicThreadTask.View"); }
	bool& bRenderStaticGeometryField() { return *GetNativePointerField<bool*>(this, "FRenderDepthDynamicThreadTask.bRenderStaticGeometry"); }
	bool& bRenderDynamicGeometryField() { return *GetNativePointerField<bool*>(this, "FRenderDepthDynamicThreadTask.bRenderDynamicGeometry"); }
};

