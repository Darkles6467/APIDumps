#pragma once

#include "BaseDeclarations.h"
#include "FRenderTarget.h"

struct FSlateCanvasRenderTarget : FRenderTarget
{
	char __padding[0x10L];
	FIntRect& ViewRectField() { return *GetNativePointerField<FIntRect*>(this, "FSlateCanvasRenderTarget.ViewRect"); }
};

