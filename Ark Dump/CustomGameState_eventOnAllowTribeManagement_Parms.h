#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnAllowTribeManagement_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnAllowTribeManagement_Parms.ReturnValue"); }
};

