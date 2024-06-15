#pragma once

#include "BaseDeclarations.h"
struct FCanvasProxy
{
	char __padding[0x180L];
	FCanvas& CanvasField() { return *GetNativePointerField<FCanvas*>(this, "FCanvasProxy.Canvas"); }
};

