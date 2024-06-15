#pragma once

#include "BaseDeclarations.h"
#include "IPlatformFile.h"
#include "FDateTime.h"

struct FLoggedPlatformFile : IPlatformFile
{
	char __padding[0x8L];

	// Functions

	bool CopyFile(const wchar_t * To, const wchar_t * From) { return NativeCall<bool, const wchar_t *, const wchar_t *>(this, "FLoggedPlatformFile.CopyFile", To, From); }
	bool CreateDirectory(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FLoggedPlatformFile.CreateDirectory", Directory); }
	bool DeleteDirectory(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FLoggedPlatformFile.DeleteDirectory", Directory); }
	bool DeleteDirectoryRecursively(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FLoggedPlatformFile.DeleteDirectoryRecursively", Directory); }
	bool DeleteFile(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FLoggedPlatformFile.DeleteFile", Filename); }
	bool DirectoryExists(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FLoggedPlatformFile.DirectoryExists", Directory); }
	bool FileExists(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FLoggedPlatformFile.FileExists", Filename); }
	__int64 FileSize(const wchar_t * Filename) { return NativeCall<__int64, const wchar_t *>(this, "FLoggedPlatformFile.FileSize", Filename); }
	FDateTime * GetAccessTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FLoggedPlatformFile.GetAccessTimeStamp", result, Filename); }
	const wchar_t * GetName() { return NativeCall<const wchar_t *>(this, "FLoggedPlatformFile.GetName"); }
	FDateTime * GetTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FLoggedPlatformFile.GetTimeStamp", result, Filename); }
	bool IsReadOnly(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FLoggedPlatformFile.IsReadOnly", Filename); }
	bool IterateDirectory(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "FLoggedPlatformFile.IterateDirectory", Directory, Visitor); }
	bool IterateDirectoryRecursively(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "FLoggedPlatformFile.IterateDirectoryRecursively", Directory, Visitor); }
	bool MoveFile(const wchar_t * To, const wchar_t * From) { return NativeCall<bool, const wchar_t *, const wchar_t *>(this, "FLoggedPlatformFile.MoveFile", To, From); }
	bool SetReadOnly(const wchar_t * Filename, bool bNewReadOnlyValue) { return NativeCall<bool, const wchar_t *, bool>(this, "FLoggedPlatformFile.SetReadOnly", Filename, bNewReadOnlyValue); }
	void SetTimeStamp(const wchar_t * Filename, FDateTime DateTime) { NativeCall<void, const wchar_t *, FDateTime>(this, "FLoggedPlatformFile.SetTimeStamp", Filename, DateTime); }
	bool ShouldBeUsed(IPlatformFile * Inner, const wchar_t * CmdLine) { return NativeCall<bool, IPlatformFile *, const wchar_t *>(this, "FLoggedPlatformFile.ShouldBeUsed", Inner, CmdLine); }
	bool FLogVisitor(const wchar_t * FilenameOrDirectory, bool bIsDirectory) { return NativeCall<bool, const wchar_t *, bool>(this, "FLoggedPlatformFile.FLogVisitor", FilenameOrDirectory, bIsDirectory); }
};

