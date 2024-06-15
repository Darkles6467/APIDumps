#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventFireProjectile_Parms
{
	char __padding[0x1cL];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventFireProjectile_Parms.Origin"); }
	FVector_NetQuantizeNormal& ShootDirField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "PrimalDinoCharacter_eventFireProjectile_Parms.ShootDir"); }
	bool& bScaleProjDamageByDinoDamageField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventFireProjectile_Parms.bScaleProjDamageByDinoDamage"); }
};

