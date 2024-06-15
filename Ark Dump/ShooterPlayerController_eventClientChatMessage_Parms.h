#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientChatMessage_Parms
{
	char __padding[0x90L];
	FChatMessage& ChatField() { return *GetNativePointerField<FChatMessage*>(this, "ShooterPlayerController_eventClientChatMessage_Parms.Chat"); }
};

