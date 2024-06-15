#pragma once

#include "BaseDeclarations.h"
struct FLightShaftsOutput
{
	char __padding[0x10L];
	bool& bRenderedField() { return *GetNativePointerField<bool*>(this, "FLightShaftsOutput.bRendered"); }
};

