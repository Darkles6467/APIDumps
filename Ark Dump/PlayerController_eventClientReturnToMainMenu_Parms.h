#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientReturnToMainMenu_Parms
{
	char __padding[0x10L];
	FString& ReturnReasonField() { return *GetNativePointerField<FString*>(this, "PlayerController_eventClientReturnToMainMenu_Parms.ReturnReason"); }
};

