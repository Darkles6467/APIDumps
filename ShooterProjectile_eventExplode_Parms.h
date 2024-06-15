#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventExplode_Parms
{
	char __padding[0x88L];
	FHitResult& ImpactField() { return *GetNativePointerField<FHitResult*>(this, "ShooterProjectile_eventExplode_Parms.Impact"); }
};

