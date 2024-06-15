#pragma once

#include "BaseDeclarations.h"
struct FStaticMeshComponentRecreateRenderStateContext
{
	char __padding[0x18L];
	bool& bUnbuildLightingField() { return *GetNativePointerField<bool*>(this, "FStaticMeshComponentRecreateRenderStateContext.bUnbuildLighting"); }
};

