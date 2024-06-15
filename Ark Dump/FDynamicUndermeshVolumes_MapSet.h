#pragma once

#include "BaseDeclarations.h"
struct FDynamicUndermeshVolumes_MapSet
{
	char __padding[0x20L];
	FString& mapField() { return *GetNativePointerField<FString*>(this, "FDynamicUndermeshVolumes_MapSet.map"); }
	TArray<FDynamicUndermeshVolumes_Data>& volumesField() { return *GetNativePointerField<TArray<FDynamicUndermeshVolumes_Data>*>(this, "FDynamicUndermeshVolumes_MapSet.volumes"); }

	// Functions

	FDynamicUndermeshVolumes_MapSet * operator=(const FDynamicUndermeshVolumes_MapSet * __that) { return NativeCall<FDynamicUndermeshVolumes_MapSet *, const FDynamicUndermeshVolumes_MapSet *>(this, "FDynamicUndermeshVolumes_MapSet.operator=", __that); }
};

