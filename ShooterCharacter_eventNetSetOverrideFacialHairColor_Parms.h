#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventNetSetOverrideFacialHairColor_Parms
{
	char __padding[0x10L];
	FLinearColor& HairColorField() { return *GetNativePointerField<FLinearColor*>(this, "ShooterCharacter_eventNetSetOverrideFacialHairColor_Parms.HairColor"); }
};

