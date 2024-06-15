#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPGetPhaseDisplayText_Parms
{
	char __padding[0x18L];
	FName& PhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventBPGetPhaseDisplayText_Parms.PhaseName"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "MissionType_eventBPGetPhaseDisplayText_Parms.ReturnValue"); }

	// Functions

};

