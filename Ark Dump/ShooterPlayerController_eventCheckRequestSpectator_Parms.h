#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventCheckRequestSpectator_Parms
{
	char __padding[0x10L];
	FString& InSpectatorPassField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventCheckRequestSpectator_Parms.InSpectatorPass"); }
};

