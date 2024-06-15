#pragma once

#include "BaseDeclarations.h"
struct FBroadcastTask
{
	char __padding[0x70L];
	const ENamedThreads::Type& DesiredThreadField() { return *GetNativePointerField<const ENamedThreads::Type*>(this, "FBroadcastTask.DesiredThread"); }
	FThreadSafeCounter * StallForTaskThreadField() { return GetNativePointerField<FThreadSafeCounter *>(this, "FBroadcastTask.StallForTaskThread"); }
};

