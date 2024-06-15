#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventNetSetHeadHairPercent_Parms
{
	char __padding[0x8L];
	float& thePercentField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventNetSetHeadHairPercent_Parms.thePercent"); }
	int& newHeadHairIndexField() { return *GetNativePointerField<int*>(this, "ShooterCharacter_eventNetSetHeadHairPercent_Parms.newHeadHairIndex"); }
};

