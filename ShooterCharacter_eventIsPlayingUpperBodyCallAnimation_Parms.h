#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventIsPlayingUpperBodyCallAnimation_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventIsPlayingUpperBodyCallAnimation_Parms.ReturnValue"); }
};

