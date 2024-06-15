#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformOutputDevices
{

	// Functions

	static FString * GetAbsoluteLogFilename(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FGenericPlatformOutputDevices.GetAbsoluteLogFilename", result); }
};

struct FWindowsPlatformOutputDevices : FGenericPlatformOutputDevices
{

	// Functions

};

