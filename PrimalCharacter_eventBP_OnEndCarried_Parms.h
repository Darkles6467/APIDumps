#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBP_OnEndCarried_Parms
{
	char __padding[0x2L];
	bool& bFromDinoField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBP_OnEndCarried_Parms.bFromDino"); }
	bool& bCancelAnyCarryBuffsField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBP_OnEndCarried_Parms.bCancelAnyCarryBuffs"); }
};

