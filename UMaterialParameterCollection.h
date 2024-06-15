#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialParameterCollection : UObject
{
	char __padding[0x38L];
	FGuid& StateIdField() { return *GetNativePointerField<FGuid*>(this, "UMaterialParameterCollection.StateId"); }
	TArray<FCollectionScalarParameter>& ScalarParametersField() { return *GetNativePointerField<TArray<FCollectionScalarParameter>*>(this, "UMaterialParameterCollection.ScalarParameters"); }
	TArray<FCollectionVectorParameter>& VectorParametersField() { return *GetNativePointerField<TArray<FCollectionVectorParameter>*>(this, "UMaterialParameterCollection.VectorParameters"); }
	TScopedPointer<FUniformBufferStruct>& UniformBufferStructField() { return *GetNativePointerField<TScopedPointer<FUniformBufferStruct>*>(this, "UMaterialParameterCollection.UniformBufferStruct"); }

	// Functions

	void CreateBufferStruct() { NativeCall<void>(this, "UMaterialParameterCollection.CreateBufferStruct"); }
	void GetParameterIndex(const FGuid * Id, int * OutIndex, int * OutComponentIndex) { NativeCall<void, const FGuid *, int *, int *>(this, "UMaterialParameterCollection.GetParameterIndex", Id, OutIndex, OutComponentIndex); }
	FName * GetParameterName(FName * result, const FGuid * Id) { return NativeCall<FName *, FName *, const FGuid *>(this, "UMaterialParameterCollection.GetParameterName", result, Id); }
	void PostLoad() { NativeCall<void>(this, "UMaterialParameterCollection.PostLoad"); }
};

