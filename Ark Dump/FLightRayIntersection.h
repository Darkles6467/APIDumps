#pragma once

#include "BaseDeclarations.h"
struct FLightRayIntersection
{
	char __padding[0x74L];
	FStaticLightingVertex& IntersectionVertexField() { return *GetNativePointerField<FStaticLightingVertex*>(this, "FLightRayIntersection.IntersectionVertex"); }
};

