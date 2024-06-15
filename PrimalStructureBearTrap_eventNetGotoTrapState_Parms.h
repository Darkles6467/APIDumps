#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureBearTrap_eventNetGotoTrapState_Parms
{
	char __padding[0x1L];
	char& TrapStateField() { return *GetNativePointerField<char*>(this, "PrimalStructureBearTrap_eventNetGotoTrapState_Parms.TrapState"); }
};

