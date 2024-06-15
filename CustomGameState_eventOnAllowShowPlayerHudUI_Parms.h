#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnAllowShowPlayerHudUI_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnAllowShowPlayerHudUI_Parms.ReturnValue"); }
};

