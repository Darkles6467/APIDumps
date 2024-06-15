#pragma once

#include "BaseDeclarations.h"
struct IDataListEntryInterface
{
	char __padding[0x28L];
	TArray<FString>& CustomFoldersNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "IDataListEntryInterface.CustomFoldersNames"); }
	TArray<FString>& ItemFolderPathField() { return *GetNativePointerField<TArray<FString>*>(this, "IDataListEntryInterface.ItemFolderPath"); }

	// Functions

	FString * GetEntryDescription(FString * result) { return NativeCall<FString *, FString *>(this, "IDataListEntryInterface.GetEntryDescription", result); }
	FString * GetEntryString(FString * result) { return NativeCall<FString *, FString *>(this, "IDataListEntryInterface.GetEntryString", result); }
	int GetExplicitEntryIndexType(bool bGetBaseValue) { return NativeCall<int, bool>(this, "IDataListEntryInterface.GetExplicitEntryIndexType", bGetBaseValue); }
	void AddCustomFolder(FString CFolder) { NativeCall<void, FString>(this, "IDataListEntryInterface.AddCustomFolder", CFolder); }
	void ClearCustomFolder() { NativeCall<void>(this, "IDataListEntryInterface.ClearCustomFolder"); }
	void DeleteCustomFolder(FString CFolder) { NativeCall<void, FString>(this, "IDataListEntryInterface.DeleteCustomFolder", CFolder); }
	TArray<FString> * GetCustomFolders(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "IDataListEntryInterface.GetCustomFolders", result); }
	TArray<FString> * GetFolderPath(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "IDataListEntryInterface.GetFolderPath", result); }
};

