#pragma once

#include "BaseDeclarations.h"
struct FHardwareInfo
{

	// Functions

	static const FString * GetHardwareDetailsString(const FString * result) { return NativeCall<const FString *, const FString *>(nullptr, "FHardwareInfo.GetHardwareDetailsString", result); }
	static void RegisterHardwareInfo(const FName SpecIdentifier, const FString * HardwareInfo) { NativeCall<void, const FName, const FString *>(nullptr, "FHardwareInfo.RegisterHardwareInfo", SpecIdentifier, HardwareInfo); }
};

