#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventNotifyUniqueDinoDownloaded_Parms
{
	char __padding[0x10L];
	FString& TheDinoNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventNotifyUniqueDinoDownloaded_Parms.TheDinoName"); }
};

