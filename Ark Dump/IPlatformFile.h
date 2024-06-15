#pragma once

#include "BaseDeclarations.h"
struct IPlatformFile
{
	char __padding[0x8L];

	// Functions

	FString * ConvertToAbsolutePathForExternalAppForRead(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "IPlatformFile.ConvertToAbsolutePathForExternalAppForRead", result, Filename); }
	FString * ConvertToAbsolutePathForExternalAppForWrite(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "IPlatformFile.ConvertToAbsolutePathForExternalAppForWrite", result, Filename); }
	bool CopyDirectoryTree(const wchar_t * DestinationDirectory, const wchar_t * Source, bool bOverwriteAllExisting) { return NativeCall<bool, const wchar_t *, const wchar_t *, bool>(this, "IPlatformFile.CopyDirectoryTree", DestinationDirectory, Source, bOverwriteAllExisting); }
	bool CopyFile(const wchar_t * To, const wchar_t * From) { return NativeCall<bool, const wchar_t *, const wchar_t *>(this, "IPlatformFile.CopyFile", To, From); }
	bool CreateDirectoryTree(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "IPlatformFile.CreateDirectoryTree", Directory); }
	bool DeleteDirectoryRecursively(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "IPlatformFile.DeleteDirectoryRecursively", Directory); }
	static const wchar_t * GetPhysicalTypeName() { return NativeCall<const wchar_t *>(nullptr, "IPlatformFile.GetPhysicalTypeName"); }
	bool IterateDirectoryRecursively(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "IPlatformFile.IterateDirectoryRecursively", Directory, Visitor); }
};

