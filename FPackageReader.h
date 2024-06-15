#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"
#include "FObjectExport.h"
#include "FObjectImport.h"

struct FPackageReader : FArchiveUObject
{
	char __padding[0x148L];
	FString& PackageFilenameField() { return *GetNativePointerField<FString*>(this, "FPackageReader.PackageFilename"); }
	FPackageFileSummary& PackageFileSummaryField() { return *GetNativePointerField<FPackageFileSummary*>(this, "FPackageReader.PackageFileSummary"); }
	TArray<FName>& NameMapField() { return *GetNativePointerField<TArray<FName>*>(this, "FPackageReader.NameMap"); }

	// Functions

	bool OpenPackageFile(const FString * InPackageFilename) { return NativeCall<bool, const FString *>(this, "FPackageReader.OpenPackageFile", InPackageFilename); }
	bool Precache(__int64 PrecacheOffset, __int64 PrecacheSize) { return NativeCall<bool, __int64, __int64>(this, "FPackageReader.Precache", PrecacheOffset, PrecacheSize); }
	bool ReadAssetDataFromThumbnailCache(TArray<FBackgroundAssetData *> * AssetDataList) { return NativeCall<bool, TArray<FBackgroundAssetData *> *>(this, "FPackageReader.ReadAssetDataFromThumbnailCache", AssetDataList); }
	bool ReadAssetRegistryData(TArray<FBackgroundAssetData *> * AssetDataList) { return NativeCall<bool, TArray<FBackgroundAssetData *> *>(this, "FPackageReader.ReadAssetRegistryData", AssetDataList); }
	bool ReadDependencyData(FPackageDependencyData * OutDependencyData) { return NativeCall<bool, FPackageDependencyData *>(this, "FPackageReader.ReadDependencyData", OutDependencyData); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "FPackageReader.Seek", InPos); }
	void Serialize(void * V, __int64 Length) { NativeCall<void, void *, __int64>(this, "FPackageReader.Serialize", V, Length); }
	void SerializeExportMap(TArray<FObjectExport> * OutExportMap) { NativeCall<void, TArray<FObjectExport> *>(this, "FPackageReader.SerializeExportMap", OutExportMap); }
	void SerializeImportMap(TArray<FObjectImport> * OutImportMap) { NativeCall<void, TArray<FObjectImport> *>(this, "FPackageReader.SerializeImportMap", OutImportMap); }
	void SerializeNameMap() { NativeCall<void>(this, "FPackageReader.SerializeNameMap"); }
	void SerializeStringAssetReferencesMap(TArray<FString> * OutStringAssetReferencesMap) { NativeCall<void, TArray<FString> *>(this, "FPackageReader.SerializeStringAssetReferencesMap", OutStringAssetReferencesMap); }
	__int64 Tell() { return NativeCall<__int64>(this, "FPackageReader.Tell"); }
	__int64 TotalSize() { return NativeCall<__int64>(this, "FPackageReader.TotalSize"); }
};

