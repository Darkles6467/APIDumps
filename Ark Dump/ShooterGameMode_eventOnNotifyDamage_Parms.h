#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventOnNotifyDamage_Parms
{
	char __padding[0x40L];
	float& DamageAmountField() { return *GetNativePointerField<float*>(this, "ShooterGameMode_eventOnNotifyDamage_Parms.DamageAmount"); }
};

