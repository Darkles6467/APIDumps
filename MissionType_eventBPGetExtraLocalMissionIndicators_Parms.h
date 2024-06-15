#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPGetExtraLocalMissionIndicators_Parms
{
	char __padding[0x30L];
	AShooterCharacter * PlayerPawnField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPGetExtraLocalMissionIndicators_Parms.PlayerPawn"); }
	TArray<FMissionWorldIndicator>& IndicatorsInField() { return *GetNativePointerField<TArray<FMissionWorldIndicator>*>(this, "MissionType_eventBPGetExtraLocalMissionIndicators_Parms.IndicatorsIn"); }
	TArray<FMissionWorldIndicator>& IndicatorsOutField() { return *GetNativePointerField<TArray<FMissionWorldIndicator>*>(this, "MissionType_eventBPGetExtraLocalMissionIndicators_Parms.IndicatorsOut"); }

	// Functions

};

