#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientWasKicked_Parms
{
	char __padding[0x28L];
	FText& KickReasonField() { return *GetNativePointerField<FText*>(this, "PlayerController_eventClientWasKicked_Parms.KickReason"); }
};

