#pragma once

#include "BaseDeclarations.h"
struct FStructRedirect
{
	char __padding[0x20L];
	FString& OldStructNameField() { return *GetNativePointerField<FString*>(this, "FStructRedirect.OldStructName"); }
	FString& NewStructNameField() { return *GetNativePointerField<FString*>(this, "FStructRedirect.NewStructName"); }

	// Functions

};

