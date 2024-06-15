#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct INetworkingModule : IModuleInterface
{
};

struct FNetworkingModule : INetworkingModule
{

	// Functions

	void StartupModule() { NativeCall<void>(this, "FNetworkingModule.StartupModule"); }
};

