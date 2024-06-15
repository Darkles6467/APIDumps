#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureUnderwaterBase_eventSetPortholeLocked_Parms
{
	char __padding[0x8L];
	int& indexField() { return *GetNativePointerField<int*>(this, "PrimalStructureUnderwaterBase_eventSetPortholeLocked_Parms.index"); }
	bool& bLockedField() { return *GetNativePointerField<bool*>(this, "PrimalStructureUnderwaterBase_eventSetPortholeLocked_Parms.bLocked"); }
};

