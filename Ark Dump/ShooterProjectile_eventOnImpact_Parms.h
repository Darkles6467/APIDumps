#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventOnImpact_Parms
{
	char __padding[0x90L];
	FHitResult& HitResultField() { return *GetNativePointerField<FHitResult*>(this, "ShooterProjectile_eventOnImpact_Parms.HitResult"); }
	bool& bFromReplicationField() { return *GetNativePointerField<bool*>(this, "ShooterProjectile_eventOnImpact_Parms.bFromReplication"); }
};

