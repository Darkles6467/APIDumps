#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureTurretBallista_eventClientsFireProjectile_Parms
{
	char __padding[0x18L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "PrimalStructureTurretBallista_eventClientsFireProjectile_Parms.Origin"); }
	FVector_NetQuantizeNormal& ShootDirField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "PrimalStructureTurretBallista_eventClientsFireProjectile_Parms.ShootDir"); }
};

