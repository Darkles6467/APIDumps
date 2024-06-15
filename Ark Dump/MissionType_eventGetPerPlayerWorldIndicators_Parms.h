#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventGetPerPlayerWorldIndicators_Parms
{
	char __padding[0x20L];
	AShooterPlayerController * ControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "MissionType_eventGetPerPlayerWorldIndicators_Parms.Controller"); }
	AShooterCharacter * CharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventGetPerPlayerWorldIndicators_Parms.Character"); }
	TArray<FMissionWorldIndicator>& WorldIndicatorsField() { return *GetNativePointerField<TArray<FMissionWorldIndicator>*>(this, "MissionType_eventGetPerPlayerWorldIndicators_Parms.WorldIndicators"); }
};

