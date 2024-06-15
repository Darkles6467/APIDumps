#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyPlayerDeathReason_Parms
{
	char __padding[0x10L];
	FString& ReasonStringField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientNotifyPlayerDeathReason_Parms.ReasonString"); }
};

