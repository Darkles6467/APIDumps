#pragma once

#include "BaseDeclarations.h"
struct FCustomMeshTriangle
{
	char __padding[0x24L];
	FVector& Vertex0Field() { return *GetNativePointerField<FVector*>(this, "FCustomMeshTriangle.Vertex0"); }
	FVector& Vertex1Field() { return *GetNativePointerField<FVector*>(this, "FCustomMeshTriangle.Vertex1"); }
	FVector& Vertex2Field() { return *GetNativePointerField<FVector*>(this, "FCustomMeshTriangle.Vertex2"); }

	// Functions

};

