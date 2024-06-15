#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestRemoveWeaponClipAmmo_Parms
{
	char __padding[0x10L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerRequestRemoveWeaponClipAmmo_Parms.itemID"); }
};

