#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FAssetData.h"

struct UObjectLibrary : UObject
{
	char __padding[0x48L];
	bool& bHasBlueprintClassesField() { return *GetNativePointerField<bool*>(this, "UObjectLibrary.bHasBlueprintClasses"); }
	bool& bUseWeakReferencesField() { return *GetNativePointerField<bool*>(this, "UObjectLibrary.bUseWeakReferences"); }
	bool& bIsFullyLoadedField() { return *GetNativePointerField<bool*>(this, "UObjectLibrary.bIsFullyLoaded"); }
	TArray<FAssetData>& AssetDataListField() { return *GetNativePointerField<TArray<FAssetData>*>(this, "UObjectLibrary.AssetDataList"); }

	// Functions

	bool AddObject(UObject * NewObject) { return NativeCall<bool, UObject *>(this, "UObjectLibrary.AddObject", NewObject); }
	void ClearLoaded() { NativeCall<void>(this, "UObjectLibrary.ClearLoaded"); }
	void GetAssetDataList(TArray<FAssetData> * OutAssetData) { NativeCall<void, TArray<FAssetData> *>(this, "UObjectLibrary.GetAssetDataList", OutAssetData); }
	int LoadAssetDataFromPath(const FString * Path) { return NativeCall<int, const FString *>(this, "UObjectLibrary.LoadAssetDataFromPath", Path); }
	int LoadAssetDataFromPaths(TArray<FString> Paths) { return NativeCall<int, TArray<FString>>(this, "UObjectLibrary.LoadAssetDataFromPaths", Paths); }
	int LoadAssetsFromAssetData() { return NativeCall<int>(this, "UObjectLibrary.LoadAssetsFromAssetData"); }
	int LoadAssetsFromPath(const FString * Path) { return NativeCall<int, const FString *>(this, "UObjectLibrary.LoadAssetsFromPath", Path); }
	int LoadAssetsFromPaths(TArray<FString> Paths) { return NativeCall<int, TArray<FString>>(this, "UObjectLibrary.LoadAssetsFromPaths", Paths); }
	int LoadBlueprintAssetDataFromPath(const FString * Path) { return NativeCall<int, const FString *>(this, "UObjectLibrary.LoadBlueprintAssetDataFromPath", Path); }
	int LoadBlueprintAssetDataFromPaths(TArray<FString> Paths) { return NativeCall<int, TArray<FString>>(this, "UObjectLibrary.LoadBlueprintAssetDataFromPaths", Paths); }
	int LoadBlueprintsFromPath(const FString * Path) { return NativeCall<int, const FString *>(this, "UObjectLibrary.LoadBlueprintsFromPath", Path); }
	int LoadBlueprintsFromPaths(TArray<FString> Paths) { return NativeCall<int, TArray<FString>>(this, "UObjectLibrary.LoadBlueprintsFromPaths", Paths); }
	bool RemoveObject(UObject * ObjectToRemove) { return NativeCall<bool, UObject *>(this, "UObjectLibrary.RemoveObject", ObjectToRemove); }
	void UseWeakReferences(bool bSetUseWeak) { NativeCall<void, bool>(this, "UObjectLibrary.UseWeakReferences", bSetUseWeak); }
};

