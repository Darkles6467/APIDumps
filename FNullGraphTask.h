#pragma once

#include "BaseDeclarations.h"
#include "FCustomStatIDGraphTaskBase.h"

struct FNullGraphTask : FCustomStatIDGraphTaskBase
{
	char __padding[0x4L];
	ENamedThreads::Type& DesiredThreadField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FNullGraphTask.DesiredThread"); }
};

