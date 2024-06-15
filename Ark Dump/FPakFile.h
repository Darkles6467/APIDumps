#pragma once

#include "BaseDeclarations.h"
struct FPakFile
{
	char __padding[0x140L];
	FString& PakFilenameField() { return *GetNativePointerField<FString*>(this, "FPakFile.PakFilename"); }
	TAutoPtr<FChunkCacheWorker>& DecryptorField() { return *GetNativePointerField<TAutoPtr<FChunkCacheWorker>*>(this, "FPakFile.Decryptor"); }
	FWindowsCriticalSection& CriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FPakFile.CriticalSection"); }
	FPakInfo& InfoField() { return *GetNativePointerField<FPakInfo*>(this, "FPakFile.Info"); }
	FString& MountPointField() { return *GetNativePointerField<FString*>(this, "FPakFile.MountPoint"); }
	TArray<FPakEntry>& FilesField() { return *GetNativePointerField<TArray<FPakEntry>*>(this, "FPakFile.Files"); }
	FDateTime& TimestampField() { return *GetNativePointerField<FDateTime*>(this, "FPakFile.Timestamp"); }
	bool& bSignedField() { return *GetNativePointerField<bool*>(this, "FPakFile.bSigned"); }
	bool& bIsValidField() { return *GetNativePointerField<bool*>(this, "FPakFile.bIsValid"); }

	// Functions

	const FPakEntry * Find(const FString * Filename) { return NativeCall<const FPakEntry *, const FString *>(this, "FPakFile.Find", Filename); }
	void Initialize(FArchive * Reader) { NativeCall<void, FArchive *>(this, "FPakFile.Initialize", Reader); }
	void LoadIndex(FArchive * Reader) { NativeCall<void, FArchive *>(this, "FPakFile.LoadIndex", Reader); }
	static void MakeDirectoryFromPath(FString * Path) { NativeCall<void, FString *>(nullptr, "FPakFile.MakeDirectoryFromPath", Path); }
	void SetMountPoint(const wchar_t * Path) { NativeCall<void, const wchar_t *>(this, "FPakFile.SetMountPoint", Path); }
};

