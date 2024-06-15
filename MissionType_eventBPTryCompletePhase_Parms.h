#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPTryCompletePhase_Parms
{
	char __padding[0xcL];
	FName& PhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventBPTryCompletePhase_Parms.PhaseName"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPTryCompletePhase_Parms.ReturnValue"); }
};

