#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventNetSetFacialHairPercent_Parms
{
	char __padding[0x8L];
	float& thePercentField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventNetSetFacialHairPercent_Parms.thePercent"); }
	int& newFacialHairIndexField() { return *GetNativePointerField<int*>(this, "ShooterCharacter_eventNetSetFacialHairPercent_Parms.newFacialHairIndex"); }
};

