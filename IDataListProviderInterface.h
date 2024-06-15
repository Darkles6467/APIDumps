#pragma once

#include "BaseDeclarations.h"
struct IDataListProviderInterface
{
	char __padding[0x30L];
	TArray<FString>& CurrentFolderPathField() { return *GetNativePointerField<TArray<FString>*>(this, "IDataListProviderInterface.CurrentFolderPath"); }
	bool& bIgnoreFoldersField() { return *GetNativePointerField<bool*>(this, "IDataListProviderInterface.bIgnoreFolders"); }
	TArray<FString>& CustomFoldersField() { return *GetNativePointerField<TArray<FString>*>(this, "IDataListProviderInterface.CustomFolders"); }

	// Functions

	void GetDataListEntries(TArray<IDataListEntryInterface *> * OutDataListEntries, int DataListType, bool bCreateFolders, char FolderLevel, TArray<FString> * FoldersFound, UObject * ForObject, const wchar_t * CustomFolderFilter, char SortType, const wchar_t * NameFilter) { NativeCall<void, TArray<IDataListEntryInterface *> *, int, bool, char, TArray<FString> *, UObject *, const wchar_t *, char, const wchar_t *>(this, "IDataListProviderInterface.GetDataListEntries", OutDataListEntries, DataListType, bCreateFolders, FolderLevel, FoldersFound, ForObject, CustomFolderFilter, SortType, NameFilter); }
	bool GetEntryDefaultEnabled(IDataListEntryInterface * entryInterface) { return NativeCall<bool, IDataListEntryInterface *>(this, "IDataListProviderInterface.GetEntryDefaultEnabled", entryInterface); }
	FString * GetEntryDefaultTextOverride(FString * result, IDataListEntryInterface * entryInterface) { return NativeCall<FString *, FString *, IDataListEntryInterface *>(this, "IDataListProviderInterface.GetEntryDefaultTextOverride", result, entryInterface); }
	void SwapCustomFolder(FString CFolder1, FString CFolder2, int DataListType) { NativeCall<void, FString, FString, int>(this, "IDataListProviderInterface.SwapCustomFolder", CFolder1, CFolder2, DataListType); }
	void AddCustomFolder(FString CFolder, int InventoryCompType) { NativeCall<void, FString, int>(this, "IDataListProviderInterface.AddCustomFolder", CFolder, InventoryCompType); }
	void AddFolderFilter(FString filter) { NativeCall<void, FString>(this, "IDataListProviderInterface.AddFolderFilter", filter); }
	void BackFolderFilter() { NativeCall<void>(this, "IDataListProviderInterface.BackFolderFilter"); }
	void ClearCustomFolders() { NativeCall<void>(this, "IDataListProviderInterface.ClearCustomFolders"); }
	void DeleteItemFromCustomFolder(AShooterPlayerController * PC, FString CFolder, FItemNetID ItemId, int type) { NativeCall<void, AShooterPlayerController *, FString, FItemNetID, int>(this, "IDataListProviderInterface.DeleteItemFromCustomFolder", PC, CFolder, ItemId, type); }
	TArray<FString> * GetCustomFolders(TArray<FString> * result, int InventoryCompType) { return NativeCall<TArray<FString> *, TArray<FString> *, int>(this, "IDataListProviderInterface.GetCustomFolders", result, InventoryCompType); }
	void RemoveCustomFolder(AShooterPlayerController * PC, FString FolderName, int InventoryCompType) { NativeCall<void, AShooterPlayerController *, FString, int>(this, "IDataListProviderInterface.RemoveCustomFolder", PC, FolderName, InventoryCompType); }
	void IgnoreFolderFilter() { NativeCall<void>(this, "IDataListProviderInterface.IgnoreFolderFilter"); }
};

