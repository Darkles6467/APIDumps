#pragma once

#include "BaseDeclarations.h"
struct FStartupPackages
{

	// Functions

	static void GetStartupPackageNames(TArray<FString> * PackageNames, const FString * EngineConfigFilename, bool bIsCreatingHashes) { NativeCall<void, TArray<FString> *, const FString *, bool>(nullptr, "FStartupPackages.GetStartupPackageNames", PackageNames, EngineConfigFilename, bIsCreatingHashes); }
	static bool LoadAll() { return NativeCall<bool>(nullptr, "FStartupPackages.LoadAll"); }
};

