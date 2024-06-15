#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSetMessageOfTheDay_Parms
{
	char __padding[0x10L];
	FString& MessageField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerSetMessageOfTheDay_Parms.Message"); }
};

