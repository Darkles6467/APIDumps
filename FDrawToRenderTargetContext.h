#pragma once

#include "BaseDeclarations.h"
struct FDrawToRenderTargetContext
{
	char __padding[0x10L];
	struct FDrawEvent * DrawEventField() { return GetNativePointerField<struct FDrawEvent *>(this, "FDrawToRenderTargetContext.DrawEvent"); }

	// Functions

};

