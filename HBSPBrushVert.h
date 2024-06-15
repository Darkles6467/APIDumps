#pragma once

#include "BaseDeclarations.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HBSPBrushVert : HHitProxy
{
	char __padding[0x10L];
	FVector * VertexField() { return GetNativePointerField<FVector *>(this, "HBSPBrushVert.Vertex"); }
};

