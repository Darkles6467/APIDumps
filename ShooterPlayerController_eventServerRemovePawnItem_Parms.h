#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRemovePawnItem_Parms
{
	char __padding[0xcL];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerRemovePawnItem_Parms.itemID"); }
	bool& bSecondryActionField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerRemovePawnItem_Parms.bSecondryAction"); }
};

