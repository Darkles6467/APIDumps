#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventBPSetPlayerHexagonCount_Parms
{
	char __padding[0x8L];
	int& NewHexagonCountField() { return *GetNativePointerField<int*>(this, "ShooterCharacter_eventBPSetPlayerHexagonCount_Parms.NewHexagonCount"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventBPSetPlayerHexagonCount_Parms.ReturnValue"); }

	// Functions

};

