#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnAllowDaytimeTransitionSounds_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnAllowDaytimeTransitionSounds_Parms.ReturnValue"); }
};

