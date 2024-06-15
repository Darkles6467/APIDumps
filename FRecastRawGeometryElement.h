#pragma once

#include "BaseDeclarations.h"
struct FRecastRawGeometryElement
{
	char __padding[0x30L];
	TNavStatArray<float>& GeomCoordsField() { return *GetNativePointerField<TNavStatArray<float>*>(this, "FRecastRawGeometryElement.GeomCoords"); }
	TNavStatArray<int>& GeomIndicesField() { return *GetNativePointerField<TNavStatArray<int>*>(this, "FRecastRawGeometryElement.GeomIndices"); }
	TArray<FTransform>& PerInstanceTransformField() { return *GetNativePointerField<TArray<FTransform>*>(this, "FRecastRawGeometryElement.PerInstanceTransform"); }
};

