#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct IAnalyticsProviderModule : IModuleInterface
{
};

struct FAnalyticsET : IAnalyticsProviderModule
{

	// Functions

	void Config() { NativeCall<void>(this, "FAnalyticsET.Config"); }
	static FString * Config(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FAnalyticsET.Config", result); }
	static FString * Config(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FAnalyticsET.Config", result); }
	static FString * Config(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FAnalyticsET.Config", result); }
	static FString * Config(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FAnalyticsET.Config", result); }
	void StartupModule() { NativeCall<void>(this, "FAnalyticsET.StartupModule"); }
};

