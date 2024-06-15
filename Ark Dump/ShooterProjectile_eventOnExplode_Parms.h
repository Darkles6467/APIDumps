#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventOnExplode_Parms
{
	char __padding[0x88L];
	FHitResult& ResultField() { return *GetNativePointerField<FHitResult*>(this, "ShooterProjectile_eventOnExplode_Parms.Result"); }
};

