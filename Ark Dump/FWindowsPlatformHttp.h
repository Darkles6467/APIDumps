#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformHttp
{

	// Functions

	static FString * UrlEncode(FString * result, const FString * UnencodedString) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FGenericPlatformHttp.UrlEncode", result, UnencodedString); }
};

struct FWindowsPlatformHttp : FGenericPlatformHttp
{

	// Functions

};

