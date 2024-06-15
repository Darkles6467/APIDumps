#pragma once

#include "BaseDeclarations.h"
#include "FDefaultModuleImpl.h"
#include "IModuleInterface.h"

struct FCoreUObjectModule : FDefaultModuleImpl
{

	// Functions

	void StartupModule() { NativeCall<void>(this, "FCoreUObjectModule.StartupModule"); }
};

