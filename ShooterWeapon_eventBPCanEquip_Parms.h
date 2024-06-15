#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPCanEquip_Parms
{
	char __padding[0x10L];
	AShooterCharacter * ByCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "ShooterWeapon_eventBPCanEquip_Parms.ByCharacter"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPCanEquip_Parms.ReturnValue"); }
};

