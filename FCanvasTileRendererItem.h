#pragma once

#include "BaseDeclarations.h"
#include "FCanvasBaseRenderItem.h"

struct FCanvasTileRendererItem : FCanvasBaseRenderItem
{
	char __padding[0x10L];
	FCanvasTileRendererItem::FRenderData * DataField() { return GetNativePointerField<FCanvasTileRendererItem::FRenderData *>(this, "FCanvasTileRendererItem.Data"); }
	const bool& bFreezeTimeField() { return *GetNativePointerField<const bool*>(this, "FCanvasTileRendererItem.bFreezeTime"); }

	// Functions

	bool Render_GameThread(const FCanvas * Canvas) { return NativeCall<bool, const FCanvas *>(this, "FCanvasTileRendererItem.Render_GameThread", Canvas); }
	bool Render_RenderThread(FRHICommandListImmediate * RHICmdList, const FCanvas * Canvas) { return NativeCall<bool, FRHICommandListImmediate *, const FCanvas *>(this, "FCanvasTileRendererItem.Render_RenderThread", RHICmdList, Canvas); }
};

