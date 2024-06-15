#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPrimalCharacterNotifyLevelUp_Parms
{
	char __padding[0x4L];
	int& ExtraCharacterLevelField() { return *GetNativePointerField<int*>(this, "PrimalCharacter_eventPrimalCharacterNotifyLevelUp_Parms.ExtraCharacterLevel"); }
};

