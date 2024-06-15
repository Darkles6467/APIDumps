#pragma once

#include "BaseDeclarations.h"
struct FUniformMeshBuffers
{
	char __padding[0x58L];
	int& MaxElementsField() { return *GetNativePointerField<int*>(this, "FUniformMeshBuffers.MaxElements"); }
	FRWBuffer& TriangleAreasField() { return *GetNativePointerField<FRWBuffer*>(this, "FUniformMeshBuffers.TriangleAreas"); }
	FRWBuffer& TriangleCDFsField() { return *GetNativePointerField<FRWBuffer*>(this, "FUniformMeshBuffers.TriangleCDFs"); }

	// Functions

	void Initialize() { NativeCall<void>(this, "FUniformMeshBuffers.Initialize"); }
};

