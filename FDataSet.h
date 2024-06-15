#pragma once

#include "BaseDeclarations.h"
struct FDataSet
{
	char __padding[0x78L];
	FName& DataSetNameField() { return *GetNativePointerField<FName*>(this, "FDataSet.DataSetName"); }
	TArray<FName>& ListNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FDataSet.ListNames"); }
	TArray<FString>& ListStringsField() { return *GetNativePointerField<TArray<FString>*>(this, "FDataSet.ListStrings"); }
	TArray<int>& ListIntsField() { return *GetNativePointerField<TArray<int>*>(this, "FDataSet.ListInts"); }
	TArray<float>& ListFloatsField() { return *GetNativePointerField<TArray<float>*>(this, "FDataSet.ListFloats"); }
	TArray<FDataSet>& ListChildDataSetsField() { return *GetNativePointerField<TArray<FDataSet>*>(this, "FDataSet.ListChildDataSets"); }

	// Functions

	FDataSet * operator=(const FDataSet * __that) { return NativeCall<FDataSet *, const FDataSet *>(this, "FDataSet.operator=", __that); }
};

