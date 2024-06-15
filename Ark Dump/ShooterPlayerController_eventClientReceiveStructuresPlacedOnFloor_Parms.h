#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientReceiveStructuresPlacedOnFloor_Parms
{
	char __padding[0x10L];
	TArray<FStructuresOnFloor>& StructuresField() { return *GetNativePointerField<TArray<FStructuresOnFloor>*>(this, "ShooterPlayerController_eventClientReceiveStructuresPlacedOnFloor_Parms.Structures"); }
};

