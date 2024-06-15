#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientReceiveActiveMissionTags_Parms
{
	char __padding[0x10L];
	TArray<FName>& MissionTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "ShooterPlayerController_eventClientReceiveActiveMissionTags_Parms.MissionTags"); }
};

