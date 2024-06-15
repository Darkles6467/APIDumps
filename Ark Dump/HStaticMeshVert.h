#pragma once

#include "BaseDeclarations.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HStaticMeshVert : HHitProxy
{
	char __padding[0x18L];
	FVector& VertexField() { return *GetNativePointerField<FVector*>(this, "HStaticMeshVert.Vertex"); }
};

