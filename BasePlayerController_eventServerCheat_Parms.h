#pragma once

#include "BaseDeclarations.h"
struct BasePlayerController_eventServerCheat_Parms
{
	char __padding[0x10L];
	FString& MsgField() { return *GetNativePointerField<FString*>(this, "BasePlayerController_eventServerCheat_Parms.Msg"); }
};

