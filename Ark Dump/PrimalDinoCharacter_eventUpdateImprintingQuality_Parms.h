#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventUpdateImprintingQuality_Parms
{
	char __padding[0x4L];
	float& NewImprintingQualityField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventUpdateImprintingQuality_Parms.NewImprintingQuality"); }
};

