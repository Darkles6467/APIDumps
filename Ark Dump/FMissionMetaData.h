#pragma once

#include "BaseDeclarations.h"
struct FMissionMetaData
{
	char __padding[0x10L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "FMissionMetaData.MissionTag"); }

	// Functions

};

