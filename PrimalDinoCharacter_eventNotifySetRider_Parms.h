#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventNotifySetRider_Parms
{
	char __padding[0x10L];
	AShooterCharacter * RiderSettingField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalDinoCharacter_eventNotifySetRider_Parms.RiderSetting"); }
	APrimalDinoCharacter * ForDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventNotifySetRider_Parms.ForDino"); }
};

