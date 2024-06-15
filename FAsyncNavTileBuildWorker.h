#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct FAsyncNavTileBuildWorker : FNonAbandonableTask
{
	char __padding[0x18L];
	const int& TileIdField() { return *GetNativePointerField<const int*>(this, "FAsyncNavTileBuildWorker.TileId"); }
	const unsigned int& VersionField() { return *GetNativePointerField<const unsigned int*>(this, "FAsyncNavTileBuildWorker.Version"); }
};

