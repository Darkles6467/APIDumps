#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientServerNotification_Parms
{
	char __padding[0x38L];
	FString& MessageTextField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientServerNotification_Parms.MessageText"); }
	FLinearColor& MessageColorField() { return *GetNativePointerField<FLinearColor*>(this, "ShooterPlayerController_eventClientServerNotification_Parms.MessageColor"); }
	float& DisplayScaleField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientServerNotification_Parms.DisplayScale"); }
	float& DisplayTimeField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientServerNotification_Parms.DisplayTime"); }
};

