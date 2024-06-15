#pragma once

#include "BaseDeclarations.h"
struct FFoliageInstanceCluster_Deprecated
{
	char __padding[0x28L];
	FBoxSphereBounds& BoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "FFoliageInstanceCluster_Deprecated.Bounds"); }
};

