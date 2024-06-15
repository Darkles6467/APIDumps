#pragma once

#include "BaseDeclarations.h"
struct CanvasRenderTarget2D_eventOnCanvasRenderTargetUpdate_Parms
{
	char __padding[0x10L];
	UCanvas * CanvasField() { return GetNativePointerField<UCanvas *>(this, "CanvasRenderTarget2D_eventOnCanvasRenderTargetUpdate_Parms.Canvas"); }
	int& WidthField() { return *GetNativePointerField<int*>(this, "CanvasRenderTarget2D_eventOnCanvasRenderTargetUpdate_Parms.Width"); }
	int& HeightField() { return *GetNativePointerField<int*>(this, "CanvasRenderTarget2D_eventOnCanvasRenderTargetUpdate_Parms.Height"); }
};

