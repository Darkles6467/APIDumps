#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventClientGetAllPlayerNamesAndLocations_Parms
{
	char __padding[0x10L];
	TArray<FAliveNameAndLocation>& listField() { return *GetNativePointerField<TArray<FAliveNameAndLocation>*>(this, "ShooterPlayerState_eventClientGetAllPlayerNamesAndLocations_Parms.list"); }
};

