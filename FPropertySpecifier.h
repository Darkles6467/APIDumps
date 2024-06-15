#pragma once

#include "BaseDeclarations.h"
struct FPropertySpecifier
{
	char __padding[0x20L];
	FString& KeyField() { return *GetNativePointerField<FString*>(this, "FPropertySpecifier.Key"); }
	TArray<FString>& ValuesField() { return *GetNativePointerField<TArray<FString>*>(this, "FPropertySpecifier.Values"); }
};

