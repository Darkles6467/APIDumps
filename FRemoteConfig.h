#pragma once

#include "BaseDeclarations.h"
struct FRemoteConfig
{
	char __padding[0x68L];
	float& TimeoutField() { return *GetNativePointerField<float*>(this, "FRemoteConfig.Timeout"); }
	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "FRemoteConfig.bIsEnabled"); }
	bool& bHasCachedFilenamesField() { return *GetNativePointerField<bool*>(this, "FRemoteConfig.bHasCachedFilenames"); }
	TArray<FString>& CachedFileNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "FRemoteConfig.CachedFileNames"); }

	// Functions

	FRemoteConfigAsyncIOInfo * FindConfig(const wchar_t * Filename) { return NativeCall<FRemoteConfigAsyncIOInfo *, const wchar_t *>(this, "FRemoteConfig.FindConfig", Filename); }
	void FinishRead(const wchar_t * Filename) { NativeCall<void, const wchar_t *>(this, "FRemoteConfig.FinishRead", Filename); }
	FString * GenerateRemotePath(FString * result, const wchar_t * Filename) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FRemoteConfig.GenerateRemotePath", result, Filename); }
	static FRemoteConfig * Get() { return NativeCall<FRemoteConfig *>(nullptr, "FRemoteConfig.Get"); }
	bool IsFinished(const wchar_t * InFilename) { return NativeCall<bool, const wchar_t *>(this, "FRemoteConfig.IsFinished", InFilename); }
	bool IsRemoteFile(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FRemoteConfig.IsRemoteFile", Filename); }
	bool Read(const wchar_t * GeneratedIniFile, const wchar_t * DefaultIniFile) { return NativeCall<bool, const wchar_t *, const wchar_t *>(this, "FRemoteConfig.Read", GeneratedIniFile, DefaultIniFile); }
	static FString * ReplaceIniCharWithSpecialChar(FString * result, const FString * Str) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FRemoteConfig.ReplaceIniCharWithSpecialChar", result, Str); }
	static FString * ReplaceIniSpecialCharWithChar(FString * result, const FString * Str) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FRemoteConfig.ReplaceIniSpecialCharWithChar", result, Str); }
	bool ShouldReadRemoteFile(const wchar_t * Filename) { return NativeCall<bool, const wchar_t *>(this, "FRemoteConfig.ShouldReadRemoteFile", Filename); }
	bool Write(const wchar_t * Filename, FString * Contents) { return NativeCall<bool, const wchar_t *, FString *>(this, "FRemoteConfig.Write", Filename, Contents); }
};

