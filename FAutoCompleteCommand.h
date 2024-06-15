#pragma once

#include "BaseDeclarations.h"
struct FAutoCompleteCommand
{
	char __padding[0x20L];
	FString& CommandField() { return *GetNativePointerField<FString*>(this, "FAutoCompleteCommand.Command"); }
	FString& DescField() { return *GetNativePointerField<FString*>(this, "FAutoCompleteCommand.Desc"); }

	// Functions

};

