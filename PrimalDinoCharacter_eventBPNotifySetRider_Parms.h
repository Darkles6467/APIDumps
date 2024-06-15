#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPNotifySetRider_Parms
{
	char __padding[0x8L];
	AShooterCharacter * RiderSettingField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalDinoCharacter_eventBPNotifySetRider_Parms.RiderSetting"); }
};

