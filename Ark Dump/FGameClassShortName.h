#pragma once

#include "BaseDeclarations.h"
struct FGameClassShortName
{
	char __padding[0x20L];
	FString& ShortNameField() { return *GetNativePointerField<FString*>(this, "FGameClassShortName.ShortName"); }
	FString& GameClassNameField() { return *GetNativePointerField<FString*>(this, "FGameClassShortName.GameClassName"); }

	// Functions

};

