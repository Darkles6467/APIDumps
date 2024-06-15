#pragma once

#include "BaseDeclarations.h"
struct FEdge
{
	char __padding[0x1cL];
	FieldArray<FVector, 2> VertexField() { return {this, "FEdge.Vertex"}; }
	int& CountField() { return *GetNativePointerField<int*>(this, "FEdge.Count"); }
};

