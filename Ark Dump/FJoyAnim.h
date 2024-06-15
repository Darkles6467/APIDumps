#pragma once

#include "BaseDeclarations.h"
struct FJoyAnim
{
	char __padding[0x10L];
	UAnimMontage * AnimField() { return GetNativePointerField<UAnimMontage *>(this, "FJoyAnim.Anim"); }
	float& ChanceField() { return *GetNativePointerField<float*>(this, "FJoyAnim.Chance"); }

	// Functions

};

