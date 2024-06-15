#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct IPlatformFeaturesModule : IModuleInterface
{

	// Functions

	static IPlatformFeaturesModule * Get() { return NativeCall<IPlatformFeaturesModule *>(nullptr, "IPlatformFeaturesModule.Get"); }
};

