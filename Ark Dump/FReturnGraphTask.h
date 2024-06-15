#pragma once

#include "BaseDeclarations.h"
struct FReturnGraphTask
{
	char __padding[0x4L];
	ENamedThreads::Type& ThreadToReturnFromField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FReturnGraphTask.ThreadToReturnFrom"); }
};

