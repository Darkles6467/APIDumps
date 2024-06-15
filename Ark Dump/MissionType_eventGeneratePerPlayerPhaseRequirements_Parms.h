#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventGeneratePerPlayerPhaseRequirements_Parms
{
	char __padding[0x28L];
	AShooterPlayerController * ControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "MissionType_eventGeneratePerPlayerPhaseRequirements_Parms.Controller"); }
	AShooterCharacter * CharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventGeneratePerPlayerPhaseRequirements_Parms.Character"); }
	FName& PhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventGeneratePerPlayerPhaseRequirements_Parms.PhaseName"); }
	TArray<FMissionPhaseRequirement>& RequirementsField() { return *GetNativePointerField<TArray<FMissionPhaseRequirement>*>(this, "MissionType_eventGeneratePerPlayerPhaseRequirements_Parms.Requirements"); }

	// Functions

};

