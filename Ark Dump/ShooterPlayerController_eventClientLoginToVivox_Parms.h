#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientLoginToVivox_Parms
{
	char __padding[0x10L];
	FString& VivoxUsernameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientLoginToVivox_Parms.VivoxUsername"); }
};

