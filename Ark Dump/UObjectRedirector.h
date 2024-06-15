#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UObjectRedirector : UObject
{
	char __padding[0x8L];

	// Functions

	void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag> * OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag> *>(this, "UObjectRedirector.GetAssetRegistryTags", OutTags); }
	bool GetNativePropertyValues(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,FString,0> > * out_PropertyValues, unsigned int ExportFlags) { return NativeCall<bool, TMap<FString,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,FString,0> > *, unsigned int>(this, "UObjectRedirector.GetNativePropertyValues", out_PropertyValues, ExportFlags); }
	void PreSave() { NativeCall<void>(this, "UObjectRedirector.PreSave"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UObjectRedirector.Serialize", Ar); }
};

