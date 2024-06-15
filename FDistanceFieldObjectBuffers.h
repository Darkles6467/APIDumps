#pragma once

#include "BaseDeclarations.h"
struct FDistanceFieldObjectBuffers
{
	char __padding[0x48L];
	int& MaxObjectsField() { return *GetNativePointerField<int*>(this, "FDistanceFieldObjectBuffers.MaxObjects"); }
	FRWBuffer& BoundsField() { return *GetNativePointerField<FRWBuffer*>(this, "FDistanceFieldObjectBuffers.Bounds"); }
	FRWBuffer& DataField() { return *GetNativePointerField<FRWBuffer*>(this, "FDistanceFieldObjectBuffers.Data"); }

	// Functions

	void Initialize() { NativeCall<void>(this, "FDistanceFieldObjectBuffers.Initialize"); }
	void Release() { NativeCall<void>(this, "FDistanceFieldObjectBuffers.Release"); }
};

