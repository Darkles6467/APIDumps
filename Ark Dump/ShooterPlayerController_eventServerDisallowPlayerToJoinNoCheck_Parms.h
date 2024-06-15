#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerDisallowPlayerToJoinNoCheck_Parms
{
	char __padding[0x10L];
	FString& PlayerIdField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerDisallowPlayerToJoinNoCheck_Parms.PlayerId"); }
};

