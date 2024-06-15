#pragma once

#include "BaseDeclarations.h"
struct IPtoStateMap
{
	char __padding[0x8L];
	None& pcField() { return *GetNativePointerField<None*>(this, "IPtoStateMap.pc"); }
	None& stateField() { return *GetNativePointerField<None*>(this, "IPtoStateMap.state"); }
};

