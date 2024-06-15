#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSendChatMessage_Parms
{
	char __padding[0x18L];
	FString& ChatMessageField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerSendChatMessage_Parms.ChatMessage"); }
	TEnumAsByte<enum EChatSendMode::Type>& SendModeField() { return *GetNativePointerField<TEnumAsByte<enum EChatSendMode::Type>*>(this, "ShooterPlayerController_eventServerSendChatMessage_Parms.SendMode"); }
};

