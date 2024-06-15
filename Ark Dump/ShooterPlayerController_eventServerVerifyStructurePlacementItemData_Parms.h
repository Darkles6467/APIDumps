#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerVerifyStructurePlacementItemData_Parms
{
	char __padding[0x8L];
	FItemNetID& PlaceUsingItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerVerifyStructurePlacementItemData_Parms.PlaceUsingItemID"); }
};

