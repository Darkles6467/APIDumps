#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerSetIsVoiceActive_Parms
{
	char __padding[0x1L];
	bool& IsActiveField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventServerSetIsVoiceActive_Parms.IsActive"); }
};

