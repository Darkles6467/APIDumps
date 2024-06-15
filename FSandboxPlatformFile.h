#pragma once

#include "BaseDeclarations.h"
#include "IPlatformFile.h"
#include "FDateTime.h"

struct FSandboxPlatformFile : IPlatformFile
{
	char __padding[0x60L];
	FString& SandboxDirectoryField() { return *GetNativePointerField<FString*>(this, "FSandboxPlatformFile.SandboxDirectory"); }
	FString& RelativeRootDirectoryField() { return *GetNativePointerField<FString*>(this, "FSandboxPlatformFile.RelativeRootDirectory"); }
	FString& AbsoluteRootDirectoryField() { return *GetNativePointerField<FString*>(this, "FSandboxPlatformFile.AbsoluteRootDirectory"); }
	TArray<FString>& FileExclusionWildcardsField() { return *GetNativePointerField<TArray<FString>*>(this, "FSandboxPlatformFile.FileExclusionWildcards"); }
	TArray<FString>& DirectoryExclusionWildcardsField() { return *GetNativePointerField<TArray<FString>*>(this, "FSandboxPlatformFile.DirectoryExclusionWildcards"); }
	bool& bEntireEngineWillUseThisSandboxField() { return *GetNativePointerField<bool*>(this, "FSandboxPlatformFile.bEntireEngineWillUseThisSandbox"); }
	bool& bSandboxEnabledField() { return *GetNativePointerField<bool*>(this, "FSandboxPlatformFile.bSandboxEnabled"); }

	// Functions

	void FSandboxVisitor() { NativeCall<void>(this, "FSandboxPlatformFile.FSandboxVisitor"); }
	FString * ConvertToAbsolutePathForExternalAppForRead(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FSandboxPlatformFile.ConvertToAbsolutePathForExternalAppForRead", result, Filename); }
	FString * ConvertToAbsolutePathForExternalAppForWrite(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FSandboxPlatformFile.ConvertToAbsolutePathForExternalAppForWrite", result, Filename); }
	FString * ConvertToSandboxPath(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FSandboxPlatformFile.ConvertToSandboxPath", result, Filename); }
	bool CopyFile(const wchar_t * To, const wchar_t * From) { return NativeCall<bool, const wchar_t *, const wchar_t *>(this, "FSandboxPlatformFile.CopyFile", To, From); }
	bool CreateDirectory(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FSandboxPlatformFile.CreateDirectory", Directory); }
	bool CreateDirectoryTree(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FSandboxPlatformFile.CreateDirectoryTree", Directory); }
	bool DeleteDirectory(const wchar_t * Path, bool Tree) { return NativeCall<bool, const wchar_t *, bool>(this, "FSandboxPlatformFile.DeleteDirectory", Path, Tree); }
	bool DeleteDirectory(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FSandboxPlatformFile.DeleteDirectory", Directory); }
	bool DeleteDirectoryRecursively(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FSandboxPlatformFile.DeleteDirectoryRecursively", Directory); }
	bool DeleteFile(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FSandboxPlatformFile.DeleteFile", Filename); }
	bool DirectoryExists(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FSandboxPlatformFile.DirectoryExists", Directory); }
	bool FileExists(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FSandboxPlatformFile.FileExists", Filename); }
	__int64 FileSize(const wchar_t * Filename) { return NativeCall<__int64, const wchar_t *>(this, "FSandboxPlatformFile.FileSize", Filename); }
	void FindFiles(TArray<FString> * Result, const wchar_t * InFilename, bool Files, bool Directories) { NativeCall<void, TArray<FString> *, const wchar_t *, bool, bool>(this, "FSandboxPlatformFile.FindFiles", Result, InFilename, Files, Directories); }
	FDateTime * GetAccessTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FSandboxPlatformFile.GetAccessTimeStamp", result, Filename); }
	const wchar_t * GetName() { return NativeCall<const wchar_t *>(this, "FSandboxPlatformFile.GetName"); }
	FDateTime * GetTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FSandboxPlatformFile.GetTimeStamp", result, Filename); }
	bool Initialize(IPlatformFile * Inner, const wchar_t * CmdLine) { return NativeCall<bool, IPlatformFile *, const wchar_t *>(this, "FSandboxPlatformFile.Initialize", Inner, CmdLine); }
	bool IsReadOnly(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FSandboxPlatformFile.IsReadOnly", Filename); }
	bool IterateDirectory(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "FSandboxPlatformFile.IterateDirectory", Directory, Visitor); }
	bool IterateDirectoryRecursively(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "FSandboxPlatformFile.IterateDirectoryRecursively", Directory, Visitor); }
	bool MoveFile(const wchar_t * To, const wchar_t * From) { return NativeCall<bool, const wchar_t *, const wchar_t *>(this, "FSandboxPlatformFile.MoveFile", To, From); }
	bool OkForInnerAccess(const wchar_t * InFilenameOrDirectoryName, bool bIsDirectory) { return NativeCall<bool, const wchar_t *, bool>(this, "FSandboxPlatformFile.OkForInnerAccess", InFilenameOrDirectoryName, bIsDirectory); }
	bool SetReadOnly(const wchar_t * Filename, bool bNewReadOnlyValue) { return NativeCall<bool, const wchar_t *, bool>(this, "FSandboxPlatformFile.SetReadOnly", Filename, bNewReadOnlyValue); }
	void SetSandboxEnabled(bool bInEnabled) { NativeCall<void, bool>(this, "FSandboxPlatformFile.SetSandboxEnabled", bInEnabled); }
	void SetTimeStamp(const wchar_t * Filename, FDateTime DateTime) { NativeCall<void, const wchar_t *, FDateTime>(this, "FSandboxPlatformFile.SetTimeStamp", Filename, DateTime); }
	bool ShouldBeUsed(IPlatformFile * Inner, const wchar_t * CmdLine) { return NativeCall<bool, IPlatformFile *, const wchar_t *>(this, "FSandboxPlatformFile.ShouldBeUsed", Inner, CmdLine); }
	bool FSandboxVisitor(const wchar_t * FilenameOrDirectory, bool bIsDirectory) { return NativeCall<bool, const wchar_t *, bool>(this, "FSandboxPlatformFile.FSandboxVisitor", FilenameOrDirectory, bIsDirectory); }
};

