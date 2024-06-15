#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct IShooterGameLoadingScreenModule : IModuleInterface
{
};

struct FShooterGameLoadingScreenModule : IShooterGameLoadingScreenModule
{

	// Functions

	void StartInGameLoadingScreen(const FString * Tooltip) { NativeCall<void, const FString *>(this, "FShooterGameLoadingScreenModule.StartInGameLoadingScreen", Tooltip); }
	void StartupModule() { NativeCall<void>(this, "FShooterGameLoadingScreenModule.StartupModule"); }
};

