#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerSetBallistaTargeting_Parms
{
	char __padding[0x1L];
	bool& StartTargetingField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventServerSetBallistaTargeting_Parms.StartTargeting"); }
};

