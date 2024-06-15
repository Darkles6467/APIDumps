#pragma once

#include "BaseDeclarations.h"
#include "IPlatformFile.h"
#include "FDateTime.h"

struct FPakPlatformFile : IPlatformFile
{
	char __padding[0x48L];
	TArray<FPakPlatformFile::FPakListEntry>& PakFilesField() { return *GetNativePointerField<TArray<FPakPlatformFile::FPakListEntry>*>(this, "FPakPlatformFile.PakFiles"); }
	bool& bSignedField() { return *GetNativePointerField<bool*>(this, "FPakPlatformFile.bSigned"); }
	FWindowsCriticalSection& PakListCriticalField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FPakPlatformFile.PakListCritical"); }

	// Functions

	bool CreateDirectory(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FPakPlatformFile.CreateDirectory", Directory); }
	bool BufferedCopyFile(IFileHandle * Dest, IFileHandle * Source, const __int64 FileSize, char * Buffer, const __int64 BufferSize) { return NativeCall<bool, IFileHandle *, IFileHandle *, const __int64, char *, const __int64>(this, "FPakPlatformFile.BufferedCopyFile", Dest, Source, FileSize, Buffer, BufferSize); }
	static bool CheckIfPakFilesExist(IPlatformFile * LowLevelFile, const TArray<FString> * PakFolders) { return NativeCall<bool, IPlatformFile *, const TArray<FString> *>(nullptr, "FPakPlatformFile.CheckIfPakFilesExist", LowLevelFile, PakFolders); }
	FString * ConvertToAbsolutePathForExternalAppForRead(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FPakPlatformFile.ConvertToAbsolutePathForExternalAppForRead", result, Filename); }
	FString * ConvertToAbsolutePathForExternalAppForWrite(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FPakPlatformFile.ConvertToAbsolutePathForExternalAppForWrite", result, Filename); }
	FString * ConvertToPakRelativePath(FString * result, const wchar_t * Filename, const FPakFile * Pak) { return NativeCall<FString *, FString *, const wchar_t *, const FPakFile *>(this, "FPakPlatformFile.ConvertToPakRelativePath", result, Filename, Pak); }
	bool CopyFile(const wchar_t * To, const wchar_t * From) { return NativeCall<bool, const wchar_t *, const wchar_t *>(this, "FPakPlatformFile.CopyFile", To, From); }
	bool DeleteDirectory(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FPakPlatformFile.DeleteDirectory", Directory); }
	bool DeleteDirectoryRecursively(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FPakPlatformFile.DeleteDirectoryRecursively", Directory); }
	bool DeleteFile(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FPakPlatformFile.DeleteFile", Filename); }
	bool DirectoryExists(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FPakPlatformFile.DirectoryExists", Directory); }
	bool DirectoryExistsInPakFiles(const wchar_t * Directory) { return NativeCall<bool, const wchar_t *>(this, "FPakPlatformFile.DirectoryExistsInPakFiles", Directory); }
	bool FileExists(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FPakPlatformFile.FileExists", Filename); }
	__int64 FileSize(const wchar_t * Filename) { return NativeCall<__int64, const wchar_t *>(this, "FPakPlatformFile.FileSize", Filename); }
	const FPakEntry * FindFileInPakFiles(const wchar_t * Filename, FPakFile ** OutPakFile) { return NativeCall<const FPakEntry *, const wchar_t *, FPakFile **>(this, "FPakPlatformFile.FindFileInPakFiles", Filename, OutPakFile); }
	FDateTime * GetAccessTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FPakPlatformFile.GetAccessTimeStamp", result, Filename); }
	const wchar_t * GetName() { return NativeCall<const wchar_t *>(this, "FPakPlatformFile.GetName"); }
	static void GetPakFolders(const wchar_t * CmdLine, TArray<FString> * OutPakFolders) { NativeCall<void, const wchar_t *, TArray<FString> *>(nullptr, "FPakPlatformFile.GetPakFolders", CmdLine, OutPakFolders); }
	FDateTime * GetTimeStamp(FDateTime * result, const wchar_t * Filename) { return NativeCall<FDateTime *, FDateTime *, const wchar_t *>(this, "FPakPlatformFile.GetTimeStamp", result, Filename); }
	bool Initialize(IPlatformFile * Inner, const wchar_t * CmdLine) { return NativeCall<bool, IPlatformFile *, const wchar_t *>(this, "FPakPlatformFile.Initialize", Inner, CmdLine); }
	bool IsReadOnly(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FPakPlatformFile.IsReadOnly", Filename); }
	bool IterateDirectory(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "FPakPlatformFile.IterateDirectory", Directory, Visitor); }
	bool IterateDirectoryRecursively(const wchar_t * Directory, IPlatformFile::FDirectoryVisitor * Visitor) { return NativeCall<bool, const wchar_t *, IPlatformFile::FDirectoryVisitor *>(this, "FPakPlatformFile.IterateDirectoryRecursively", Directory, Visitor); }
	bool Mount(const wchar_t * InPakFilename, unsigned int PakOrder, const wchar_t * InPath) { return NativeCall<bool, const wchar_t *, unsigned int, const wchar_t *>(this, "FPakPlatformFile.Mount", InPakFilename, PakOrder, InPath); }
	bool MoveFile(const wchar_t * To, const wchar_t * From) { return NativeCall<bool, const wchar_t *, const wchar_t *>(this, "FPakPlatformFile.MoveFile", To, From); }
	bool SetReadOnly(const wchar_t * Filename, bool bNewReadOnlyValue) { return NativeCall<bool, const wchar_t *, bool>(this, "FPakPlatformFile.SetReadOnly", Filename, bNewReadOnlyValue); }
	void SetTimeStamp(const wchar_t * Filename, FDateTime DateTime) { NativeCall<void, const wchar_t *, FDateTime>(this, "FPakPlatformFile.SetTimeStamp", Filename, DateTime); }
	bool ShouldBeUsed(IPlatformFile * Inner, const wchar_t * CmdLine) { return NativeCall<bool, IPlatformFile *, const wchar_t *>(this, "FPakPlatformFile.ShouldBeUsed", Inner, CmdLine); }
	bool FPakVisitor(const wchar_t * FilenameOrDirectory, bool bIsDirectory) { return NativeCall<bool, const wchar_t *, bool>(this, "FPakPlatformFile.FPakVisitor", FilenameOrDirectory, bIsDirectory); }
};

