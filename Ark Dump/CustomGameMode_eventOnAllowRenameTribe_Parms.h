#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnAllowRenameTribe_Parms
{
	char __padding[0x20L];
	AShooterPlayerState * ForPlayerStateField() { return GetNativePointerField<AShooterPlayerState *>(this, "CustomGameMode_eventOnAllowRenameTribe_Parms.ForPlayerState"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "CustomGameMode_eventOnAllowRenameTribe_Parms.TribeName"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnAllowRenameTribe_Parms.ReturnValue"); }
};

