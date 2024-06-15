#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOverrideMissionIndicatorString_Parms
{
	char __padding[0xd0L];
	AShooterCharacter * ForCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPOverrideMissionIndicatorString_Parms.ForCharacter"); }
	FMissionWorldIndicator& IndicatorField() { return *GetNativePointerField<FMissionWorldIndicator*>(this, "MissionType_eventBPOverrideMissionIndicatorString_Parms.Indicator"); }
	FString& StringField() { return *GetNativePointerField<FString*>(this, "MissionType_eventBPOverrideMissionIndicatorString_Parms.String"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "MissionType_eventBPOverrideMissionIndicatorString_Parms.ReturnValue"); }

	// Functions

};

