#pragma once

#include "BaseDeclarations.h"
struct FLoadWrapper
{

	// Functions

	static void AsyncLoadCallbackWrapper(const FString * PackageName, UPackage * InPackage) { NativeCall<void, const FString *, UPackage *>(nullptr, "FLoadWrapper.AsyncLoadCallbackWrapper", PackageName, InPackage); }
};

