#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBP_OnStartCarried_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * aDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalCharacter_eventBP_OnStartCarried_Parms.aDino"); }
};

