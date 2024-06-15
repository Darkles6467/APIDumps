#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventNetPlaySoundOnCharacter_Parms
{
	char __padding[0x10L];
	bool& bPlayOnOwnerField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventNetPlaySoundOnCharacter_Parms.bPlayOnOwner"); }
};

