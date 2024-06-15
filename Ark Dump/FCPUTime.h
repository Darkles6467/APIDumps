#pragma once

#include "BaseDeclarations.h"
struct FCPUTime
{
	char __padding[0x8L];
	float& CPUTimePctField() { return *GetNativePointerField<float*>(this, "FCPUTime.CPUTimePct"); }
	float& CPUTimePctRelativeField() { return *GetNativePointerField<float*>(this, "FCPUTime.CPUTimePctRelative"); }
};

