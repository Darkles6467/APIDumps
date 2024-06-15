#pragma once

#include "BaseDeclarations.h"
struct HUD_eventRemoveDebugText_Parms
{
	char __padding[0x10L];
	bool& bLeaveDurationTextField() { return *GetNativePointerField<bool*>(this, "HUD_eventRemoveDebugText_Parms.bLeaveDurationText"); }
};

