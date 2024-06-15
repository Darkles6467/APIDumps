#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventRenamePlayer_Parms
{
	char __padding[0x10L];
	FString& NewNameField() { return *GetNativePointerField<FString*>(this, "ShooterCharacter_eventRenamePlayer_Parms.NewName"); }
};

