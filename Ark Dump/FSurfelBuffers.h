#pragma once

#include "BaseDeclarations.h"
struct FSurfelBuffers
{
	char __padding[0x48L];
	int& MaxSurfelsField() { return *GetNativePointerField<int*>(this, "FSurfelBuffers.MaxSurfels"); }
	FRWBuffer& InterpolatedVertexDataField() { return *GetNativePointerField<FRWBuffer*>(this, "FSurfelBuffers.InterpolatedVertexData"); }
	FRWBuffer& SurfelsField() { return *GetNativePointerField<FRWBuffer*>(this, "FSurfelBuffers.Surfels"); }

	// Functions

	void Initialize() { NativeCall<void>(this, "FSurfelBuffers.Initialize"); }
};

