#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientGetMessageOfTheDay_Parms
{
	char __padding[0x10L];
	FString& MessageField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientGetMessageOfTheDay_Parms.Message"); }
};

