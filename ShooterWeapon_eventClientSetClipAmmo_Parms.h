#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventClientSetClipAmmo_Parms
{
	char __padding[0x8L];
	int& newClipAmmoField() { return *GetNativePointerField<int*>(this, "ShooterWeapon_eventClientSetClipAmmo_Parms.newClipAmmo"); }
	bool& bOnlyUpdateItemField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventClientSetClipAmmo_Parms.bOnlyUpdateItem"); }
};

