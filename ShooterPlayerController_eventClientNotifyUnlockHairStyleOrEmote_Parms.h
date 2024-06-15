#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyUnlockHairStyleOrEmote_Parms
{
	char __padding[0x8L];
	FName& HairstyleOrEmoteNameField() { return *GetNativePointerField<FName*>(this, "ShooterPlayerController_eventClientNotifyUnlockHairStyleOrEmote_Parms.HairstyleOrEmoteName"); }
};

