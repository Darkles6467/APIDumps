#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientUpdateItemDurability_Parms
{
	char __padding[0x18L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventClientUpdateItemDurability_Parms.itemID"); }
	float& ItemDurabilityField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientUpdateItemDurability_Parms.ItemDurability"); }
};

