#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventDoMate_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * WithMateField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventDoMate_Parms.WithMate"); }
};

