#pragma once

#include "BaseDeclarations.h"
#include "ICustomSlateElement.h"

struct FCustomCanvasWidgetElement : ICustomSlateElement
{
	char __padding[0x20L];
	FCustomWidgetRenderTarget * RenderTargetField() { return GetNativePointerField<FCustomWidgetRenderTarget *>(this, "FCustomCanvasWidgetElement.RenderTarget"); }
	FIntRect& ScissorRectField() { return *GetNativePointerField<FIntRect*>(this, "FCustomCanvasWidgetElement.ScissorRect"); }
	FCanvas * CanvasField() { return GetNativePointerField<FCanvas *>(this, "FCustomCanvasWidgetElement.Canvas"); }

	// Functions

	void DrawRenderThread(FRHICommandListImmediate * RHICmdList, const void * InWindowBackBuffer) { NativeCall<void, FRHICommandListImmediate *, const void *>(this, "FCustomCanvasWidgetElement.DrawRenderThread", RHICmdList, InWindowBackBuffer); }
	void SetScissorRect(const FIntRect * InScissorRect) { NativeCall<void, const FIntRect *>(this, "FCustomCanvasWidgetElement.SetScissorRect", InScissorRect); }
};

