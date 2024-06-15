#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientServerSOTFNotificationCustom_Parms
{
	char __padding[0x38L];
	FString& MessageTextField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientServerSOTFNotificationCustom_Parms.MessageText"); }
	FLinearColor& MessageColorField() { return *GetNativePointerField<FLinearColor*>(this, "ShooterPlayerController_eventClientServerSOTFNotificationCustom_Parms.MessageColor"); }
	float& DisplayScaleField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientServerSOTFNotificationCustom_Parms.DisplayScale"); }
	float& DisplayTimeField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientServerSOTFNotificationCustom_Parms.DisplayTime"); }
};

