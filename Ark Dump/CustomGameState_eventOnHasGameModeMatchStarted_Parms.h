#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnHasGameModeMatchStarted_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnHasGameModeMatchStarted_Parms.ReturnValue"); }
};

