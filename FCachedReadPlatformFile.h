#pragma once

#include "BaseDeclarations.h"
#include "IPlatformFile.h"
#include "FDateTime.h"

struct FCachedReadPlatformFile : IPlatformFile
{
	char __padding[0x8L];

	// Functions

	FString * ConvertToAbsolutePathForExternalAppForRead(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FCachedReadPlatformFile.ConvertToAbsolutePathForExternalAppForRead", result, Filename); }
	FString * ConvertToAbsolutePathForExternalAppForWrite(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FCachedReadPlatformFile.ConvertToAbsolutePathForExternalAppForWrite", result, Filename); }
	bool CopyDirectoryTree(const wchar_t * DestinationDirectory, const wchar_t * Source, bool bOverwriteAllExisting) { return NativeCall<bool, const wchar_t *, const wchar_t *, bool>(this, "FCachedReadPlatformFile.CopyDirectoryTree", DestinationDirectory, Source, bOverwriteAllExisting); }
	bool CreateDirectoryTree(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FCachedReadPlatformFile.CreateDirectoryTree", Directory); }
	bool DeleteDirectory(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FCachedReadPlatformFile.DeleteDirectory", Directory); }
	bool DeleteDirectoryRecursively(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FCachedReadPlatformFile.DeleteDirectoryRecursively", Directory); }
	bool DeleteFile(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FCachedReadPlatformFile.DeleteFile", Filename); }
	bool DirectoryExists(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FCachedReadPlatformFile.DirectoryExists", Directory); }
	bool FileExists(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FCachedReadPlatformFile.FileExists", Filename); }
	__int64 FileSize(const wchar_t * Filename) { return NativeCall<__int64, const wchar_t *>(this, "FCachedReadPlatformFile.FileSize", Filename); }
	FDateTime * GetAccessTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FCachedReadPlatformFile.GetAccessTimeStamp", result, Filename); }
	const wchar_t * GetName() { return NativeCall<const wchar_t *>(this, "FCachedReadPlatformFile.GetName"); }
	FDateTime * GetTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FCachedReadPlatformFile.GetTimeStamp", result, Filename); }
	bool Initialize(IPlatformFile * Inner, const wchar_t * CommandLineParam) { return NativeCall<bool, IPlatformFile *, const wchar_t *>(this, "FCachedReadPlatformFile.Initialize", Inner, CommandLineParam); }
	bool IsReadOnly(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FCachedReadPlatformFile.IsReadOnly", Filename); }
	bool IterateDirectory(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "FCachedReadPlatformFile.IterateDirectory", Directory, Visitor); }
	bool IterateDirectoryRecursively(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "FCachedReadPlatformFile.IterateDirectoryRecursively", Directory, Visitor); }
	bool MoveFile(const wchar_t * To, const wchar_t * From) { return NativeCall<bool, const wchar_t *, const wchar_t *>(this, "FCachedReadPlatformFile.MoveFile", To, From); }
	bool SendMessageToServer(const wchar_t * Message, IPlatformFile::IFileServerMessageHandler * Handler) { return NativeCall<bool, const wchar_t *, IPlatformFile::IFileServerMessageHandler *>(this, "FCachedReadPlatformFile.SendMessageToServer", Message, Handler); }
	bool SetReadOnly(const wchar_t * Filename, bool bNewReadOnlyValue) { return NativeCall<bool, const wchar_t *, bool>(this, "FCachedReadPlatformFile.SetReadOnly", Filename, bNewReadOnlyValue); }
	void SetTimeStamp(const wchar_t * Filename, FDateTime DateTime) { NativeCall<void, const wchar_t *, FDateTime>(this, "FCachedReadPlatformFile.SetTimeStamp", Filename, DateTime); }
};

