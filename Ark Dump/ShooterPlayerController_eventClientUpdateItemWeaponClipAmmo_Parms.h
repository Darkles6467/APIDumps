#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientUpdateItemWeaponClipAmmo_Parms
{
	char __padding[0x18L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventClientUpdateItemWeaponClipAmmo_Parms.itemID"); }
	int& AmmoField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientUpdateItemWeaponClipAmmo_Parms.Ammo"); }
};

