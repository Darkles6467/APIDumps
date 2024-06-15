#pragma once

#include "BaseDeclarations.h"
struct FDistanceFieldCulledObjectBufferParameters
{
	char __padding[0x2eL];
	FRWShaderParameter& ObjectIndirectArgumentsField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FDistanceFieldCulledObjectBufferParameters.ObjectIndirectArguments"); }
	FRWShaderParameter& CulledObjectBoundsField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FDistanceFieldCulledObjectBufferParameters.CulledObjectBounds"); }
	FRWShaderParameter& CulledObjectDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FDistanceFieldCulledObjectBufferParameters.CulledObjectData"); }
	FRWShaderParameter& CulledObjectBoxBoundsField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FDistanceFieldCulledObjectBufferParameters.CulledObjectBoxBounds"); }

	// Functions

	void Bind(const FShaderParameterMap * ParameterMap) { NativeCall<void, const FShaderParameterMap *>(this, "FDistanceFieldCulledObjectBufferParameters.Bind", ParameterMap); }
	void GetUAVs(const FDistanceFieldCulledObjectBuffers * ObjectBuffers, TArray<FRHIUnorderedAccessView *> * UAVs) { NativeCall<void, const FDistanceFieldCulledObjectBuffers *, TArray<FRHIUnorderedAccessView *> *>(this, "FDistanceFieldCulledObjectBufferParameters.GetUAVs", ObjectBuffers, UAVs); }
};

