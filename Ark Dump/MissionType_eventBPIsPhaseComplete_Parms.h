#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPIsPhaseComplete_Parms
{
	char __padding[0xcL];
	FName& PhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventBPIsPhaseComplete_Parms.PhaseName"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPIsPhaseComplete_Parms.ReturnValue"); }

	// Functions

};

