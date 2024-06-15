#pragma once

#include "BaseDeclarations.h"
struct CanvasRenderTarget2D_eventReceiveUpdate_Parms
{
	char __padding[0x10L];
	UCanvas * CanvasField() { return GetNativePointerField<UCanvas *>(this, "CanvasRenderTarget2D_eventReceiveUpdate_Parms.Canvas"); }
	int& WidthField() { return *GetNativePointerField<int*>(this, "CanvasRenderTarget2D_eventReceiveUpdate_Parms.Width"); }
	int& HeightField() { return *GetNativePointerField<int*>(this, "CanvasRenderTarget2D_eventReceiveUpdate_Parms.Height"); }
};

