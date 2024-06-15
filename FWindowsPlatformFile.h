#pragma once

#include "BaseDeclarations.h"
#include "IPlatformFile.h"
#include "FDateTime.h"

struct IPhysicalPlatformFile : IPlatformFile
{

	// Functions

	const wchar_t * GetName() { return NativeCall<const wchar_t *>(this, "IPhysicalPlatformFile.GetName"); }
};

struct FWindowsPlatformFile : IPhysicalPlatformFile
{

	// Functions

	bool CreateDirectory(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FWindowsPlatformFile.CreateDirectory", Directory); }
	bool DeleteDirectory(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FWindowsPlatformFile.DeleteDirectory", Directory); }
	bool DeleteFile(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FWindowsPlatformFile.DeleteFile", Filename); }
	bool DirectoryExists(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FWindowsPlatformFile.DirectoryExists", Directory); }
	bool FileExists(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FWindowsPlatformFile.FileExists", Filename); }
	__int64 FileSize(const wchar_t * Filename) { return NativeCall<__int64, const wchar_t *>(this, "FWindowsPlatformFile.FileSize", Filename); }
	FDateTime * GetAccessTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FWindowsPlatformFile.GetAccessTimeStamp", result, Filename); }
	FDateTime * GetTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FWindowsPlatformFile.GetTimeStamp", result, Filename); }
	bool IsReadOnly(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FWindowsPlatformFile.IsReadOnly", Filename); }
	bool IterateDirectory(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "FWindowsPlatformFile.IterateDirectory", Directory, Visitor); }
	bool MoveFile(const wchar_t * To, const wchar_t * From) { return NativeCall<bool, const wchar_t *, const wchar_t *>(this, "FWindowsPlatformFile.MoveFile", To, From); }
	FString * NormalizeDirectory(FString * result, const wchar_t * Directory) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FWindowsPlatformFile.NormalizeDirectory", result, Directory); }
	FString * NormalizeFilename(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FWindowsPlatformFile.NormalizeFilename", result, Filename); }
	bool SetReadOnly(const wchar_t * Filename, bool bNewReadOnlyValue) { return NativeCall<bool, const wchar_t *, bool>(this, "FWindowsPlatformFile.SetReadOnly", Filename, bNewReadOnlyValue); }
	void SetTimeStamp(const wchar_t * Filename, FDateTime DateTime) { NativeCall<void, const wchar_t *, FDateTime>(this, "FWindowsPlatformFile.SetTimeStamp", Filename, DateTime); }
};

