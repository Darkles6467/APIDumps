#pragma once

#include "BaseDeclarations.h"
struct IRHICommandContextContainer
{
	char __padding[0x8L];

	// Functions

};

struct FVulkanCommandContextContainer : IRHICommandContextContainer
{
	char __padding[0x10L];

	// Functions

	void FinishContext() { NativeCall<void>(this, "FVulkanCommandContextContainer.FinishContext"); }
	void SubmitAndFreeContextContainer(int Index, int Num) { NativeCall<void, int, int>(this, "FVulkanCommandContextContainer.SubmitAndFreeContextContainer", Index, Num); }
};

