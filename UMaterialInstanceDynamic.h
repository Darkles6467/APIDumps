#pragma once

#include "BaseDeclarations.h"
#include "UMaterialInstance.h"
#include "UMaterialInterface.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialInstanceDynamic : UMaterialInstance
{

	// Functions

	void CopyParameterOverrides(UMaterialInstance * MaterialInstance) { NativeCall<void, UMaterialInstance *>(this, "UMaterialInstanceDynamic.CopyParameterOverrides", MaterialInstance); }
	void K2_CopyMaterialInstanceParameters(UMaterialInterface * SourceMaterialToCopyFrom) { NativeCall<void, UMaterialInterface *>(this, "UMaterialInstanceDynamic.K2_CopyMaterialInstanceParameters", SourceMaterialToCopyFrom); }
	float K2_GetScalarParameterValue(FName ParameterName) { return NativeCall<float, FName>(this, "UMaterialInstanceDynamic.K2_GetScalarParameterValue", ParameterName); }
	FLinearColor * K2_GetVectorParameterValue(FLinearColor * result, FName ParameterName) { return NativeCall<FLinearColor *, FLinearColor *, FName>(this, "UMaterialInstanceDynamic.K2_GetVectorParameterValue", result, ParameterName); }
	void K2_InterpolateMaterialInstanceParams(UMaterialInstance * MaterialA, UMaterialInstance * MaterialB, float Alpha) { NativeCall<void, UMaterialInstance *, UMaterialInstance *, float>(this, "UMaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams", MaterialA, MaterialB, Alpha); }
	void SetScalarParameterValue(FName ParameterName, float Value) { NativeCall<void, FName, float>(this, "UMaterialInstanceDynamic.SetScalarParameterValue", ParameterName, Value); }
	void SetTextureParameterValue(FName ParameterName, UTexture * Value) { NativeCall<void, FName, UTexture *>(this, "UMaterialInstanceDynamic.SetTextureParameterValue", ParameterName, Value); }
	void SetVectorParameterValue(FName ParameterName, FLinearColor Value) { NativeCall<void, FName, FLinearColor>(this, "UMaterialInstanceDynamic.SetVectorParameterValue", ParameterName, Value); }
};

