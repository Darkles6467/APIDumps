#pragma once

#include "BaseDeclarations.h"
struct FPostProcessMaterialAdjuster
{
	char __padding[0x48L];
	TArray<FName>& ScalarParameterNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FPostProcessMaterialAdjuster.ScalarParameterNames"); }
	TArray<float>& ScalarParameterValuesField() { return *GetNativePointerField<TArray<float>*>(this, "FPostProcessMaterialAdjuster.ScalarParameterValues"); }
	TArray<FName>& VectorParameterNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FPostProcessMaterialAdjuster.VectorParameterNames"); }
	TArray<FVector>& VectorParameterValuesField() { return *GetNativePointerField<TArray<FVector>*>(this, "FPostProcessMaterialAdjuster.VectorParameterValues"); }

	// Functions

	FPostProcessMaterialAdjuster * operator=(const FPostProcessMaterialAdjuster * __that) { return NativeCall<FPostProcessMaterialAdjuster *, const FPostProcessMaterialAdjuster *>(this, "FPostProcessMaterialAdjuster.operator=", __that); }
};

