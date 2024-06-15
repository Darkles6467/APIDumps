#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "FPackageIndex.h"

struct ULinker : UObject
{
	char __padding[0x198L];
	UPackage * LinkerRootField() { return GetNativePointerField<UPackage *>(this, "ULinker.LinkerRoot"); }
	FPackageFileSummary& SummaryField() { return *GetNativePointerField<FPackageFileSummary*>(this, "ULinker.Summary"); }
	TArray<FName>& NameMapField() { return *GetNativePointerField<TArray<FName>*>(this, "ULinker.NameMap"); }
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "ULinker.Filename"); }
	bool& FilterClientButNotServerField() { return *GetNativePointerField<bool*>(this, "ULinker.FilterClientButNotServer"); }
	bool& FilterServerButNotClientField() { return *GetNativePointerField<bool*>(this, "ULinker.FilterServerButNotClient"); }
	FSHA1 * ScriptSHAField() { return GetNativePointerField<FSHA1 *>(this, "ULinker.ScriptSHA"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "ULinker.BeginDestroy"); }
	FString * GetExportFullName(FString * result, int ExportIndex, const wchar_t * FakeRoot, bool bResolveForcedExports) { return NativeCall<FString *, FString *, int, const wchar_t *, bool>(this, "ULinker.GetExportFullName", result, ExportIndex, FakeRoot, bResolveForcedExports); }
	FString * GetExportFullName(FString * result, FPackageIndex PackageIndex, const wchar_t * FakeRoot, bool bResolveForcedExports) { return NativeCall<FString *, FString *, FPackageIndex, const wchar_t *, bool>(this, "ULinker.GetExportFullName", result, PackageIndex, FakeRoot, bResolveForcedExports); }
	FString * GetExportPathName(FString * result, int ExportIndex, const wchar_t * FakeRoot, bool bResolveForcedExports) { return NativeCall<FString *, FString *, int, const wchar_t *, bool>(this, "ULinker.GetExportPathName", result, ExportIndex, FakeRoot, bResolveForcedExports); }
	FString * GetFullImpExpName(FString * result, FPackageIndex PackageIndex) { return NativeCall<FString *, FString *, FPackageIndex>(this, "ULinker.GetFullImpExpName", result, PackageIndex); }
	FString * GetImportFullName(FString * result, int ImportIndex) { return NativeCall<FString *, FString *, int>(this, "ULinker.GetImportFullName", result, ImportIndex); }
	FString * GetImportFullName(FString * result, FPackageIndex PackageIndex) { return NativeCall<FString *, FString *, FPackageIndex>(this, "ULinker.GetImportFullName", result, PackageIndex); }
	FString * GetImportPathName(FString * result, int ImportIndex) { return NativeCall<FString *, FString *, int>(this, "ULinker.GetImportPathName", result, ImportIndex); }
	void GetScriptSHAKey(char * OutKey) { NativeCall<void, char *>(this, "ULinker.GetScriptSHAKey", OutKey); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ULinker.Serialize", Ar); }
	void StartScriptSHAGeneration() { NativeCall<void>(this, "ULinker.StartScriptSHAGeneration"); }
};

