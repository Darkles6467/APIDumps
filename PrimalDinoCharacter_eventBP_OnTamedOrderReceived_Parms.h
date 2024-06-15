#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_OnTamedOrderReceived_Parms
{
	char __padding[0x20L];
	TEnumAsByte<enum EDinoTamedOrder::Type>& OrderTypeField() { return *GetNativePointerField<TEnumAsByte<enum EDinoTamedOrder::Type>*>(this, "PrimalDinoCharacter_eventBP_OnTamedOrderReceived_Parms.OrderType"); }
	bool& bForceField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBP_OnTamedOrderReceived_Parms.bForce"); }
	bool& orderNotExecutedField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBP_OnTamedOrderReceived_Parms.orderNotExecuted"); }
};

