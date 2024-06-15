#pragma once

#include "BaseDeclarations.h"
struct FTaggedString
{
	char __padding[0x18L];
	FName& TagField() { return *GetNativePointerField<FName*>(this, "FTaggedString.Tag"); }
	FString& StringField() { return *GetNativePointerField<FString*>(this, "FTaggedString.String"); }

	// Functions

};

