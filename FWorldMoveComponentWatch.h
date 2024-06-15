#pragma once

#include "BaseDeclarations.h"
struct FWorldMoveComponentWatch
{
	char __padding[0x20L];
	FVector& WorldStartField() { return *GetNativePointerField<FVector*>(this, "FWorldMoveComponentWatch.WorldStart"); }
	bool& bWatchingField() { return *GetNativePointerField<bool*>(this, "FWorldMoveComponentWatch.bWatching"); }
};

