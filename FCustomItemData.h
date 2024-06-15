#pragma once

#include "BaseDeclarations.h"
struct FCustomItemData
{
	char __padding[0x78L];
	FName& CustomDataNameField() { return *GetNativePointerField<FName*>(this, "FCustomItemData.CustomDataName"); }
	TArray<FString>& CustomDataStringsField() { return *GetNativePointerField<TArray<FString>*>(this, "FCustomItemData.CustomDataStrings"); }
	TArray<float>& CustomDataFloatsField() { return *GetNativePointerField<TArray<float>*>(this, "FCustomItemData.CustomDataFloats"); }
	TArray<FName>& CustomDataNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FCustomItemData.CustomDataNames"); }
	FCustomItemByteArrays& CustomDataBytesField() { return *GetNativePointerField<FCustomItemByteArrays*>(this, "FCustomItemData.CustomDataBytes"); }
	FCustomItemDoubles& CustomDataDoublesField() { return *GetNativePointerField<FCustomItemDoubles*>(this, "FCustomItemData.CustomDataDoubles"); }

	// Functions

	FCustomItemData * operator=(const FCustomItemData * __that) { return NativeCall<FCustomItemData *, const FCustomItemData *>(this, "FCustomItemData.operator=", __that); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCustomItemData.Serialize", Ar); }
};

