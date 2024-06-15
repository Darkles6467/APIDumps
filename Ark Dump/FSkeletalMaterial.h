#pragma once

#include "BaseDeclarations.h"
struct FSkeletalMaterial
{
	char __padding[0x10L];
	bool& bEnableShadowCastingField() { return *GetNativePointerField<bool*>(this, "FSkeletalMaterial.bEnableShadowCasting"); }

	// Functions

};

