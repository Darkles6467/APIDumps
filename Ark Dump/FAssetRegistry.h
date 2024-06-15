#pragma once

#include "BaseDeclarations.h"
#include "FPackageDependencyData.h"
#include "FAssetData.h"

struct IAssetRegistry
{
	char __padding[0x8L];

	// Functions

};

struct FAssetRegistry : IAssetRegistry
{
	char __padding[0x4d8L];
	FPathTreeNode& PathTreeRootField() { return *GetNativePointerField<FPathTreeNode*>(this, "FAssetRegistry.PathTreeRoot"); }
	TSharedPtr<FAssetDataGatherer,0>& BackgroundAssetSearchField() { return *GetNativePointerField<TSharedPtr<FAssetDataGatherer,0>*>(this, "FAssetRegistry.BackgroundAssetSearch"); }
	TArray<FBackgroundAssetData *>& BackgroundAssetResultsField() { return *GetNativePointerField<TArray<FBackgroundAssetData *>*>(this, "FAssetRegistry.BackgroundAssetResults"); }
	TArray<FString>& BackgroundPathResultsField() { return *GetNativePointerField<TArray<FString>*>(this, "FAssetRegistry.BackgroundPathResults"); }
	TArray<FPackageDependencyData>& BackgroundDependencyResultsField() { return *GetNativePointerField<TArray<FPackageDependencyData>*>(this, "FAssetRegistry.BackgroundDependencyResults"); }
	float& MaxSecondsPerFrameField() { return *GetNativePointerField<float*>(this, "FAssetRegistry.MaxSecondsPerFrame"); }
	FAssetRegistry::FPathAddedEvent& PathAddedEventField() { return *GetNativePointerField<FAssetRegistry::FPathAddedEvent*>(this, "FAssetRegistry.PathAddedEvent"); }
	FAssetRegistry::FPathRemovedEvent& PathRemovedEventField() { return *GetNativePointerField<FAssetRegistry::FPathRemovedEvent*>(this, "FAssetRegistry.PathRemovedEvent"); }
	FAssetRegistry::FAssetAddedEvent& AssetAddedEventField() { return *GetNativePointerField<FAssetRegistry::FAssetAddedEvent*>(this, "FAssetRegistry.AssetAddedEvent"); }
	FAssetRegistry::FAssetRemovedEvent& AssetRemovedEventField() { return *GetNativePointerField<FAssetRegistry::FAssetRemovedEvent*>(this, "FAssetRegistry.AssetRemovedEvent"); }
	FAssetRegistry::FAssetRenamedEvent& AssetRenamedEventField() { return *GetNativePointerField<FAssetRegistry::FAssetRenamedEvent*>(this, "FAssetRegistry.AssetRenamedEvent"); }
	FAssetRegistry::FInMemoryAssetCreatedEvent& InMemoryAssetCreatedEventField() { return *GetNativePointerField<FAssetRegistry::FInMemoryAssetCreatedEvent*>(this, "FAssetRegistry.InMemoryAssetCreatedEvent"); }
	FAssetRegistry::FInMemoryAssetDeletedEvent& InMemoryAssetDeletedEventField() { return *GetNativePointerField<FAssetRegistry::FInMemoryAssetDeletedEvent*>(this, "FAssetRegistry.InMemoryAssetDeletedEvent"); }
	FAssetRegistry::FFilesLoadedEvent& FileLoadedEventField() { return *GetNativePointerField<FAssetRegistry::FFilesLoadedEvent*>(this, "FAssetRegistry.FileLoadedEvent"); }
	FAssetRegistry::FFileLoadProgressUpdatedEvent& FileLoadProgressUpdatedEventField() { return *GetNativePointerField<FAssetRegistry::FFileLoadProgressUpdatedEvent*>(this, "FAssetRegistry.FileLoadProgressUpdatedEvent"); }
	int& NumAssetsField() { return *GetNativePointerField<int*>(this, "FAssetRegistry.NumAssets"); }
	int& NumDependsNodesField() { return *GetNativePointerField<int*>(this, "FAssetRegistry.NumDependsNodes"); }
	long double& FullSearchStartTimeField() { return *GetNativePointerField<long double*>(this, "FAssetRegistry.FullSearchStartTime"); }
	long double& AmortizeStartTimeField() { return *GetNativePointerField<long double*>(this, "FAssetRegistry.AmortizeStartTime"); }
	long double& TotalAmortizeTimeField() { return *GetNativePointerField<long double*>(this, "FAssetRegistry.TotalAmortizeTime"); }
	bool& bGatherDependsDataField() { return *GetNativePointerField<bool*>(this, "FAssetRegistry.bGatherDependsData"); }
	bool& bInitialSearchCompletedField() { return *GetNativePointerField<bool*>(this, "FAssetRegistry.bInitialSearchCompleted"); }
	FAssetData * PreallocatedAssetDataBufferField() { return GetNativePointerField<FAssetData *>(this, "FAssetRegistry.PreallocatedAssetDataBuffer"); }

	// Functions

	const FTabId * OnAssetRenamed() { return NativeCall<const FTabId *>(this, "FAssetRegistry.OnAssetRenamed"); }
	void AddAssetData(FAssetData * AssetData) { NativeCall<void, FAssetData *>(this, "FAssetRegistry.AddAssetData", AssetData); }
	bool AddPath(const FString * PathToAdd) { return NativeCall<bool, const FString *>(this, "FAssetRegistry.AddPath", PathToAdd); }
	void AssetCreated(UObject * NewAsset) { NativeCall<void, UObject *>(this, "FAssetRegistry.AssetCreated", NewAsset); }
	void AssetDeleted(UObject * DeletedAsset) { NativeCall<void, UObject *>(this, "FAssetRegistry.AssetDeleted", DeletedAsset); }
	void AssetRenamed(UObject * RenamedAsset, const FString * OldObjectPath) { NativeCall<void, UObject *, const FString *>(this, "FAssetRegistry.AssetRenamed", RenamedAsset, OldObjectPath); }
	void CollectCodeGeneratorClasses() { NativeCall<void>(this, "FAssetRegistry.CollectCodeGeneratorClasses"); }
	FDependsNode * CreateOrFindDependsNode(FName ObjectPath) { return NativeCall<FDependsNode *, FName>(this, "FAssetRegistry.CreateOrFindDependsNode", ObjectPath); }
	void DependencyDataGathered(const long double TickStartTime, TArray<FPackageDependencyData> * DependsResults) { NativeCall<void, const long double, TArray<FPackageDependencyData> *>(this, "FAssetRegistry.DependencyDataGathered", TickStartTime, DependsResults); }
	FString * ExportTextPathToObjectName(FString * result, const FString * InExportTextPath) { return NativeCall<FString *, FString *, const FString *>(this, "FAssetRegistry.ExportTextPathToObjectName", result, InExportTextPath); }
	bool GetAllAssets(TArray<FAssetData> * OutAssetData) { return NativeCall<bool, TArray<FAssetData> *>(this, "FAssetRegistry.GetAllAssets", OutAssetData); }
	void GetAllCachedPaths(TArray<FString> * OutPathList) { NativeCall<void, TArray<FString> *>(this, "FAssetRegistry.GetAllCachedPaths", OutPathList); }
	bool GetAncestorClassNames(FName ClassName, TArray<FName> * OutAncestorClassNames) { return NativeCall<bool, FName, TArray<FName> *>(this, "FAssetRegistry.GetAncestorClassNames", ClassName, OutAncestorClassNames); }
	EAssetAvailability::Type GetAssetAvailability(const FAssetData * AssetData) { return NativeCall<EAssetAvailability::Type, const FAssetData *>(this, "FAssetRegistry.GetAssetAvailability", AssetData); }
	float GetAssetAvailabilityProgress(const FAssetData * AssetData, EAssetAvailabilityProgressReportingType::Type ReportType) { return NativeCall<float, const FAssetData *, EAssetAvailabilityProgressReportingType::Type>(this, "FAssetRegistry.GetAssetAvailabilityProgress", AssetData, ReportType); }
	bool GetAssetAvailabilityProgressTypeSupported(EAssetAvailabilityProgressReportingType::Type ReportType) { return NativeCall<bool, EAssetAvailabilityProgressReportingType::Type>(this, "FAssetRegistry.GetAssetAvailabilityProgressTypeSupported", ReportType); }
	FAssetData * GetAssetByObjectPath(FAssetData * result, const FName ObjectPath) { return NativeCall<FAssetData *, FAssetData *, const FName>(this, "FAssetRegistry.GetAssetByObjectPath", result, ObjectPath); }
	bool GetAssets(const FARFilter * Filter, TArray<FAssetData> * OutAssetData) { return NativeCall<bool, const FARFilter *, TArray<FAssetData> *>(this, "FAssetRegistry.GetAssets", Filter, OutAssetData); }
	bool GetAssetsByClass(FName ClassName, TArray<FAssetData> * OutAssetData, bool bSearchSubClasses) { return NativeCall<bool, FName, TArray<FAssetData> *, bool>(this, "FAssetRegistry.GetAssetsByClass", ClassName, OutAssetData, bSearchSubClasses); }
	bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData> * OutAssetData) { return NativeCall<bool, FName, TArray<FAssetData> *>(this, "FAssetRegistry.GetAssetsByPackageName", PackageName, OutAssetData); }
	bool GetAssetsByPath(FName PackagePath, TArray<FAssetData> * OutAssetData, bool bRecursive) { return NativeCall<bool, FName, TArray<FAssetData> *, bool>(this, "FAssetRegistry.GetAssetsByPath", PackagePath, OutAssetData, bRecursive); }
	bool GetAssetsByTagValues(const TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,FString,1> > * AssetTagsAndValues, TArray<FAssetData> * OutAssetData) { return NativeCall<bool, const TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,FString,1> > *, TArray<FAssetData> *>(this, "FAssetRegistry.GetAssetsByTagValues", AssetTagsAndValues, OutAssetData); }
	bool GetDependencies(FName PackageName, TArray<FName> * OutDependencies) { return NativeCall<bool, FName, TArray<FName> *>(this, "FAssetRegistry.GetDependencies", PackageName, OutDependencies); }
	void GetDerivedClassNames(const TArray<FName> * ClassNames, const TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * ExcludedClassNames, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * OutDerivedClassNames) { NativeCall<void, const TArray<FName> *, const TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *>(this, "FAssetRegistry.GetDerivedClassNames", ClassNames, ExcludedClassNames, OutDerivedClassNames); }
	bool GetReferencers(FName PackageName, TArray<FName> * OutReferencers) { return NativeCall<bool, FName, TArray<FName> *>(this, "FAssetRegistry.GetReferencers", PackageName, OutReferencers); }
	void GetSubClasses(const TArray<FName> * InClassNames, const TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * ExcludedClassNames, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * SubClassNames) { NativeCall<void, const TArray<FName> *, const TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *>(this, "FAssetRegistry.GetSubClasses", InClassNames, ExcludedClassNames, SubClassNames); }
	void GetSubClasses_Recursive(FName InClassName, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * SubClassNames, const TMap<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0> > * ReverseInheritanceMap, const TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * ExcludedClassNames) { NativeCall<void, FName, TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *, const TMap<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0> > *, const TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *>(this, "FAssetRegistry.GetSubClasses_Recursive", InClassName, SubClassNames, ReverseInheritanceMap, ExcludedClassNames); }
	void GetSubPaths(const FString * InBasePath, TArray<FString> * OutPathList, bool bInRecurse) { NativeCall<void, const FString *, TArray<FString> *, bool>(this, "FAssetRegistry.GetSubPaths", InBasePath, OutPathList, bInRecurse); }
	bool IsFilterValid(const FARFilter * Filter) { return NativeCall<bool, const FARFilter *>(this, "FAssetRegistry.IsFilterValid", Filter); }
	bool IsLoadingAssets() { return NativeCall<bool>(this, "FAssetRegistry.IsLoadingAssets"); }
	FAssetRegistry::FAssetRemovedEvent * OnAssetRemoved() { return NativeCall<FAssetRegistry::FAssetRemovedEvent *>(this, "FAssetRegistry.OnAssetRemoved"); }
	void OnContentPathDismounted(const FString * InAssetPath, const FString * FileSystemPath) { NativeCall<void, const FString *, const FString *>(this, "FAssetRegistry.OnContentPathDismounted", InAssetPath, FileSystemPath); }
	void OnContentPathMounted(const FString * InAssetPath, const FString * FileSystemPath) { NativeCall<void, const FString *, const FString *>(this, "FAssetRegistry.OnContentPathMounted", InAssetPath, FileSystemPath); }
	FAssetRegistry::FFileLoadProgressUpdatedEvent * OnFileLoadProgressUpdated() { return NativeCall<FAssetRegistry::FFileLoadProgressUpdatedEvent *>(this, "FAssetRegistry.OnFileLoadProgressUpdated"); }
	FAssetRegistry::FFilesLoadedEvent * OnFilesLoaded() { return NativeCall<FAssetRegistry::FFilesLoadedEvent *>(this, "FAssetRegistry.OnFilesLoaded"); }
	FAssetRegistry::FInMemoryAssetCreatedEvent * OnInMemoryAssetCreated() { return NativeCall<FAssetRegistry::FInMemoryAssetCreatedEvent *>(this, "FAssetRegistry.OnInMemoryAssetCreated"); }
	FAssetRegistry::FInMemoryAssetDeletedEvent * OnInMemoryAssetDeleted() { return NativeCall<FAssetRegistry::FInMemoryAssetDeletedEvent *>(this, "FAssetRegistry.OnInMemoryAssetDeleted"); }
	FAssetRegistry::FPathAddedEvent * OnPathAdded() { return NativeCall<FAssetRegistry::FPathAddedEvent *>(this, "FAssetRegistry.OnPathAdded"); }
	void PathDataGathered(const long double TickStartTime, TArray<FString> * PathResults) { NativeCall<void, const long double, TArray<FString> *>(this, "FAssetRegistry.PathDataGathered", TickStartTime, PathResults); }
	void PrioritizeAssetInstall(const FAssetData * AssetData) { NativeCall<void, const FAssetData *>(this, "FAssetRegistry.PrioritizeAssetInstall", AssetData); }
	void PrioritizeSearchPath(const FString * PathToPrioritize) { NativeCall<void, const FString *>(this, "FAssetRegistry.PrioritizeSearchPath", PathToPrioritize); }
	bool RemoveAssetData(FAssetData * AssetData) { return NativeCall<bool, FAssetData *>(this, "FAssetRegistry.RemoveAssetData", AssetData); }
	bool RemoveAssetPath(const FString * PathToRemove, bool bEvenIfAssetsStillExist) { return NativeCall<bool, const FString *, bool>(this, "FAssetRegistry.RemoveAssetPath", PathToRemove, bEvenIfAssetsStillExist); }
	bool RemoveDependsNode(FName PackageName) { return NativeCall<bool, FName>(this, "FAssetRegistry.RemoveDependsNode", PackageName); }
	bool RemovePath(const FString * PathToRemove) { return NativeCall<bool, const FString *>(this, "FAssetRegistry.RemovePath", PathToRemove); }
	void RunAssetsThroughFilter(TArray<FAssetData> * AssetDataList, const FARFilter * Filter) { NativeCall<void, TArray<FAssetData> *, const FARFilter *>(this, "FAssetRegistry.RunAssetsThroughFilter", AssetDataList, Filter); }
	void SaveRegistryData(FArchive * Ar, TMap<FName,FAssetData *,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,FAssetData *,0> > * Data, int AssetCount) { NativeCall<void, FArchive *, TMap<FName,FAssetData *,FDefaultSetAllocator,TDefaultMapKeyFuncs<FName,FAssetData *,0> > *, int>(this, "FAssetRegistry.SaveRegistryData", Ar, Data, AssetCount); }
	void ScanPathsSynchronous(const TArray<FString> * InPaths, bool bForceRescan) { NativeCall<void, const TArray<FString> *, bool>(this, "FAssetRegistry.ScanPathsSynchronous", InPaths, bForceRescan); }
	void ScanPathsSynchronous_Internal(const TArray<FString> * InPaths, bool bForceRescan, bool bUseCache) { NativeCall<void, const TArray<FString> *, bool, bool>(this, "FAssetRegistry.ScanPathsSynchronous_Internal", InPaths, bForceRescan, bUseCache); }
	void SearchAllAssets(bool bSynchronousSearch) { NativeCall<void, bool>(this, "FAssetRegistry.SearchAllAssets", bSynchronousSearch); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FAssetRegistry.Serialize", Ar); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FAssetRegistry.Tick", DeltaTime); }
};

