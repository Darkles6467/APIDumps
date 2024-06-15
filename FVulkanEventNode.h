#pragma once

#include "BaseDeclarations.h"
#include "FGPUProfilerEventNode.h"
#include "FGPUProfilerEventNodeStats.h"
#include "FRefCountedObject.h"

struct FVulkanEventNode : FGPUProfilerEventNode
{
	char __padding[0x1a0L];
	FVulkanGPUTiming& TimingField() { return *GetNativePointerField<FVulkanGPUTiming*>(this, "FVulkanEventNode.Timing"); }

	// Functions

	float GetTiming() { return NativeCall<float>(this, "FVulkanEventNode.GetTiming"); }
	void StartTiming() { NativeCall<void>(this, "FVulkanEventNode.StartTiming"); }
	void StopTiming() { NativeCall<void>(this, "FVulkanEventNode.StopTiming"); }
};

