#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerClearSwitchingWeapon_Parms
{
	char __padding[0x2L];
	bool& bOnlyIfDefaultWeaponField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventServerClearSwitchingWeapon_Parms.bOnlyIfDefaultWeapon"); }
	bool& bClientRequestNextWeaponIDField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventServerClearSwitchingWeapon_Parms.bClientRequestNextWeaponID"); }
};

