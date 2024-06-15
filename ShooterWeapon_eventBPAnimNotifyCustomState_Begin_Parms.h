#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPAnimNotifyCustomState_Begin_Parms
{
	char __padding[0x28L];
	FName& CustomEventNameField() { return *GetNativePointerField<FName*>(this, "ShooterWeapon_eventBPAnimNotifyCustomState_Begin_Parms.CustomEventName"); }
	float& TotalDurationField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_eventBPAnimNotifyCustomState_Begin_Parms.TotalDuration"); }
};

