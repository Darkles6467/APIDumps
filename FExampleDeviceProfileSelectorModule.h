#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct IDeviceProfileSelectorModule : IModuleInterface
{
};

struct FExampleDeviceProfileSelectorModule : IDeviceProfileSelectorModule
{

	// Functions

	const FString * GetRuntimeDeviceProfileName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "FExampleDeviceProfileSelectorModule.GetRuntimeDeviceProfileName", result); }
};

