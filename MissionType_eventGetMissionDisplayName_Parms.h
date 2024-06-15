#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventGetMissionDisplayName_Parms
{
	char __padding[0x18L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "MissionType_eventGetMissionDisplayName_Parms.ReturnValue"); }
};

