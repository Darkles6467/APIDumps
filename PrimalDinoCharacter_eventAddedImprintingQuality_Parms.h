#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventAddedImprintingQuality_Parms
{
	char __padding[0x4L];
	float& AmountField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventAddedImprintingQuality_Parms.Amount"); }
};

