#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventServerCallStayOne_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * ForDinoCharField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalCharacter_eventServerCallStayOne_Parms.ForDinoChar"); }
};

