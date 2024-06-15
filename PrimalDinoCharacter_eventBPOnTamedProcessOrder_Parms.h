#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOnTamedProcessOrder_Parms
{
	char __padding[0x20L];
	TEnumAsByte<enum EDinoTamedOrder::Type>& OrderTypeField() { return *GetNativePointerField<TEnumAsByte<enum EDinoTamedOrder::Type>*>(this, "PrimalDinoCharacter_eventBPOnTamedProcessOrder_Parms.OrderType"); }
	bool& bForceField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPOnTamedProcessOrder_Parms.bForce"); }
	bool& orderNotExecutedField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPOnTamedProcessOrder_Parms.orderNotExecuted"); }
};

