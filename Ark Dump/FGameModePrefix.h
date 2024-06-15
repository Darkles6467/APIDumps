#pragma once

#include "BaseDeclarations.h"
struct FGameModePrefix
{
	char __padding[0x20L];
	FString& PrefixField() { return *GetNativePointerField<FString*>(this, "FGameModePrefix.Prefix"); }
	FString& GameModeField() { return *GetNativePointerField<FString*>(this, "FGameModePrefix.GameMode"); }

	// Functions

};

