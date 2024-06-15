#pragma once

#include "BaseDeclarations.h"
struct FDistanceFieldCulledObjectBuffers
{
	char __padding[0xa8L];
	bool& bWantBoxBoundsField() { return *GetNativePointerField<bool*>(this, "FDistanceFieldCulledObjectBuffers.bWantBoxBounds"); }
	int& MaxObjectsField() { return *GetNativePointerField<int*>(this, "FDistanceFieldCulledObjectBuffers.MaxObjects"); }
	FRWBuffer& ObjectIndirectArgumentsField() { return *GetNativePointerField<FRWBuffer*>(this, "FDistanceFieldCulledObjectBuffers.ObjectIndirectArguments"); }
	FRWBuffer& ObjectIndirectDispatchField() { return *GetNativePointerField<FRWBuffer*>(this, "FDistanceFieldCulledObjectBuffers.ObjectIndirectDispatch"); }
	FRWBuffer& BoundsField() { return *GetNativePointerField<FRWBuffer*>(this, "FDistanceFieldCulledObjectBuffers.Bounds"); }
	FRWBuffer& DataField() { return *GetNativePointerField<FRWBuffer*>(this, "FDistanceFieldCulledObjectBuffers.Data"); }
	FRWBuffer& BoxBoundsField() { return *GetNativePointerField<FRWBuffer*>(this, "FDistanceFieldCulledObjectBuffers.BoxBounds"); }

	// Functions

	void Initialize() { NativeCall<void>(this, "FDistanceFieldCulledObjectBuffers.Initialize"); }
	void Release() { NativeCall<void>(this, "FDistanceFieldCulledObjectBuffers.Release"); }
};

