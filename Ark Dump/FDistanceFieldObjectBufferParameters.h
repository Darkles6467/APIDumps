#pragma once

#include "BaseDeclarations.h"
struct FDistanceFieldObjectBufferParameters
{
	char __padding[0x24L];
	FRWShaderParameter& ObjectBoundsField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FDistanceFieldObjectBufferParameters.ObjectBounds"); }
	FRWShaderParameter& ObjectDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FDistanceFieldObjectBufferParameters.ObjectData"); }

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FDistanceFieldObjectBufferParameters.Bind", ParameterMap); }
};

