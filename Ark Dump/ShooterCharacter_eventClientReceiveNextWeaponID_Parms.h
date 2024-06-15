#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventClientReceiveNextWeaponID_Parms
{
	char __padding[0x8L];
	FItemNetID& theItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterCharacter_eventClientReceiveNextWeaponID_Parms.theItemID"); }
};

