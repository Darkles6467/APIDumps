#pragma once

#include "BaseDeclarations.h"
#include "FDefaultModuleImpl.h"
#include "IModuleInterface.h"

struct FDefaultGameModuleImpl : FDefaultModuleImpl
{
};

struct FShooterGameModule : FDefaultGameModuleImpl
{

	// Functions

	void StartupModule() { NativeCall<void>(this, "FShooterGameModule.StartupModule"); }
};

