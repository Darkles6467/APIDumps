#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventNotifyUniqueDinoDownloadAllowed_Parms
{
	char __padding[0x10L];
	FString& TheDinoNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventNotifyUniqueDinoDownloadAllowed_Parms.TheDinoName"); }
};

