#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventBPGetPlayerHexagonCount_Parms
{
	char __padding[0x4L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "ShooterCharacter_eventBPGetPlayerHexagonCount_Parms.ReturnValue"); }
};

