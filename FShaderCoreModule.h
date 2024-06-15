#pragma once

#include "BaseDeclarations.h"
#include "FDefaultModuleImpl.h"
#include "IModuleInterface.h"

struct FShaderCoreModule : FDefaultModuleImpl
{

	// Functions

	void StartupModule() { NativeCall<void>(this, "FShaderCoreModule.StartupModule"); }
};

