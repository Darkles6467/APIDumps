#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestSetPin_Parms
{
	char __padding[0x18L];
	int& PinValueField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestSetPin_Parms.PinValue"); }
	bool& bIsSettingField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerRequestSetPin_Parms.bIsSetting"); }
	int& TheCustomIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestSetPin_Parms.TheCustomIndex"); }
};

