#pragma once

#include "BaseDeclarations.h"
struct FGPUProfilerEventNodeFrame
{
	char __padding[0x18L];

	// Functions

	void DumpEventTree() { NativeCall<void>(this, "FGPUProfilerEventNodeFrame.DumpEventTree"); }
};

