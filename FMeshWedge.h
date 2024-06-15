#pragma once

#include "BaseDeclarations.h"
struct FMeshWedge
{
	char __padding[0x28L];
	unsigned int& iVertexField() { return *GetNativePointerField<unsigned int*>(this, "FMeshWedge.iVertex"); }
	FieldArray<FVector2D[4], 24> UVsField() { return {this, "FMeshWedge.UVs"}; }
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FMeshWedge.Color"); }
};

