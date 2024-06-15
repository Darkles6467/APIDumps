#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnAllowCreateSurvivor_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnAllowCreateSurvivor_Parms.ReturnValue"); }
};

