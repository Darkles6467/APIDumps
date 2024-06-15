#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_OnTargetedByTamedOrder_Parms
{
	char __padding[0x18L];
	APrimalDinoCharacter * AttackingDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventBP_OnTargetedByTamedOrder_Parms.AttackingDino"); }
	bool& bForcedField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBP_OnTargetedByTamedOrder_Parms.bForced"); }
};

