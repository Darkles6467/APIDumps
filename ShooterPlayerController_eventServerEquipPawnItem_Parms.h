#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerEquipPawnItem_Parms
{
	char __padding[0x8L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerEquipPawnItem_Parms.itemID"); }
};

