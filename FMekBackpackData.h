#pragma once

#include "BaseDeclarations.h"
struct FMekBackpackData
{
	char __padding[0x58L];
	FName& BackpackTypeField() { return *GetNativePointerField<FName*>(this, "FMekBackpackData.BackpackType"); }
	TArray<bool>& BoolDataField() { return *GetNativePointerField<TArray<bool>*>(this, "FMekBackpackData.BoolData"); }
	TArray<float>& FloatDataField() { return *GetNativePointerField<TArray<float>*>(this, "FMekBackpackData.FloatData"); }
	TArray<double>& TimeDataField() { return *GetNativePointerField<TArray<double>*>(this, "FMekBackpackData.TimeData"); }
	TArray<FVector>& VectorDataField() { return *GetNativePointerField<TArray<FVector>*>(this, "FMekBackpackData.VectorData"); }
	TArray<FString>& StringDataField() { return *GetNativePointerField<TArray<FString>*>(this, "FMekBackpackData.StringData"); }

	// Functions

	FMekBackpackData * operator=(const FMekBackpackData * __that) { return NativeCall<FMekBackpackData *, const FMekBackpackData *>(this, "FMekBackpackData.operator=", __that); }
};

