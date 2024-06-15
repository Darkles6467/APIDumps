#pragma once

#include "BaseDeclarations.h"
struct FCopySceneColorAndRestoreRenderThreadTask
{
	char __padding[0x18L];
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FCopySceneColorAndRestoreRenderThreadTask.View"); }
};

