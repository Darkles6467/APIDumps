#pragma once

#include "BaseDeclarations.h"
#include "ICustomSlateElement.h"

struct FDebugCanvasDrawer : ICustomSlateElement
{
	char __padding[0x18L];
	FCanvasProxy * GameThreadCanvasField() { return GetNativePointerField<FCanvasProxy *>(this, "FDebugCanvasDrawer.GameThreadCanvas"); }
	FCanvasProxy * RenderThreadCanvasField() { return GetNativePointerField<FCanvasProxy *>(this, "FDebugCanvasDrawer.RenderThreadCanvas"); }
	FSlateCanvasRenderTarget * RenderTargetField() { return GetNativePointerField<FSlateCanvasRenderTarget *>(this, "FDebugCanvasDrawer.RenderTarget"); }

	// Functions

	void DrawRenderThread(FRHICommandListImmediate * RHICmdList, const void * InWindowBackBuffer) { NativeCall<void, FRHICommandListImmediate *, const void *>(this, "FDebugCanvasDrawer.DrawRenderThread", RHICmdList, InWindowBackBuffer); }
	void InitDebugCanvas(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "FDebugCanvasDrawer.InitDebugCanvas", InWorld); }
};

