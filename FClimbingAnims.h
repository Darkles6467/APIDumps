#pragma once

#include "BaseDeclarations.h"
struct FClimbingAnims
{
	char __padding[0x400L];
	FieldArray<FWeaponAnim, 32> LeftHandAnchoredField() { return {this, "FClimbingAnims.LeftHandAnchored"}; }
	FieldArray<FWeaponAnim, 32> RightHandAnchoredField() { return {this, "FClimbingAnims.RightHandAnchored"}; }

	// Functions

};

