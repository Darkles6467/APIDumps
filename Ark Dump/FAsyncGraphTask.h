#pragma once

#include "BaseDeclarations.h"
struct FAsyncGraphTaskBase
{
};

struct FAsyncGraphTask : FAsyncGraphTaskBase
{
	char __padding[0x60L];
	ENamedThreads::Type& DesiredThreadField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FAsyncGraphTask.DesiredThread"); }
};

