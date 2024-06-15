#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FWindowsMoviePlayerModule : IModuleInterface
{

	// Functions

	void ShutdownModule() { NativeCall<void>(this, "FWindowsMoviePlayerModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FWindowsMoviePlayerModule.StartupModule"); }
};

