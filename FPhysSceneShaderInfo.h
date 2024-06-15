#pragma once

#include "BaseDeclarations.h"
struct FPhysSceneShaderInfo
{
	char __padding[0x8L];
	FPhysScene * PhysSceneField() { return GetNativePointerField<FPhysScene *>(this, "FPhysSceneShaderInfo.PhysScene"); }
};

