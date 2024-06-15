#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventGetModuleRequirementsMessage_Parms
{
	char __padding[0x10L];
	TArray<FMissionPhaseRequirement>& ReturnValueField() { return *GetNativePointerField<TArray<FMissionPhaseRequirement>*>(this, "NewMissionModuleBase_eventGetModuleRequirementsMessage_Parms.ReturnValue"); }
};

