#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventServerDinoOrder_Parms
{
	char __padding[0x18L];
	APrimalDinoCharacter * aDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalCharacter_eventServerDinoOrder_Parms.aDino"); }
	TEnumAsByte<enum EDinoTamedOrder::Type>& OrderTypeField() { return *GetNativePointerField<TEnumAsByte<enum EDinoTamedOrder::Type>*>(this, "PrimalCharacter_eventServerDinoOrder_Parms.OrderType"); }
};

