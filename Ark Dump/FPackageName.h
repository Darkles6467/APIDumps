#pragma once

#include "BaseDeclarations.h"
#include "FModInfo.h"

struct FPackageName
{

	// Functions

	static unsigned __int64 GetTotalConversionId() { return NativeCall<unsigned __int64>(nullptr, "FPackageName.GetTotalConversionId"); }
	static bool HasTotalConversion() { return NativeCall<bool>(nullptr, "FPackageName.HasTotalConversion"); }
	static FModInfo * GetTotalConversion(FModInfo * result) { return NativeCall<FModInfo *, FModInfo *>(nullptr, "FPackageName.GetTotalConversion", result); }
	static FString * ConvertToLongScriptPackageName(FString * result, const wchar_t * InShortName) { return NativeCall<FString *, FString *, const wchar_t *>(nullptr, "FPackageName.ConvertToLongScriptPackageName", result, InShortName); }
	static unsigned __int64 DLCToAppID(unsigned __int64 InMod) { return NativeCall<unsigned __int64, unsigned __int64>(nullptr, "FPackageName.DLCToAppID", InMod); }
	static bool DoesPackageExist(const FString * LongPackageName, const FGuid * Guid, FString * OutFilename) { return NativeCall<bool, const FString *, const FGuid *, FString *>(nullptr, "FPackageName.DoesPackageExist", LongPackageName, Guid, OutFilename); }
	static bool DoesPackageExistInternal(const FString * LongPackageName, const FGuid * Guid, FString * OutFilename) { return NativeCall<bool, const FString *, const FGuid *, FString *>(nullptr, "FPackageName.DoesPackageExistInternal", LongPackageName, Guid, OutFilename); }
	static bool DoesPackageNameContainInvalidCharacters(const FString * InLongPackageName, FText * OutReason) { return NativeCall<bool, const FString *, FText *>(nullptr, "FPackageName.DoesPackageNameContainInvalidCharacters", InLongPackageName, OutReason); }
	static FString * ExportTextPathToObjectPath(FString * result, const FString * InExportTextPath) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FPackageName.ExportTextPathToObjectPath", result, InExportTextPath); }
	static FString * FilenameToLongPackageName(FString * result, const FString * InFilename) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FPackageName.FilenameToLongPackageName", result, InFilename); }
	static bool FindPackageFileWithoutExtension(const FString * InPackageFilename, FString * OutFilename) { return NativeCall<bool, const FString *, FString *>(nullptr, "FPackageName.FindPackageFileWithoutExtension", InPackageFilename, OutFilename); }
	static bool FindPackagesInDirectory(TArray<FString> * OutPackages, const FString * RootDir) { return NativeCall<bool, TArray<FString> *, const FString *>(nullptr, "FPackageName.FindPackagesInDirectory", OutPackages, RootDir); }
	static FName * FindScriptPackageName(FName InShortName) { return NativeCall<FName *, FName>(nullptr, "FPackageName.FindScriptPackageName", InShortName); }
	static FString * GetLongPackageAssetName(FString * result, const FString * InLongPackageName) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FPackageName.GetLongPackageAssetName", result, InLongPackageName); }
	static FString * GetLongPackagePath(FString * result, const FString * InLongPackageName) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FPackageName.GetLongPackagePath", result, InLongPackageName); }
	static FModInfo * GetMod(FModInfo * result, int ModIndex) { return NativeCall<FModInfo *, FModInfo *, int>(nullptr, "FPackageName.GetMod", result, ModIndex); }
	static int GetModCount() { return NativeCall<int>(nullptr, "FPackageName.GetModCount"); }
	static FGuid * GetModGuid(FGuid * result, int ModIndex) { return NativeCall<FGuid *, FGuid *, int>(nullptr, "FPackageName.GetModGuid", result, ModIndex); }
	static unsigned __int64 GetModID(int ModIndex) { return NativeCall<unsigned __int64, int>(nullptr, "FPackageName.GetModID", ModIndex); }
	static TArray<FModInfo> * GetMods(TArray<FModInfo> * result) { return NativeCall<TArray<FModInfo> *, TArray<FModInfo> *>(nullptr, "FPackageName.GetMods", result); }
	static FName * GetShortFName(FName * result, const FName * LongName) { return NativeCall<FName *, FName *, const FName *>(nullptr, "FPackageName.GetShortFName", result, LongName); }
	static FName * GetShortFName(FName * result, const FString * LongName) { return NativeCall<FName *, FName *, const FString *>(nullptr, "FPackageName.GetShortFName", result, LongName); }
	static FString * GetShortName(FString * result, const FString * LongName) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FPackageName.GetShortName", result, LongName); }
	static FString * GetShortName(FString * result, const FName * LongName) { return NativeCall<FString *, FString *, const FName *>(nullptr, "FPackageName.GetShortName", result, LongName); }
	static FString * InternalFilenameToLongPackageName(FString * result, const FString * InFilename) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FPackageName.InternalFilenameToLongPackageName", result, InFilename); }
	static bool IsDLCMod(unsigned __int64 InMod) { return NativeCall<bool, unsigned __int64>(nullptr, "FPackageName.IsDLCMod", InMod); }
	static bool IsShortPackageName(const FString * PossiblyLongName) { return NativeCall<bool, const FString *>(nullptr, "FPackageName.IsShortPackageName", PossiblyLongName); }
	static bool IsShortPackageName(const FName PossiblyLongName) { return NativeCall<bool, const FName>(nullptr, "FPackageName.IsShortPackageName", PossiblyLongName); }
	static bool IsValidLongPackageName(const FString * InLongPackageName, bool bIncludeReadOnlyRoots, FText * OutReason) { return NativeCall<bool, const FString *, bool, FText *>(nullptr, "FPackageName.IsValidLongPackageName", InLongPackageName, bIncludeReadOnlyRoots, OutReason); }
	static FString * LongPackageNameToFilename(FString * result, const FString * InLongPackageName, const FString * InExtension, bool bCheckRedundancies) { return NativeCall<FString *, FString *, const FString *, const FString *, bool>(nullptr, "FPackageName.LongPackageNameToFilename", result, InLongPackageName, InExtension, bCheckRedundancies); }
	static FString * ObjectPathToObjectName(FString * result, const FString * InObjectPath) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FPackageName.ObjectPathToObjectName", result, InObjectPath); }
	static FString * ObjectPathToPackageName(FString * result, const FString * InObjectPath) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FPackageName.ObjectPathToPackageName", result, InObjectPath); }
	static bool ParseExportTextPath(const FString * InExportTextPath, FString * OutClassName, FString * OutObjectPath) { return NativeCall<bool, const FString *, FString *, FString *>(nullptr, "FPackageName.ParseExportTextPath", InExportTextPath, OutClassName, OutObjectPath); }
	static void PushModUnique(const FModInfo * Info) { NativeCall<void, const FModInfo *>(nullptr, "FPackageName.PushModUnique", Info); }
	static void QueryRootContentPaths(TArray<FString> * OutRootContentPaths) { NativeCall<void, TArray<FString> *>(nullptr, "FPackageName.QueryRootContentPaths", OutRootContentPaths); }
	static void RegisterMountPoint(const FString * RootPath, const FString * ContentPath) { NativeCall<void, const FString *, const FString *>(nullptr, "FPackageName.RegisterMountPoint", RootPath, ContentPath); }
	static void RegisterRedundantMountPoint(const FString * RootPath, const FString * ContentPath) { NativeCall<void, const FString *, const FString *>(nullptr, "FPackageName.RegisterRedundantMountPoint", RootPath, ContentPath); }
	static bool SearchForPackageOnDisk(const FString * PackageName, FString * OutLongPackageName, FString * OutFilename, bool bUseLocalizedNames) { return NativeCall<bool, const FString *, FString *, FString *, bool>(nullptr, "FPackageName.SearchForPackageOnDisk", PackageName, OutLongPackageName, OutFilename, bUseLocalizedNames); }
	static void SetMods(const TArray<FModInfo> * InMods) { NativeCall<void, const TArray<FModInfo> *>(nullptr, "FPackageName.SetMods", InMods); }
	static void SetTotalConversion(const FModInfo * Info) { NativeCall<void, const FModInfo *>(nullptr, "FPackageName.SetTotalConversion", Info); }
	static bool TryConvertFilenameToLongPackageName(const FString * InFilename, FString * OutPackageName) { return NativeCall<bool, const FString *, FString *>(nullptr, "FPackageName.TryConvertFilenameToLongPackageName", InFilename, OutPackageName); }
};

