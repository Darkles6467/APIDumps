#pragma once

#include "BaseDeclarations.h"
#include "FCustomStatIDGraphTaskBase.h"

struct FFunctionGraphTask : FCustomStatIDGraphTaskBase
{
	char __padding[0x60L];
	const ENamedThreads::Type& DesiredThreadField() { return *GetNativePointerField<const ENamedThreads::Type*>(this, "FFunctionGraphTask.DesiredThread"); }
};

