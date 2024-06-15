#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyUnlockedEngram_Parms
{
	char __padding[0x10L];
	bool& bTekGramField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientNotifyUnlockedEngram_Parms.bTekGram"); }
};

