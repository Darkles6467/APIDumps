#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UKismetMaterialLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static float GetScalarParameterValue(UObject * WorldContextObject, UMaterialParameterCollection * Collection, FName ParameterName) { return NativeCall<float, UObject *, UMaterialParameterCollection *, FName>(nullptr, "UKismetMaterialLibrary.GetScalarParameterValue", WorldContextObject, Collection, ParameterName); }
	static FLinearColor * GetVectorParameterValue(FLinearColor * result, UObject * WorldContextObject, UMaterialParameterCollection * Collection, FName ParameterName) { return NativeCall<FLinearColor *, FLinearColor *, UObject *, UMaterialParameterCollection *, FName>(nullptr, "UKismetMaterialLibrary.GetVectorParameterValue", result, WorldContextObject, Collection, ParameterName); }
	static void ResetMaterialParameterCollectionInstance(UObject * WorldContextObject, UMaterialParameterCollection * Collection) { NativeCall<void, UObject *, UMaterialParameterCollection *>(nullptr, "UKismetMaterialLibrary.ResetMaterialParameterCollectionInstance", WorldContextObject, Collection); }
	static void SetScalarParameterValue(UObject * WorldContextObject, UMaterialParameterCollection * Collection, FName ParameterName, float ParameterValue) { NativeCall<void, UObject *, UMaterialParameterCollection *, FName, float>(nullptr, "UKismetMaterialLibrary.SetScalarParameterValue", WorldContextObject, Collection, ParameterName, ParameterValue); }
	static void SetVectorParameterValue(UObject * WorldContextObject, UMaterialParameterCollection * Collection, FName ParameterName, const FLinearColor * ParameterValue) { NativeCall<void, UObject *, UMaterialParameterCollection *, FName, const FLinearColor *>(nullptr, "UKismetMaterialLibrary.SetVectorParameterValue", WorldContextObject, Collection, ParameterName, ParameterValue); }
};

