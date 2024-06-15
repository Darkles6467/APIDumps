#pragma once

#include "BaseDeclarations.h"
struct FTraceHandle
{
	char __padding[0xcL];
	unsigned int& FrameNumberField() { return *GetNativePointerField<unsigned int*>(this, "FTraceHandle.FrameNumber"); }
	unsigned int& IndexField() { return *GetNativePointerField<unsigned int*>(this, "FTraceHandle.Index"); }
	unsigned int& IDField() { return *GetNativePointerField<unsigned int*>(this, "FTraceHandle.ID"); }
};

