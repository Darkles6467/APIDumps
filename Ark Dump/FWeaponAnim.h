#pragma once

#include "BaseDeclarations.h"
struct FWeaponAnim
{
	char __padding[0x10L];
	UAnimMontage * Pawn1PField() { return GetNativePointerField<UAnimMontage *>(this, "FWeaponAnim.Pawn1P"); }
	UAnimMontage * Pawn3PField() { return GetNativePointerField<UAnimMontage *>(this, "FWeaponAnim.Pawn3P"); }

	// Functions

};

