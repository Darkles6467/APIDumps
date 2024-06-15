#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventGetGrappleTetherReleaseMaxVelocity_Parms
{
	char __padding[0x178L];
	FGrappleTether& ForTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventGetGrappleTetherReleaseMaxVelocity_Parms.ForTether"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventGetGrappleTetherReleaseMaxVelocity_Parms.ReturnValue"); }

	// Functions

};

