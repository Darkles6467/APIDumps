#pragma once

#include "BaseDeclarations.h"
#include "FJsonValue.h"

struct FJsonValueArray : FJsonValue
{
	char __padding[0x10L];

	// Functions

	FString * GetType(FString * result) { return NativeCall<FString *, FString *>(this, "FJsonValueArray.GetType", result); }
};

