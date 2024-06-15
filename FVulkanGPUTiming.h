#pragma once

#include "BaseDeclarations.h"
struct FGPUTiming
{
};

struct FVulkanGPUTiming : FGPUTiming
{
	char __padding[0x1a0L];
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanGPUTiming.Device"); }
	bool& bIsTimingField() { return *GetNativePointerField<bool*>(this, "FVulkanGPUTiming.bIsTiming"); }
	bool& bEndTimestampIssuedField() { return *GetNativePointerField<bool*>(this, "FVulkanGPUTiming.bEndTimestampIssued"); }
	int& CurrentTimerIndexField() { return *GetNativePointerField<int*>(this, "FVulkanGPUTiming.CurrentTimerIndex"); }
	int& NumActiveTimersField() { return *GetNativePointerField<int*>(this, "FVulkanGPUTiming.NumActiveTimers"); }
	FieldArray<FVulkanGPUTiming::FBeginEndPair, 8> TimersField() { return {this, "FVulkanGPUTiming.Timers"}; }

	// Functions

	void EndTiming(FVulkanCmdBuffer * CmdBuffer) { NativeCall<void, FVulkanCmdBuffer *>(this, "FVulkanGPUTiming.EndTiming", CmdBuffer); }
	unsigned __int64 GetTiming(bool bGetCurrentResultsAndBlock) { return NativeCall<unsigned __int64, bool>(this, "FVulkanGPUTiming.GetTiming", bGetCurrentResultsAndBlock); }
	void Initialize() { NativeCall<void>(this, "FVulkanGPUTiming.Initialize"); }
	static void PlatformStaticInitialize(void * UserData) { NativeCall<void, void *>(nullptr, "FVulkanGPUTiming.PlatformStaticInitialize", UserData); }
	void Release() { NativeCall<void>(this, "FVulkanGPUTiming.Release"); }
	void StartTiming(FVulkanCmdBuffer * CmdBuffer) { NativeCall<void, FVulkanCmdBuffer *>(this, "FVulkanGPUTiming.StartTiming", CmdBuffer); }
};

