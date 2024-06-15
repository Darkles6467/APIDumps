#pragma once

#include "BaseDeclarations.h"
struct FPaths
{

	// Functions

	static FString * Combine(FString * result, const wchar_t * PathA, const wchar_t * PathB, const wchar_t * PathC) { return NativeCall<FString *, FString *, const wchar_t *, const wchar_t *, const wchar_t *>(nullptr, "FPaths.Combine", result, PathA, PathB, PathC); }
	static FString * Combine(FString * result, const wchar_t * PathA, const wchar_t * PathB) { return NativeCall<FString *, FString *, const wchar_t *, const wchar_t *>(nullptr, "FPaths.Combine", result, PathA, PathB); }
	static FString * AutomationDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.AutomationDir", result); }
	static FString * BugItDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.BugItDir", result); }
	static FString * ChangeExtension(FString * result, const FString * InPath, const FString * InNewExtension) { return NativeCall<FString *, FString *, const FString *, const FString *>(nullptr, "FPaths.ChangeExtension", result, InPath, InNewExtension); }
	static FString * CloudDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.CloudDir", result); }
	static bool CollapseRelativeDirectories(FString * InPath) { return NativeCall<bool, FString *>(nullptr, "FPaths.CollapseRelativeDirectories", InPath); }
	static void CombineInternal(FString * OutPath, const wchar_t ** Pathes, int NumPathes) { NativeCall<void, FString *, const wchar_t **, int>(nullptr, "FPaths.CombineInternal", OutPath, Pathes, NumPathes); }
	static FString * ConvertRelativePathToFull(FString * result, const FString * BasePath, const FString * InPath) { return NativeCall<FString *, FString *, const FString *, const FString *>(nullptr, "FPaths.ConvertRelativePathToFull", result, BasePath, InPath); }
	static FString * ConvertRelativePathToFull(FString * result, const FString * InPath) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FPaths.ConvertRelativePathToFull", result, InPath); }
	static FString * ConvertToSandboxPath(FString * result, const FString * InPath, const wchar_t * InSandboxName) { return NativeCall<FString *, FString *, const FString *, const wchar_t *>(nullptr, "FPaths.ConvertToSandboxPath", result, InPath, InSandboxName); }
	static FString * CreateTempFilename(FString * result, const wchar_t * Path, const wchar_t * Prefix, const wchar_t * Extension) { return NativeCall<FString *, FString *, const wchar_t *, const wchar_t *, const wchar_t *>(nullptr, "FPaths.CreateTempFilename", result, Path, Prefix, Extension); }
	static bool DirectoryExists(const FString * InPath) { return NativeCall<bool, const FString *>(nullptr, "FPaths.DirectoryExists", InPath); }
	static FString * EngineConfigDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.EngineConfigDir", result); }
	static FString * EngineContentDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.EngineContentDir", result); }
	static FString * EngineDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.EngineDir", result); }
	static FString * EnginePluginsDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.EnginePluginsDir", result); }
	static FString * EngineSavedDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.EngineSavedDir", result); }
	static FString * EngineUserDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.EngineUserDir", result); }
	static FString * EngineVersionAgnosticUserDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.EngineVersionAgnosticUserDir", result); }
	static bool FileExists(const FString * InPath) { return NativeCall<bool, const FString *>(nullptr, "FPaths.FileExists", InPath); }
	static FString * GameAgnosticSavedDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.GameAgnosticSavedDir", result); }
	static FString * GameContentDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.GameContentDir", result); }
	static FString * GameDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.GameDir", result); }
	static FString * GameIntermediateDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.GameIntermediateDir", result); }
	static FString * GameLogDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.GameLogDir", result); }
	static FString * GamePluginsDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.GamePluginsDir", result); }
	static FString * GameSavedDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.GameSavedDir", result); }
	static FString * GameSeekFreeContentDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.GameSeekFreeContentDir", result); }
	static FString * GameUserDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.GameUserDir", result); }
	static FString * GeneratedConfigDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.GeneratedConfigDir", result); }
	static FString * GetBaseFilename(FString * result, const FString * InPath, bool bRemovePath) { return NativeCall<FString *, FString *, const FString *, bool>(nullptr, "FPaths.GetBaseFilename", result, InPath, bRemovePath); }
	static FString * GetCleanFilename(FString * result, const FString * InPath) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FPaths.GetCleanFilename", result, InPath); }
	static const TArray<FString> * GetEditorLocalizationPaths() { return NativeCall<const TArray<FString> *>(nullptr, "FPaths.GetEditorLocalizationPaths"); }
	static const TArray<FString> * GetEngineLocalizationPaths() { return NativeCall<const TArray<FString> *>(nullptr, "FPaths.GetEngineLocalizationPaths"); }
	static FString * GetExtension(FString * result, const FString * InPath, bool bIncludeDot) { return NativeCall<FString *, FString *, const FString *, bool>(nullptr, "FPaths.GetExtension", result, InPath, bIncludeDot); }
	static const TArray<FString> * GetGameLocalizationPaths() { return NativeCall<const TArray<FString> *>(nullptr, "FPaths.GetGameLocalizationPaths"); }
	static FString * GetPath(FString * result, const FString * InPath) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FPaths.GetPath", result, InPath); }
	static const FString * GetProjectFilePath() { return NativeCall<const FString *>(nullptr, "FPaths.GetProjectFilePath"); }
	static const TArray<FString> * GetPropertyNameLocalizationPaths() { return NativeCall<const TArray<FString> *>(nullptr, "FPaths.GetPropertyNameLocalizationPaths"); }
	static const FString * GetRelativePathToRoot() { return NativeCall<const FString *>(nullptr, "FPaths.GetRelativePathToRoot"); }
	static const TArray<FString> * GetToolTipLocalizationPaths() { return NativeCall<const TArray<FString> *>(nullptr, "FPaths.GetToolTipLocalizationPaths"); }
	static bool IsDrive(const FString * InPath) { return NativeCall<bool, const FString *>(nullptr, "FPaths.IsDrive", InPath); }
	static bool IsProjectFilePathSet() { return NativeCall<bool>(nullptr, "FPaths.IsProjectFilePathSet"); }
	static bool IsRelative(const FString * InPath) { return NativeCall<bool, const FString *>(nullptr, "FPaths.IsRelative", InPath); }
	static bool MakePathRelativeTo(FString * InPath, const wchar_t * InRelativeTo) { return NativeCall<bool, FString *, const wchar_t *>(nullptr, "FPaths.MakePathRelativeTo", InPath, InRelativeTo); }
	static void MakePlatformFilename(FString * InPath) { NativeCall<void, FString *>(nullptr, "FPaths.MakePlatformFilename", InPath); }
	static void MakeStandardFilename(FString * InPath) { NativeCall<void, FString *>(nullptr, "FPaths.MakeStandardFilename", InPath); }
	static void NormalizeDirectoryName(FString * InPath) { NativeCall<void, FString *>(nullptr, "FPaths.NormalizeDirectoryName", InPath); }
	static void NormalizeFilename(FString * InPath) { NativeCall<void, FString *>(nullptr, "FPaths.NormalizeFilename", InPath); }
	static FString * ProfilingDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.ProfilingDir", result); }
	static void RemoveDuplicateSlashes(FString * InPath) { NativeCall<void, FString *>(nullptr, "FPaths.RemoveDuplicateSlashes", InPath); }
	static FString * RootDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.RootDir", result); }
	static FString * SandboxesDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.SandboxesDir", result); }
	static FString * ScreenShotDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.ScreenShotDir", result); }
	static void SetProjectFilePath(const FString * NewGameProjectFilePath) { NativeCall<void, const FString *>(nullptr, "FPaths.SetProjectFilePath", NewGameProjectFilePath); }
	static FString * SourceConfigDir(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FPaths.SourceConfigDir", result); }
	static bool ValidatePath(const FString * InPath, FText * OutReason) { return NativeCall<bool, const FString *, FText *>(nullptr, "FPaths.ValidatePath", InPath, OutReason); }
	static FString * Combine(FString * result, const wchar_t * PathA, const wchar_t * PathB, const wchar_t * PathC, const wchar_t * PathD, const wchar_t * PathE) { return NativeCall<FString *, FString *, const wchar_t *, const wchar_t *, const wchar_t *, const wchar_t *, const wchar_t *>(nullptr, "FPaths.Combine", result, PathA, PathB, PathC, PathD, PathE); }
	static FString * Combine(FString * result, const wchar_t * PathA, const wchar_t * PathB, const wchar_t * PathC, const wchar_t * PathD) { return NativeCall<FString *, FString *, const wchar_t *, const wchar_t *, const wchar_t *, const wchar_t *>(nullptr, "FPaths.Combine", result, PathA, PathB, PathC, PathD); }
};

