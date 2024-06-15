#pragma once

#include "BaseDeclarations.h"
#include "FGCObject.h"

struct FAsyncPackage : FGCObject
{
	char __padding[0x178L];
	bool& bAllowStreamerField() { return *GetNativePointerField<bool*>(this, "FAsyncPackage.bAllowStreamer"); }
	bool& bSeekFreePackageField() { return *GetNativePointerField<bool*>(this, "FAsyncPackage.bSeekFreePackage"); }
	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "FAsyncPackage.PackageName"); }
	FString& PackageNameToLoadField() { return *GetNativePointerField<FString*>(this, "FAsyncPackage.PackageNameToLoad"); }
	FGuid& PackageGuidField() { return *GetNativePointerField<FGuid*>(this, "FAsyncPackage.PackageGuid"); }
	FName& PackageTypeField() { return *GetNativePointerField<FName*>(this, "FAsyncPackage.PackageType"); }
	TArray<FAsyncPackage *>& PendingImportedPackagesField() { return *GetNativePointerField<TArray<FAsyncPackage *>*>(this, "FAsyncPackage.PendingImportedPackages"); }
	TArray<FAsyncPackage *>& ReferencedImportsField() { return *GetNativePointerField<TArray<FAsyncPackage *>*>(this, "FAsyncPackage.ReferencedImports"); }
	int& DependencyRefCountField() { return *GetNativePointerField<int*>(this, "FAsyncPackage.DependencyRefCount"); }
	int& LoadImportIndexField() { return *GetNativePointerField<int*>(this, "FAsyncPackage.LoadImportIndex"); }
	int& ImportIndexField() { return *GetNativePointerField<int*>(this, "FAsyncPackage.ImportIndex"); }
	int& ExportIndexField() { return *GetNativePointerField<int*>(this, "FAsyncPackage.ExportIndex"); }
	float& TimeLimitField() { return *GetNativePointerField<float*>(this, "FAsyncPackage.TimeLimit"); }
	bool& bUseTimeLimitField() { return *GetNativePointerField<bool*>(this, "FAsyncPackage.bUseTimeLimit"); }
	bool& bUseFullTimeLimitField() { return *GetNativePointerField<bool*>(this, "FAsyncPackage.bUseFullTimeLimit"); }
	bool& bTimeLimitExceededField() { return *GetNativePointerField<bool*>(this, "FAsyncPackage.bTimeLimitExceeded"); }
	bool& bLoadHasFailedField() { return *GetNativePointerField<bool*>(this, "FAsyncPackage.bLoadHasFailed"); }
	bool& bLoadHasFinishedField() { return *GetNativePointerField<bool*>(this, "FAsyncPackage.bLoadHasFinished"); }
	long double& TickStartTimeField() { return *GetNativePointerField<long double*>(this, "FAsyncPackage.TickStartTime"); }
	const wchar_t * LastTypeOfWorkPerformedField() { return GetNativePointerField<const wchar_t *>(this, "FAsyncPackage.LastTypeOfWorkPerformed"); }
	long double& LoadStartTimeField() { return *GetNativePointerField<long double*>(this, "FAsyncPackage.LoadStartTime"); }
	float& LoadPercentageField() { return *GetNativePointerField<float*>(this, "FAsyncPackage.LoadPercentage"); }
	bool& bLoadedDependencyOrderField() { return *GetNativePointerField<bool*>(this, "FAsyncPackage.bLoadedDependencyOrder"); }
	bool& bWantsRawStreamerField() { return *GetNativePointerField<bool*>(this, "FAsyncPackage.bWantsRawStreamer"); }
	bool& bHasValidRawStreamerField() { return *GetNativePointerField<bool*>(this, "FAsyncPackage.bHasValidRawStreamer"); }

	// Functions

	void AddDependencyTree(int CurrentPackageIndex, FAsyncPackage * ImportedPackage, TSet<FAsyncPackage *,DefaultKeyFuncs<FAsyncPackage *,0>,FDefaultSetAllocator> * SearchedPackages) { NativeCall<void, int, FAsyncPackage *, TSet<FAsyncPackage *,DefaultKeyFuncs<FAsyncPackage *,0>,FDefaultSetAllocator> *>(this, "FAsyncPackage.AddDependencyTree", CurrentPackageIndex, ImportedPackage, SearchedPackages); }
	void AddImportDependency(int CurrentPackageIndex, const FName * PendingImport) { NativeCall<void, int, const FName *>(this, "FAsyncPackage.AddImportDependency", CurrentPackageIndex, PendingImport); }
	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FAsyncPackage.AddReferencedObjects", Collector); }
	bool AddUniqueLinkerDependencyPackage(int CurrentPackageIndex, FAsyncPackage * PendingImport) { return NativeCall<bool, int, FAsyncPackage *>(this, "FAsyncPackage.AddUniqueLinkerDependencyPackage", CurrentPackageIndex, PendingImport); }
	EAsyncPackageState::Type CreateExports() { return NativeCall<EAsyncPackageState::Type>(this, "FAsyncPackage.CreateExports"); }
	EAsyncPackageState::Type CreateImports() { return NativeCall<EAsyncPackageState::Type>(this, "FAsyncPackage.CreateImports"); }
	EAsyncPackageState::Type CreateLinker() { return NativeCall<EAsyncPackageState::Type>(this, "FAsyncPackage.CreateLinker"); }
	EAsyncPackageState::Type FinishObjects() { return NativeCall<EAsyncPackageState::Type>(this, "FAsyncPackage.FinishObjects"); }
	void FreeReferencedImports() { NativeCall<void>(this, "FAsyncPackage.FreeReferencedImports"); }
	void ImportFullyLoadedCallback(const FString * InPackageName, UPackage * LoadedPackage) { NativeCall<void, const FString *, UPackage *>(this, "FAsyncPackage.ImportFullyLoadedCallback", InPackageName, LoadedPackage); }
	EAsyncPackageState::Type LoadImports() { return NativeCall<EAsyncPackageState::Type>(this, "FAsyncPackage.LoadImports"); }
	EAsyncPackageState::Type PostLoadObjects() { return NativeCall<EAsyncPackageState::Type>(this, "FAsyncPackage.PostLoadObjects"); }
	EAsyncPackageState::Type PreLoadObjects() { return NativeCall<EAsyncPackageState::Type>(this, "FAsyncPackage.PreLoadObjects"); }
	EAsyncPackageState::Type Tick(bool InbUseTimeLimit, bool InbUseFullTimeLimit, float * InOutTimeLimit) { return NativeCall<EAsyncPackageState::Type, bool, bool, float *>(this, "FAsyncPackage.Tick", InbUseTimeLimit, InbUseFullTimeLimit, InOutTimeLimit); }
};

