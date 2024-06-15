#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyMessageOfTheDay_Parms
{
	char __padding[0x18L];
	FString& MessageField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientNotifyMessageOfTheDay_Parms.Message"); }
	float& timeToDisplayField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientNotifyMessageOfTheDay_Parms.timeToDisplay"); }
};

