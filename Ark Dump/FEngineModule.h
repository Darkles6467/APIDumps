#pragma once

#include "BaseDeclarations.h"
#include "FDefaultModuleImpl.h"
#include "IModuleInterface.h"

struct FEngineModule : FDefaultModuleImpl
{

	// Functions

	void StartupModule() { NativeCall<void>(this, "FEngineModule.StartupModule"); }
};

