#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct IHeadMountedDisplayModule : IModuleInterface
{

	// Functions

	static FName * GetModularFeatureName(FName * result) { return NativeCall<FName *, FName *>(nullptr, "IHeadMountedDisplayModule.GetModularFeatureName", result); }
	void StartupModule() { NativeCall<void>(this, "IHeadMountedDisplayModule.StartupModule"); }
};

