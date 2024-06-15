#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnAllowPopUps_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnAllowPopUps_Parms.ReturnValue"); }
};

