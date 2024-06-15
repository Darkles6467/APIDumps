#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventCanStartPhase_Parms
{
	char __padding[0xcL];
	FName& PhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventCanStartPhase_Parms.PhaseName"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventCanStartPhase_Parms.ReturnValue"); }
};

