#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventServerRequestToggleWeapon_Parms
{
	char __padding[0x8L];
	AShooterCharacter * CharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventServerRequestToggleWeapon_Parms.Character"); }
};

