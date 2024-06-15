#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventPreventExplosionEmitter_Parms
{
	char __padding[0x90L];
	FHitResult& ImpactField() { return *GetNativePointerField<FHitResult*>(this, "ShooterProjectile_eventPreventExplosionEmitter_Parms.Impact"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterProjectile_eventPreventExplosionEmitter_Parms.ReturnValue"); }
};

