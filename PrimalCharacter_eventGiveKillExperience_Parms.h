#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventGiveKillExperience_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventGiveKillExperience_Parms.ReturnValue"); }
};

