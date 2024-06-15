#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialParameterCollectionInstance : UObject
{
	char __padding[0xc0L];
	bool& bLoggedMissingParameterWarningField() { return *GetNativePointerField<bool*>(this, "UMaterialParameterCollectionInstance.bLoggedMissingParameterWarning"); }
	UMaterialParameterCollection * CollectionField() { return GetNativePointerField<UMaterialParameterCollection *>(this, "UMaterialParameterCollectionInstance.Collection"); }
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "UMaterialParameterCollectionInstance.World"); }

	// Functions

	void FinishDestroy() { NativeCall<void>(this, "UMaterialParameterCollectionInstance.FinishDestroy"); }
	void GetParameterData(TArray<FVector4> * ParameterData) { NativeCall<void, TArray<FVector4> *>(this, "UMaterialParameterCollectionInstance.GetParameterData", ParameterData); }
	bool GetScalarParameterValue(FName ParameterName, float * OutParameterValue) { return NativeCall<bool, FName, float *>(this, "UMaterialParameterCollectionInstance.GetScalarParameterValue", ParameterName, OutParameterValue); }
	bool GetVectorParameterValue(FName ParameterName, FLinearColor * OutParameterValue) { return NativeCall<bool, FName, FLinearColor *>(this, "UMaterialParameterCollectionInstance.GetVectorParameterValue", ParameterName, OutParameterValue); }
	void PostInitProperties() { NativeCall<void>(this, "UMaterialParameterCollectionInstance.PostInitProperties"); }
	void SetCollection(UMaterialParameterCollection * InCollection, UWorld * InWorld) { NativeCall<void, UMaterialParameterCollection *, UWorld *>(this, "UMaterialParameterCollectionInstance.SetCollection", InCollection, InWorld); }
	bool SetScalarParameterValue(FName ParameterName, float ParameterValue) { return NativeCall<bool, FName, float>(this, "UMaterialParameterCollectionInstance.SetScalarParameterValue", ParameterName, ParameterValue); }
	bool SetVectorParameterValue(FName ParameterName, const FLinearColor * ParameterValue) { return NativeCall<bool, FName, const FLinearColor *>(this, "UMaterialParameterCollectionInstance.SetVectorParameterValue", ParameterName, ParameterValue); }
	void UpdateRenderState() { NativeCall<void>(this, "UMaterialParameterCollectionInstance.UpdateRenderState"); }
};

