#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientGotoState_Parms
{
	char __padding[0x8L];
	FName& NewStateField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventClientGotoState_Parms.NewState"); }
};

