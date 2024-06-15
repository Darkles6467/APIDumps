#pragma once

#include "BaseDeclarations.h"
struct FSceneRenderTargetItem
{
	char __padding[0x28L];

	// Functions

	FSceneRenderTargetItem * operator=(const FSceneRenderTargetItem * __that) { return NativeCall<FSceneRenderTargetItem *, const FSceneRenderTargetItem *>(this, "FSceneRenderTargetItem.operator=", __that); }
};

