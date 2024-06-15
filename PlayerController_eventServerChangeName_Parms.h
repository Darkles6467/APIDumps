#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventServerChangeName_Parms
{
	char __padding[0x10L];
	FString& SField() { return *GetNativePointerField<FString*>(this, "PlayerController_eventServerChangeName_Parms.S"); }
};

