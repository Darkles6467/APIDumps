#pragma once

#include "BaseDeclarations.h"
struct FApp
{

	// Functions

	static bool HasGameName() { return NativeCall<bool>(nullptr, "FApp.HasGameName"); }
	static bool IsUnattended() { return NativeCall<bool>(nullptr, "FApp.IsUnattended"); }
	static FString * GetBuildDate(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FApp.GetBuildDate", result); }
	static bool IsEngineInstalled() { return NativeCall<bool>(nullptr, "FApp.IsEngineInstalled"); }
	static bool IsInstalled() { return NativeCall<bool>(nullptr, "FApp.IsInstalled"); }
	static bool ShouldUseThreadingForPerformance() { return NativeCall<bool>(nullptr, "FApp.ShouldUseThreadingForPerformance"); }
	static FString * GetSessionOwner(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FApp.GetSessionOwner", result); }
	static bool UseFixedTimeStep() { return NativeCall<bool>(nullptr, "FApp.UseFixedTimeStep"); }
	static FString * GetInstanceName(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FApp.GetInstanceName", result); }
	static FString * GetSessionName(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FApp.GetSessionName", result); }
};

