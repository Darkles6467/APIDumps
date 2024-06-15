#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventCheckCheatsPassword_Parms
{
	char __padding[0x10L];
	FString& passField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventCheckCheatsPassword_Parms.pass"); }
};

