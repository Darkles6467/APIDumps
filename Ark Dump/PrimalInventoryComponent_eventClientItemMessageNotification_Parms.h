#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventClientItemMessageNotification_Parms
{
	char __padding[0xcL];
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "PrimalInventoryComponent_eventClientItemMessageNotification_Parms.ItemID"); }
	TEnumAsByte<enum EPrimalItemMessage::Type>& ItemMessageTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalItemMessage::Type>*>(this, "PrimalInventoryComponent_eventClientItemMessageNotification_Parms.ItemMessageType"); }
};

