#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientServerChatMessage_Parms
{
	char __padding[0x28L];
	FString& MessageTextField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientServerChatMessage_Parms.MessageText"); }
	FLinearColor& MessageColorField() { return *GetNativePointerField<FLinearColor*>(this, "ShooterPlayerController_eventClientServerChatMessage_Parms.MessageColor"); }
	bool& bIsBoldField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientServerChatMessage_Parms.bIsBold"); }
};

