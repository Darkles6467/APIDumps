#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPAnimNotifyCustomEvent_Parms
{
	char __padding[0x20L];
	FName& CustomEventNameField() { return *GetNativePointerField<FName*>(this, "ShooterWeapon_eventBPAnimNotifyCustomEvent_Parms.CustomEventName"); }
};

