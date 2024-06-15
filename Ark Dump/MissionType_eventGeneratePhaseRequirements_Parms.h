#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventGeneratePhaseRequirements_Parms
{
	char __padding[0x18L];
	FName& PhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventGeneratePhaseRequirements_Parms.PhaseName"); }
	TArray<FMissionPhaseRequirement>& RequirementsField() { return *GetNativePointerField<TArray<FMissionPhaseRequirement>*>(this, "MissionType_eventGeneratePhaseRequirements_Parms.Requirements"); }
};

