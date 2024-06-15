#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventModifyGrappledCharVelocity_Parms
{
	char __padding[0x180L];
	FVector& CurrentCharVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventModifyGrappledCharVelocity_Parms.CurrentCharVelocity"); }
	FGrappleTether& ForTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventModifyGrappledCharVelocity_Parms.ForTether"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventModifyGrappledCharVelocity_Parms.DeltaTime"); }
};

