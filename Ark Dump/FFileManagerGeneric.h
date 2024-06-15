#pragma once

#include "BaseDeclarations.h"
#include "FDateTime.h"

struct IFileManager
{
	char __padding[0x8L];

	// Functions

};

struct FFileManagerGeneric : IFileManager
{

	// Functions

	FString * ConvertToAbsolutePathForExternalAppForRead(FString * result, const wchar_t * AbsolutePath) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FFileManagerGeneric.ConvertToAbsolutePathForExternalAppForRead", result, AbsolutePath); }
	FString * ConvertToAbsolutePathForExternalAppForWrite(FString * result, const wchar_t * AbsolutePath) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FFileManagerGeneric.ConvertToAbsolutePathForExternalAppForWrite", result, AbsolutePath); }
	FString * ConvertToRelativePath(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FFileManagerGeneric.ConvertToRelativePath", result, Filename); }
	unsigned int Copy(const wchar_t * InDestFile, const wchar_t * InSrcFile, bool ReplaceExisting, bool EvenIfReadOnly, bool Attributes, FCopyProgress * Progress) { return NativeCall<unsigned int, const wchar_t *, const wchar_t *, bool, bool, bool, FCopyProgress *>(this, "FFileManagerGeneric.Copy", InDestFile, InSrcFile, ReplaceExisting, EvenIfReadOnly, Attributes, Progress); }
	unsigned int CopyWithProgress(const wchar_t * InDestFile, const wchar_t * InSrcFile, bool ReplaceExisting, bool EvenIfReadOnly, bool Attributes, FCopyProgress * Progress) { return NativeCall<unsigned int, const wchar_t *, const wchar_t *, bool, bool, bool, FCopyProgress *>(this, "FFileManagerGeneric.CopyWithProgress", InDestFile, InSrcFile, ReplaceExisting, EvenIfReadOnly, Attributes, Progress); }
	static FString * DefaultConvertToRelativePath(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(nullptr, "FFileManagerGeneric.DefaultConvertToRelativePath", result, Filename); }
	bool Delete(const wchar_t * Filename, bool RequireExists, bool EvenReadOnly, bool Quiet) { return NativeCall<bool, const wchar_t *, bool, bool, bool>(this, "FFileManagerGeneric.Delete", Filename, RequireExists, EvenReadOnly, Quiet); }
	bool DeleteDirectory(const wchar_t * Path, bool RequireExists, bool Tree) { return NativeCall<bool, const wchar_t *, bool, bool>(this, "FFileManagerGeneric.DeleteDirectory", Path, RequireExists, Tree); }
	bool DirectoryExists(const wchar_t * InDirectory) { return NativeCall<bool, const wchar_t *>(this, "FFileManagerGeneric.DirectoryExists", InDirectory); }
	bool FileExists(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FFileManagerGeneric.FileExists", Filename); }
	__int64 FileSize(const wchar_t * Filename) { return NativeCall<__int64, const wchar_t *>(this, "FFileManagerGeneric.FileSize", Filename); }
	void FindFiles(TArray<FString> * FoundFiles, const wchar_t * Directory, const wchar_t * FileExtension) { NativeCall<void, TArray<FString> *, const wchar_t *, const wchar_t *>(this, "FFileManagerGeneric.FindFiles", FoundFiles, Directory, FileExtension); }
	void FindFiles(TArray<FString> * Result, const wchar_t * InFilename, bool Files, bool Directories) { NativeCall<void, TArray<FString> *, const wchar_t *, bool, bool>(this, "FFileManagerGeneric.FindFiles", Result, InFilename, Files, Directories); }
	void FindFilesRecursive(TArray<FString> * FileNames, const wchar_t * StartDirectory, const wchar_t * Filename, bool Files, bool Directories, bool bClearFileNames) { NativeCall<void, TArray<FString> *, const wchar_t *, const wchar_t *, bool, bool, bool>(this, "FFileManagerGeneric.FindFilesRecursive", FileNames, StartDirectory, Filename, Files, Directories, bClearFileNames); }
	void FindFilesRecursiveInternal(TArray<FString> * FileNames, const wchar_t * StartDirectory, const wchar_t * Filename, bool Files, bool Directories) { NativeCall<void, TArray<FString> *, const wchar_t *, const wchar_t *, bool, bool>(this, "FFileManagerGeneric.FindFilesRecursiveInternal", FileNames, StartDirectory, Filename, Files, Directories); }
	FDateTime * GetAccessTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FFileManagerGeneric.GetAccessTimeStamp", result, Filename); }
	long double GetFileAgeSeconds(const wchar_t * Filename) { return NativeCall<long double, const wchar_t *>(this, "FFileManagerGeneric.GetFileAgeSeconds", Filename); }
	FDateTime * GetTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FFileManagerGeneric.GetTimeStamp", result, Filename); }
	bool IsReadOnly(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FFileManagerGeneric.IsReadOnly", Filename); }
	bool IsSandboxEnabled() { return NativeCall<bool>(this, "FFileManagerGeneric.IsSandboxEnabled"); }
	bool IterateDirectory(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "FFileManagerGeneric.IterateDirectory", Directory, Visitor); }
	bool IterateDirectoryRecursively(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "FFileManagerGeneric.IterateDirectoryRecursively", Directory, Visitor); }
	bool MakeDirectory(const wchar_t * Path, bool Tree) { return NativeCall<bool, const wchar_t *, bool>(this, "FFileManagerGeneric.MakeDirectory", Path, Tree); }
	bool Move(const wchar_t * Dest, const wchar_t * Src, bool Replace, bool EvenIfReadOnly, bool Attributes, bool bDoNotRetryOrError) { return NativeCall<bool, const wchar_t *, const wchar_t *, bool, bool, bool, bool>(this, "FFileManagerGeneric.Move", Dest, Src, Replace, EvenIfReadOnly, Attributes, bDoNotRetryOrError); }
	bool SendMessageToServer(const wchar_t * Message, IPlatformFile::IFileServerMessageHandler * Handler) { return NativeCall<bool, const wchar_t *, IPlatformFile::IFileServerMessageHandler *>(this, "FFileManagerGeneric.SendMessageToServer", Message, Handler); }
	void SetSandboxEnabled(bool bInEnabled) { NativeCall<void, bool>(this, "FFileManagerGeneric.SetSandboxEnabled", bInEnabled); }
	bool SetTimeStamp(const wchar_t * Filename, FDateTime DateTime) { return NativeCall<bool, const wchar_t *, FDateTime>(this, "FFileManagerGeneric.SetTimeStamp", Filename, DateTime); }
};

