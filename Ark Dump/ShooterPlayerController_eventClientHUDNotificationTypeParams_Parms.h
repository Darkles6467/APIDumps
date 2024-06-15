#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientHUDNotificationTypeParams_Parms
{
	char __padding[0x18L];
	int& MessageTypeField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientHUDNotificationTypeParams_Parms.MessageType"); }
	int& MessageType1Field() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientHUDNotificationTypeParams_Parms.MessageType1"); }
	int& MessageParam2Field() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientHUDNotificationTypeParams_Parms.MessageParam2"); }
};

