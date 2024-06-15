#pragma once

#include "BaseDeclarations.h"
struct FEnvQueryContextData
{
	char __padding[0x20L];
	TSubclassOf<UEnvQueryItemType>& ValueTypeField() { return *GetNativePointerField<TSubclassOf<UEnvQueryItemType>*>(this, "FEnvQueryContextData.ValueType"); }
	int& NumValuesField() { return *GetNativePointerField<int*>(this, "FEnvQueryContextData.NumValues"); }
	TArray<unsigned char>& RawDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FEnvQueryContextData.RawData"); }

	// Functions

	FEnvQueryContextData * operator=(const FEnvQueryContextData * __that) { return NativeCall<FEnvQueryContextData *, const FEnvQueryContextData *>(this, "FEnvQueryContextData.operator=", __that); }
};

