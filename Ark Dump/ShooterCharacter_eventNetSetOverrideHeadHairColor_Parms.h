#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventNetSetOverrideHeadHairColor_Parms
{
	char __padding[0x10L];
	FLinearColor& HairColorField() { return *GetNativePointerField<FLinearColor*>(this, "ShooterCharacter_eventNetSetOverrideHeadHairColor_Parms.HairColor"); }
};

