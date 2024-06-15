#pragma once

#include "BaseDeclarations.h"
struct PrimalPlayerData_eventSetPlayerHexagonCount_Parms
{
	char __padding[0x8L];
	int& NewHexagonCountField() { return *GetNativePointerField<int*>(this, "PrimalPlayerData_eventSetPlayerHexagonCount_Parms.NewHexagonCount"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalPlayerData_eventSetPlayerHexagonCount_Parms.ReturnValue"); }
};

