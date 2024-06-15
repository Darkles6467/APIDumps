#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientServerNotificationSingle_Parms
{
	char __padding[0x40L];
	FString& MessageTextField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientServerNotificationSingle_Parms.MessageText"); }
	FLinearColor& MessageColorField() { return *GetNativePointerField<FLinearColor*>(this, "ShooterPlayerController_eventClientServerNotificationSingle_Parms.MessageColor"); }
	float& DisplayScaleField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientServerNotificationSingle_Parms.DisplayScale"); }
	float& DisplayTimeField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientServerNotificationSingle_Parms.DisplayTime"); }
	int& MessageTypeIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientServerNotificationSingle_Parms.MessageTypeID"); }
};

