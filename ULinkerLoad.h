#pragma once

#include "BaseDeclarations.h"
#include "ULinker.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FPackageIndex.h"

struct ULinkerLoad : ULinker
{
	enum ELinkerStatus
	{
		LINKER_Failed = 0x0,
		LINKER_Loaded = 0x1,
		LINKER_TimedOut = 0x2,
	};

	enum EVerifyResult
	{
		VERIFY_Failed = 0x0,
		VERIFY_Success = 0x1,
		VERIFY_Redirected = 0x2,
	};

	char __padding[0x4c0L];
	unsigned int& LoadFlagsField() { return *GetNativePointerField<unsigned int*>(this, "ULinkerLoad.LoadFlags"); }
	bool& bHaveImportsBeenVerifiedField() { return *GetNativePointerField<bool*>(this, "ULinkerLoad.bHaveImportsBeenVerified"); }
	FieldArray<int, 256> ExportHashField() { return {this, "ULinkerLoad.ExportHash"}; }
	int& NameMapIndexField() { return *GetNativePointerField<int*>(this, "ULinkerLoad.NameMapIndex"); }
	int& ImportMapIndexField() { return *GetNativePointerField<int*>(this, "ULinkerLoad.ImportMapIndex"); }
	int& ExportMapIndexField() { return *GetNativePointerField<int*>(this, "ULinkerLoad.ExportMapIndex"); }
	int& DependsMapIndexField() { return *GetNativePointerField<int*>(this, "ULinkerLoad.DependsMapIndex"); }
	int& ExportHashIndexField() { return *GetNativePointerField<int*>(this, "ULinkerLoad.ExportHashIndex"); }
	bool& bHasSerializedPackageFileSummaryField() { return *GetNativePointerField<bool*>(this, "ULinkerLoad.bHasSerializedPackageFileSummary"); }
	bool& bHasFixedUpImportMapField() { return *GetNativePointerField<bool*>(this, "ULinkerLoad.bHasFixedUpImportMap"); }
	bool& bHasFoundExistingExportsField() { return *GetNativePointerField<bool*>(this, "ULinkerLoad.bHasFoundExistingExports"); }
	bool& bHasFinishedInitializationField() { return *GetNativePointerField<bool*>(this, "ULinkerLoad.bHasFinishedInitialization"); }
	bool& bIsGatheringDependenciesField() { return *GetNativePointerField<bool*>(this, "ULinkerLoad.bIsGatheringDependencies"); }
	bool& bTimeLimitExceededField() { return *GetNativePointerField<bool*>(this, "ULinkerLoad.bTimeLimitExceeded"); }
	bool& bUseTimeLimitField() { return *GetNativePointerField<bool*>(this, "ULinkerLoad.bUseTimeLimit"); }
	bool& bUseFullTimeLimitField() { return *GetNativePointerField<bool*>(this, "ULinkerLoad.bUseFullTimeLimit"); }
	int& IsTimeLimitExceededCallCountField() { return *GetNativePointerField<int*>(this, "ULinkerLoad.IsTimeLimitExceededCallCount"); }
	float& TimeLimitField() { return *GetNativePointerField<float*>(this, "ULinkerLoad.TimeLimit"); }
	long double& TickStartTimeField() { return *GetNativePointerField<long double*>(this, "ULinkerLoad.TickStartTime"); }
	bool& bFixupExportMapDoneField() { return *GetNativePointerField<bool*>(this, "ULinkerLoad.bFixupExportMapDone"); }

	// Functions

	static void AsyncPreloadPackage(const wchar_t * PackageName) { NativeCall<void, const wchar_t *>(nullptr, "ULinkerLoad.AsyncPreloadPackage", PackageName); }
	void BeginDestroy() { NativeCall<void>(this, "ULinkerLoad.BeginDestroy"); }
	void BuildPathName(FString * OutPathName, FPackageIndex ResourceIndex) { NativeCall<void, FString *, FPackageIndex>(this, "ULinkerLoad.BuildPathName", OutPathName, ResourceIndex); }
	static void CreateActiveRedirectsMap(const FString * GEngineIniName) { NativeCall<void, const FString *>(nullptr, "ULinkerLoad.CreateActiveRedirectsMap", GEngineIniName); }
	void Detach(bool bEnsureAllBulkDataIsLoaded) { NativeCall<void, bool>(this, "ULinkerLoad.Detach", bEnsureAllBulkDataIsLoaded); }
	void DetachExport(int i) { NativeCall<void, int>(this, "ULinkerLoad.DetachExport", i); }
	static TArray<FName> * FindPreviousNamesForClass(TArray<FName> * result, FString CurrentClassPath, bool bIsInstance) { return NativeCall<TArray<FName> *, TArray<FName> *, FString, bool>(nullptr, "ULinkerLoad.FindPreviousNamesForClass", result, CurrentClassPath, bIsInstance); }
	static FName * FindSubobjectRedirectName(FName * result, const FName * Name) { return NativeCall<FName *, FName *, const FName *>(nullptr, "ULinkerLoad.FindSubobjectRedirectName", result, Name); }
	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "ULinkerLoad.GetArchiveName", result); }
	FName * GetExportClassPackage(FName * result, int i) { return NativeCall<FName *, FName *, int>(this, "ULinkerLoad.GetExportClassPackage", result, i); }
	bool IsTimeLimitExceeded(const wchar_t * CurrentTask, int Granularity) { return NativeCall<bool, const wchar_t *, int>(this, "ULinkerLoad.IsTimeLimitExceeded", CurrentTask, Granularity); }
	void LoadAllObjects(bool bForcePreload) { NativeCall<void, bool>(this, "ULinkerLoad.LoadAllObjects", bForcePreload); }
	void MarkScriptSerializationEnd(UObject * Obj) { NativeCall<void, UObject *>(this, "ULinkerLoad.MarkScriptSerializationEnd", Obj); }
	void MarkScriptSerializationStart(UObject * Obj) { NativeCall<void, UObject *>(this, "ULinkerLoad.MarkScriptSerializationStart", Obj); }
	bool Precache(__int64 PrecacheOffset, __int64 PrecacheSize) { return NativeCall<bool, __int64, __int64>(this, "ULinkerLoad.Precache", PrecacheOffset, PrecacheSize); }
	void Preload(UObject * Object) { NativeCall<void, UObject *>(this, "ULinkerLoad.Preload", Object); }
	bool RegenerateBlueprintClass(UClass * LoadClass, UObject * ExportObject) { return NativeCall<bool, UClass *, UObject *>(this, "ULinkerLoad.RegenerateBlueprintClass", LoadClass, ExportObject); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "ULinkerLoad.Seek", InPos); }
	void Serialize(void * V, __int64 Length) { NativeCall<void, void *, __int64>(this, "ULinkerLoad.Serialize", V, Length); }
	static void StaticInit(UClass * InUTexture2DStaticClass) { NativeCall<void, UClass *>(nullptr, "ULinkerLoad.StaticInit", InUTexture2DStaticClass); }
	__int64 Tell() { return NativeCall<__int64>(this, "ULinkerLoad.Tell"); }
	__int64 TotalSize() { return NativeCall<__int64>(this, "ULinkerLoad.TotalSize"); }
	bool VerifyImportInner(const int ImportIndex, FString * WarningSuffix) { return NativeCall<bool, const int, FString *>(this, "ULinkerLoad.VerifyImportInner", ImportIndex, WarningSuffix); }
	bool WillTextureBeLoaded(UClass * Class, int ExportIndex) { return NativeCall<bool, UClass *, int>(this, "ULinkerLoad.WillTextureBeLoaded", Class, ExportIndex); }
};

