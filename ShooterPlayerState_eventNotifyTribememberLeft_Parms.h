#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventNotifyTribememberLeft_Parms
{
	char __padding[0x10L];
	FString& ThePlayerNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventNotifyTribememberLeft_Parms.ThePlayerName"); }
};

