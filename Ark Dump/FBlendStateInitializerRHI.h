#pragma once

#include "BaseDeclarations.h"
struct FBlendStateInitializerRHI
{
	char __padding[0x39L];
	bool& bUseIndependentRenderTargetBlendStatesField() { return *GetNativePointerField<bool*>(this, "FBlendStateInitializerRHI.bUseIndependentRenderTargetBlendStates"); }
};

