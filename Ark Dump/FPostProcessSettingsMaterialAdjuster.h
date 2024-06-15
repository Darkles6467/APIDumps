#pragma once

#include "BaseDeclarations.h"
struct FPostProcessSettingsMaterialAdjuster
{
	char __padding[0x50L];
	UMaterialParameterCollection * MaterialParamCollectonField() { return GetNativePointerField<UMaterialParameterCollection *>(this, "FPostProcessSettingsMaterialAdjuster.MaterialParamCollecton"); }
	TArray<FName>& ScalarParameterNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FPostProcessSettingsMaterialAdjuster.ScalarParameterNames"); }
	TArray<float>& ScalarParameterValuesField() { return *GetNativePointerField<TArray<float>*>(this, "FPostProcessSettingsMaterialAdjuster.ScalarParameterValues"); }
	TArray<FName>& VectorParameterNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FPostProcessSettingsMaterialAdjuster.VectorParameterNames"); }
	TArray<FVector>& VectorParameterValuesField() { return *GetNativePointerField<TArray<FVector>*>(this, "FPostProcessSettingsMaterialAdjuster.VectorParameterValues"); }

	// Functions

};

