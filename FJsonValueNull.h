#pragma once

#include "BaseDeclarations.h"
#include "FJsonValue.h"

struct FJsonValueNull : FJsonValue
{

	// Functions

	FString * GetType(FString * result) { return NativeCall<FString *, FString *>(this, "FJsonValueNull.GetType", result); }
};

