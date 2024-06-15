#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventOnServerNotification_Parms
{
	char __padding[0x18L];
	FString& MessageTextField() { return *GetNativePointerField<FString*>(this, "ShooterGameMode_eventOnServerNotification_Parms.MessageText"); }
	int& ReceiverTeamIdField() { return *GetNativePointerField<int*>(this, "ShooterGameMode_eventOnServerNotification_Parms.ReceiverTeamId"); }
	int& ReceiverPlayerIDField() { return *GetNativePointerField<int*>(this, "ShooterGameMode_eventOnServerNotification_Parms.ReceiverPlayerID"); }
};

