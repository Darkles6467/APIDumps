#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureTurret_eventClientsFireProjectile_Parms
{
	char __padding[0x18L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "PrimalStructureTurret_eventClientsFireProjectile_Parms.Origin"); }
	FVector_NetQuantizeNormal& ShootDirField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "PrimalStructureTurret_eventClientsFireProjectile_Parms.ShootDir"); }
};

