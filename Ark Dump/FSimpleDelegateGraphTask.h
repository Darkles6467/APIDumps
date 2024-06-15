#pragma once

#include "BaseDeclarations.h"
#include "FCustomStatIDGraphTaskBase.h"

struct FSimpleDelegateGraphTask : FCustomStatIDGraphTaskBase
{
	char __padding[0x10L];
	const ENamedThreads::Type& DesiredThreadField() { return *GetNativePointerField<const ENamedThreads::Type*>(this, "FSimpleDelegateGraphTask.DesiredThread"); }

	// Functions

};

