#pragma once

#include "BaseDeclarations.h"
struct PrimalPlayerData_eventGetPlayerHexagonCount_Parms
{
	char __padding[0x4L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalPlayerData_eventGetPlayerHexagonCount_Parms.ReturnValue"); }
};

