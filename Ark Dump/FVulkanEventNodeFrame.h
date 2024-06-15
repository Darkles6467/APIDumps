#pragma once

#include "BaseDeclarations.h"
#include "FGPUProfilerEventNodeFrame.h"

struct FVulkanEventNodeFrame : FGPUProfilerEventNodeFrame
{
	char __padding[0x1a0L];
	FVulkanGPUTiming& RootEventTimingField() { return *GetNativePointerField<FVulkanGPUTiming*>(this, "FVulkanEventNodeFrame.RootEventTiming"); }

	// Functions

	void EndFrame() { NativeCall<void>(this, "FVulkanEventNodeFrame.EndFrame"); }
	float GetRootTimingResults() { return NativeCall<float>(this, "FVulkanEventNodeFrame.GetRootTimingResults"); }
	void StartFrame() { NativeCall<void>(this, "FVulkanEventNodeFrame.StartFrame"); }
};

