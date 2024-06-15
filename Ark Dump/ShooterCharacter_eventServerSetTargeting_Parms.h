#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerSetTargeting_Parms
{
	char __padding[0x1L];
	bool& bNewTargetingField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventServerSetTargeting_Parms.bNewTargeting"); }
};

