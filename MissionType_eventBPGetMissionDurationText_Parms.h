#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPGetMissionDurationText_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * ShootContField() { return GetNativePointerField<AShooterPlayerController *>(this, "MissionType_eventBPGetMissionDurationText_Parms.ShootCont"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "MissionType_eventBPGetMissionDurationText_Parms.ReturnValue"); }
};

