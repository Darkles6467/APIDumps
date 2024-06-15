#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerSetDinoGroupName_Parms
{
	char __padding[0x18L];
	int& groupIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerSetDinoGroupName_Parms.groupIndex"); }
	FString& GroupNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventServerSetDinoGroupName_Parms.GroupName"); }
};

