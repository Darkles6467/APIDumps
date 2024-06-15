#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerRequestHexagonTrade_Parms
{
	char __padding[0x8L];
	int& RequestedTradableItemIndexField() { return *GetNativePointerField<int*>(this, "ShooterCharacter_eventServerRequestHexagonTrade_Parms.RequestedTradableItemIndex"); }
	int& QuantityField() { return *GetNativePointerField<int*>(this, "ShooterCharacter_eventServerRequestHexagonTrade_Parms.Quantity"); }
};

