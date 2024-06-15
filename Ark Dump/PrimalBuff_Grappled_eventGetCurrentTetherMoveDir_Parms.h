#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventGetCurrentTetherMoveDir_Parms
{
	char __padding[0x178L];
	FGrappleTether& ForTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventGetCurrentTetherMoveDir_Parms.ForTether"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventGetCurrentTetherMoveDir_Parms.ReturnValue"); }

	// Functions

};

