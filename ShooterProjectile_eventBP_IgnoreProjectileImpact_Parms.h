#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventBP_IgnoreProjectileImpact_Parms
{
	char __padding[0x90L];
	FHitResult& ImpactHitField() { return *GetNativePointerField<FHitResult*>(this, "ShooterProjectile_eventBP_IgnoreProjectileImpact_Parms.ImpactHit"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterProjectile_eventBP_IgnoreProjectileImpact_Parms.ReturnValue"); }

	// Functions

};

