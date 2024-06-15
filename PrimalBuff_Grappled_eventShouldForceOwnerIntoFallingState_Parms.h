#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventShouldForceOwnerIntoFallingState_Parms
{
	char __padding[0x178L];
	FGrappleTether& ForTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventShouldForceOwnerIntoFallingState_Parms.ForTether"); }
	FVector& WithOwnerVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventShouldForceOwnerIntoFallingState_Parms.WithOwnerVelocity"); }
	TEnumAsByte<enum EMovementMode>& CheckMovementModeOverrideField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "PrimalBuff_Grappled_eventShouldForceOwnerIntoFallingState_Parms.CheckMovementModeOverride"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventShouldForceOwnerIntoFallingState_Parms.ReturnValue"); }

	// Functions

};

