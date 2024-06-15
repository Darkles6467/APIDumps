#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientUpdateItemQuantity_Parms
{
	char __padding[0x18L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventClientUpdateItemQuantity_Parms.itemID"); }
	int& ItemQuantityField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientUpdateItemQuantity_Parms.ItemQuantity"); }
};

