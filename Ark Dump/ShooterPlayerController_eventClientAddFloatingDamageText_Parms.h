#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientAddFloatingDamageText_Parms
{
	char __padding[0x14L];
	FVector_NetQuantize& AtLocationField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "ShooterPlayerController_eventClientAddFloatingDamageText_Parms.AtLocation"); }
	int& DamageAmountField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientAddFloatingDamageText_Parms.DamageAmount"); }
	int& FromTeamIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientAddFloatingDamageText_Parms.FromTeamID"); }
};

