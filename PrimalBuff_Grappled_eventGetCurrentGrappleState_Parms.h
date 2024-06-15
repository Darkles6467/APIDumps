#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventGetCurrentGrappleState_Parms
{
	char __padding[0x170L];
	FGrappleTether& ForTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventGetCurrentGrappleState_Parms.ForTether"); }
	TEnumAsByte<enum EGrappleState::Type>& ReturnValueField() { return *GetNativePointerField<TEnumAsByte<enum EGrappleState::Type>*>(this, "PrimalBuff_Grappled_eventGetCurrentGrappleState_Parms.ReturnValue"); }

	// Functions

};

