#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventOnUpdateRequirements_Parms
{
	char __padding[0x18L];
	FName& PhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventOnUpdateRequirements_Parms.PhaseName"); }
	TArray<FMissionPhaseRequirement>& NewRequirementsField() { return *GetNativePointerField<TArray<FMissionPhaseRequirement>*>(this, "MissionType_eventOnUpdateRequirements_Parms.NewRequirements"); }

	// Functions

};

