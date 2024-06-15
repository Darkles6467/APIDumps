#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventPlayEmoteAnimation_Parms
{
	char __padding[0x1L];
	char& EmoteIndexField() { return *GetNativePointerField<char*>(this, "ShooterCharacter_eventPlayEmoteAnimation_Parms.EmoteIndex"); }
};

