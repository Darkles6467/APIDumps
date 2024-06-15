#pragma once

#include "BaseDeclarations.h"
#include "FCanvasBaseRenderItem.h"

struct FCanvasBatchedElementRenderItem : FCanvasBaseRenderItem
{
	char __padding[0x8L];
	FCanvasBatchedElementRenderItem::FRenderData * DataField() { return GetNativePointerField<FCanvasBatchedElementRenderItem::FRenderData *>(this, "FCanvasBatchedElementRenderItem.Data"); }

	// Functions

	void FRenderData(FBatchedElementParameters * InBatchedElementParameters, const FTexture * InTexture, ESimpleElementBlendMode InBlendMode, FCanvas::EElementType InElementType, const FCanvas::FTransformEntry * InTransform, const FDepthFieldGlowInfo * InGlowInfo) { NativeCall<void, FBatchedElementParameters *, const FTexture *, ESimpleElementBlendMode, FCanvas::EElementType, const FCanvas::FTransformEntry *, const FDepthFieldGlowInfo *>(this, "FCanvasBatchedElementRenderItem.FRenderData", InBatchedElementParameters, InTexture, InBlendMode, InElementType, InTransform, InGlowInfo); }
	bool Render_GameThread(const FCanvas * Canvas) { return NativeCall<bool, const FCanvas *>(this, "FCanvasBatchedElementRenderItem.Render_GameThread", Canvas); }
	bool Render_RenderThread(FRHICommandListImmediate * RHICmdList, const FCanvas * Canvas) { return NativeCall<bool, FRHICommandListImmediate *, const FCanvas *>(this, "FCanvasBatchedElementRenderItem.Render_RenderThread", RHICmdList, Canvas); }
};

