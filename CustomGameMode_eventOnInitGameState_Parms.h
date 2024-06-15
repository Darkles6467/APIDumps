#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnInitGameState_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnInitGameState_Parms.ReturnValue"); }
};

