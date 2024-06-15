#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientRemoveItemFromArk_Parms
{
	char __padding[0x10L];
	FItemNetID& RemovedItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventClientRemoveItemFromArk_Parms.RemovedItemID"); }
};

