#pragma once

#include "BaseDeclarations.h"
struct FCPUTimeDump
{
	char __padding[0x20L];
	TArray<FCPUTime>& CPUTimesField() { return *GetNativePointerField<TArray<FCPUTime>*>(this, "FCPUTimeDump.CPUTimes"); }

	// Functions

	void ExecuteCommand(const TArray<FString> * Args) { NativeCall<void, const TArray<FString> *>(this, "FCPUTimeDump.ExecuteCommand", Args); }
	static FCPUTimeDump * Get() { return NativeCall<FCPUTimeDump *>(nullptr, "FCPUTimeDump.Get"); }
	bool OnAddCPUTime(float __formal) { return NativeCall<bool, float>(this, "FCPUTimeDump.OnAddCPUTime", __formal); }
	bool OnCPUTimeDump(float __formal) { return NativeCall<bool, float>(this, "FCPUTimeDump.OnCPUTimeDump", __formal); }
};

