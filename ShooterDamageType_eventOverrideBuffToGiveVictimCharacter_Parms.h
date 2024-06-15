#pragma once

#include "BaseDeclarations.h"
struct ShooterDamageType_eventOverrideBuffToGiveVictimCharacter_Parms
{
	char __padding[0x48L];
	float& IncomingDamageField() { return *GetNativePointerField<float*>(this, "ShooterDamageType_eventOverrideBuffToGiveVictimCharacter_Parms.IncomingDamage"); }

	// Functions

};

