#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventClientNetExplode_Parms
{
	char __padding[0x88L];
	FHitResult& HitResultField() { return *GetNativePointerField<FHitResult*>(this, "ShooterProjectile_eventClientNetExplode_Parms.HitResult"); }
};

