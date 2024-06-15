#pragma once

#include "BaseDeclarations.h"
struct PrimalWorldBuffCustomImplement_eventBuffStackIncreased_Parms
{
	char __padding[0x4L];
	int& newStackCountField() { return *GetNativePointerField<int*>(this, "PrimalWorldBuffCustomImplement_eventBuffStackIncreased_Parms.newStackCount"); }
};

