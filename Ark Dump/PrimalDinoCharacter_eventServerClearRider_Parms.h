#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventServerClearRider_Parms
{
	char __padding[0x4L];
	int& OverrideUnboardDirectionField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventServerClearRider_Parms.OverrideUnboardDirection"); }
};

