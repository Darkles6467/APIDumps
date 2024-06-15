#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureUnderwaterBase_eventSetPortholeState_Parms
{
	char __padding[0x8L];
	int& indexField() { return *GetNativePointerField<int*>(this, "PrimalStructureUnderwaterBase_eventSetPortholeState_Parms.index"); }
	bool& bOpenField() { return *GetNativePointerField<bool*>(this, "PrimalStructureUnderwaterBase_eventSetPortholeState_Parms.bOpen"); }
};

