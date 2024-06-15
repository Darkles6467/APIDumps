#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"
#include "FObjectImport.h"
#include "FObjectExport.h"
#include "FPackageDependencyData.h"

struct FAssetDataGatherer : FRunnable
{
	char __padding[0x1c8L];
	FWindowsCriticalSection& WorkerThreadCriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FAssetDataGatherer.WorkerThreadCriticalSection"); }
	TArray<FString>& FilesToSearchField() { return *GetNativePointerField<TArray<FString>*>(this, "FAssetDataGatherer.FilesToSearch"); }
	FThreadSafeCounter& StopTaskCounterField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FAssetDataGatherer.StopTaskCounter"); }
	bool& bIsSynchronousField() { return *GetNativePointerField<bool*>(this, "FAssetDataGatherer.bIsSynchronous"); }
	long double& SearchStartTimeField() { return *GetNativePointerField<long double*>(this, "FAssetDataGatherer.SearchStartTime"); }
	TArray<FString>& PathsToSearchField() { return *GetNativePointerField<TArray<FString>*>(this, "FAssetDataGatherer.PathsToSearch"); }
	TArray<FBackgroundAssetData *>& AssetResultsField() { return *GetNativePointerField<TArray<FBackgroundAssetData *>*>(this, "FAssetDataGatherer.AssetResults"); }
	TArray<FPackageDependencyData>& DependencyResultsField() { return *GetNativePointerField<TArray<FPackageDependencyData>*>(this, "FAssetDataGatherer.DependencyResults"); }
	TArray<double>& SearchTimesField() { return *GetNativePointerField<TArray<double>*>(this, "FAssetDataGatherer.SearchTimes"); }
	TArray<FString>& DiscoveredPathsField() { return *GetNativePointerField<TArray<FString>*>(this, "FAssetDataGatherer.DiscoveredPaths"); }
	bool& bGatherDependsDataField() { return *GetNativePointerField<bool*>(this, "FAssetDataGatherer.bGatherDependsData"); }
	bool& bLoadAndSaveCacheField() { return *GetNativePointerField<bool*>(this, "FAssetDataGatherer.bLoadAndSaveCache"); }
	bool& bSavedCacheAfterInitialDiscoveryField() { return *GetNativePointerField<bool*>(this, "FAssetDataGatherer.bSavedCacheAfterInitialDiscovery"); }
	FString& CacheFilenameField() { return *GetNativePointerField<FString*>(this, "FAssetDataGatherer.CacheFilename"); }
	FDiskCachedAssetData * DiskCachedAssetDataBufferField() { return GetNativePointerField<FDiskCachedAssetData *>(this, "FAssetDataGatherer.DiskCachedAssetDataBuffer"); }
	TArray<FDiskCachedAssetData *>& NewCachedAssetDataField() { return *GetNativePointerField<TArray<FDiskCachedAssetData *>*>(this, "FAssetDataGatherer.NewCachedAssetData"); }

	// Functions

	FBackgroundAssetData * CreateAssetDataFromCookedPackage(const FString * AssetFilename, unsigned int InPackageFlags, FPackageReader * PackageReader) { return NativeCall<FBackgroundAssetData *, const FString *, unsigned int, FPackageReader *>(this, "FAssetDataGatherer.CreateAssetDataFromCookedPackage", AssetFilename, InPackageFlags, PackageReader); }
	FBackgroundAssetData * CreateAssetDataFromLinkerTables(const FString * AssetFilename, unsigned int InPackageFlags, const FObjectExport * AssetExport, const TArray<FObjectImport> * ImportMap, const TArray<FObjectExport> * ExportMap) { return NativeCall<FBackgroundAssetData *, const FString *, unsigned int, const FObjectExport *, const TArray<FObjectImport> *, const TArray<FObjectExport> *>(this, "FAssetDataGatherer.CreateAssetDataFromLinkerTables", AssetFilename, InPackageFlags, AssetExport, ImportMap, ExportMap); }
	void DiscoverFilesToSearch() { NativeCall<void>(this, "FAssetDataGatherer.DiscoverFilesToSearch"); }
	void EnsureCompletion() { NativeCall<void>(this, "FAssetDataGatherer.EnsureCompletion"); }
	bool GetAndTrimSearchResults(TArray<FBackgroundAssetData *> * OutAssetResults, TArray<FString> * OutPathResults, TArray<FPackageDependencyData> * OutDependencyResults, TArray<double> * OutSearchTimes, int * OutNumFilesToSearch) { return NativeCall<bool, TArray<FBackgroundAssetData *> *, TArray<FString> *, TArray<FPackageDependencyData> *, TArray<double> *, int *>(this, "FAssetDataGatherer.GetAndTrimSearchResults", OutAssetResults, OutPathResults, OutDependencyResults, OutSearchTimes, OutNumFilesToSearch); }
	bool IsValidPackageFileToRead(const FString * Filename) { return NativeCall<bool, const FString *>(this, "FAssetDataGatherer.IsValidPackageFileToRead", Filename); }
	void PrioritizeSearchPath(const FString * PathToPrioritize) { NativeCall<void, const FString *>(this, "FAssetDataGatherer.PrioritizeSearchPath", PathToPrioritize); }
	bool ReadAssetFile(const FString * AssetFilename, TArray<FBackgroundAssetData *> * AssetDataList, FPackageDependencyData * DependencyData) { return NativeCall<bool, const FString *, TArray<FBackgroundAssetData *> *, FPackageDependencyData *>(this, "FAssetDataGatherer.ReadAssetFile", AssetFilename, AssetDataList, DependencyData); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FAssetDataGatherer.Run"); }
	void SerializeCache(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FAssetDataGatherer.SerializeCache", Ar); }
	void Stop() { NativeCall<void>(this, "FAssetDataGatherer.Stop"); }
};

