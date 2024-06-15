#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FSlateLoadingThreadTask : FRunnable
{
	char __padding[0x8L];
	FSlateLoadingSynchronizationMechanism * SyncMechanismField() { return GetNativePointerField<FSlateLoadingSynchronizationMechanism *>(this, "FSlateLoadingThreadTask.SyncMechanism"); }
};

