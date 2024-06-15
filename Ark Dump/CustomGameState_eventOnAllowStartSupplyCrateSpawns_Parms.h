#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnAllowStartSupplyCrateSpawns_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnAllowStartSupplyCrateSpawns_Parms.ReturnValue"); }
};

