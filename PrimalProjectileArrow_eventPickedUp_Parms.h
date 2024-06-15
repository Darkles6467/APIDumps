#pragma once

#include "BaseDeclarations.h"
struct PrimalProjectileArrow_eventPickedUp_Parms
{
	char __padding[0x8L];
	AShooterCharacter * ByCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalProjectileArrow_eventPickedUp_Parms.ByCharacter"); }
};

