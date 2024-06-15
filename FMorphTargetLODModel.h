#pragma once

#include "BaseDeclarations.h"
struct FMorphTargetLODModel
{
	char __padding[0x18L];
	TArray<FVertexAnimDelta>& VerticesField() { return *GetNativePointerField<TArray<FVertexAnimDelta>*>(this, "FMorphTargetLODModel.Vertices"); }
	int& NumBaseMeshVertsField() { return *GetNativePointerField<int*>(this, "FMorphTargetLODModel.NumBaseMeshVerts"); }
};

