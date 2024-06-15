#pragma once

#include "BaseDeclarations.h"
struct FFontRenderInfo
{
	char __padding[0x30L];
	FDepthFieldGlowInfo& GlowInfoField() { return *GetNativePointerField<FDepthFieldGlowInfo*>(this, "FFontRenderInfo.GlowInfo"); }

	// Functions

};

