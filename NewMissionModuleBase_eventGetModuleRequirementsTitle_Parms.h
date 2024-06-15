#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventGetModuleRequirementsTitle_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "NewMissionModuleBase_eventGetModuleRequirementsTitle_Parms.ReturnValue"); }
};

