#pragma once

#include "BaseDeclarations.h"
struct FGameNameRedirect
{
	char __padding[0x20L];
	FString& OldGameNameField() { return *GetNativePointerField<FString*>(this, "FGameNameRedirect.OldGameName"); }
	FString& NewGameNameField() { return *GetNativePointerField<FString*>(this, "FGameNameRedirect.NewGameName"); }

	// Functions

};

