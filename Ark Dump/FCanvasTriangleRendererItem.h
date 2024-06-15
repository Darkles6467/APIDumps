#pragma once

#include "BaseDeclarations.h"
#include "FCanvasBaseRenderItem.h"

struct FCanvasTriangleRendererItem : FCanvasBaseRenderItem
{
	char __padding[0x10L];
	FCanvasTriangleRendererItem::FRenderData * DataField() { return GetNativePointerField<FCanvasTriangleRendererItem::FRenderData *>(this, "FCanvasTriangleRendererItem.Data"); }
	const bool& bFreezeTimeField() { return *GetNativePointerField<const bool*>(this, "FCanvasTriangleRendererItem.bFreezeTime"); }

	// Functions

	bool Render_GameThread(const FCanvas * Canvas) { return NativeCall<bool, const FCanvas *>(this, "FCanvasTriangleRendererItem.Render_GameThread", Canvas); }
	bool Render_RenderThread(FRHICommandListImmediate * RHICmdList, const FCanvas * Canvas) { return NativeCall<bool, FRHICommandListImmediate *, const FCanvas *>(this, "FCanvasTriangleRendererItem.Render_RenderThread", RHICmdList, Canvas); }
};

