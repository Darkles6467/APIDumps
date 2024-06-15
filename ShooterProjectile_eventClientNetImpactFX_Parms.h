#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventClientNetImpactFX_Parms
{
	char __padding[0x88L];
	FHitResult& HitResultField() { return *GetNativePointerField<FHitResult*>(this, "ShooterProjectile_eventClientNetImpactFX_Parms.HitResult"); }
};

