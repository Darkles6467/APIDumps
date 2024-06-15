#pragma once

#include "BaseDeclarations.h"
struct FLastRenderTimeContainer
{
	char __padding[0x8L];
	long double& LastRenderTimeField() { return *GetNativePointerField<long double*>(this, "FLastRenderTimeContainer.LastRenderTime"); }
};

