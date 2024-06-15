#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct IScriptPlugin : IModuleInterface
{
};

struct FScriptPlugin : IScriptPlugin
{

	// Functions

	void ShutdownModule() { NativeCall<void>(this, "FScriptPlugin.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FScriptPlugin.StartupModule"); }
};

