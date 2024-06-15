#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerTribeRequestAddRankGroup_Parms
{
	char __padding[0x10L];
	FString& GroupNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventServerTribeRequestAddRankGroup_Parms.GroupName"); }
};

