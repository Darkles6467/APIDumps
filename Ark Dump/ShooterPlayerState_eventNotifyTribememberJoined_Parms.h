#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventNotifyTribememberJoined_Parms
{
	char __padding[0x10L];
	FString& ThePlayerNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventNotifyTribememberJoined_Parms.ThePlayerName"); }
};

