#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientServerChatDirectMessage_Parms
{
	char __padding[0x28L];
	FString& MessageTextField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientServerChatDirectMessage_Parms.MessageText"); }
	FLinearColor& MessageColorField() { return *GetNativePointerField<FLinearColor*>(this, "ShooterPlayerController_eventClientServerChatDirectMessage_Parms.MessageColor"); }
	bool& bIsBoldField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientServerChatDirectMessage_Parms.bIsBold"); }
};

