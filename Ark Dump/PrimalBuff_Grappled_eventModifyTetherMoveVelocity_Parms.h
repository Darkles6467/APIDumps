#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventModifyTetherMoveVelocity_Parms
{
	char __padding[0x178L];
	FVector& CurrentMoveVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventModifyTetherMoveVelocity_Parms.CurrentMoveVelocity"); }
	FGrappleTether& ForTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventModifyTetherMoveVelocity_Parms.ForTether"); }
};

