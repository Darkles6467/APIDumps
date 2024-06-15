#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct ISettingsModule : IModuleInterface
{

	// Functions

	static ISettingsModule * Get() { return NativeCall<ISettingsModule *>(nullptr, "ISettingsModule.Get"); }
};

