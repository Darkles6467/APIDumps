#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventSetTurretMode_Parms
{
	char __padding[0x2L];
	bool& enabledField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventSetTurretMode_Parms.enabled"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventSetTurretMode_Parms.ReturnValue"); }
};

