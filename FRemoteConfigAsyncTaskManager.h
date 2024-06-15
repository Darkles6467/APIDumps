#pragma once

#include "BaseDeclarations.h"
struct FRemoteConfigAsyncTaskManager
{
	char __padding[0x88L];
	TArray<FRemoteConfigAsyncCachedWriteTask>& CachedWriteTasksField() { return *GetNativePointerField<TArray<FRemoteConfigAsyncCachedWriteTask>*>(this, "FRemoteConfigAsyncTaskManager.CachedWriteTasks"); }
	FWindowsCriticalSection& SynchronizationObjectField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FRemoteConfigAsyncTaskManager.SynchronizationObject"); }

	// Functions

	bool FindCachedWriteTask(const wchar_t * InFilename, bool bCompareContents, const wchar_t * InContents) { return NativeCall<bool, const wchar_t *, bool, const wchar_t *>(this, "FRemoteConfigAsyncTaskManager.FindCachedWriteTask", InFilename, bCompareContents, InContents); }
	bool GetReadData(const wchar_t * InFilename, FRemoteConfigAsyncIOInfo * OutIOInfo) { return NativeCall<bool, const wchar_t *, FRemoteConfigAsyncIOInfo *>(this, "FRemoteConfigAsyncTaskManager.GetReadData", InFilename, OutIOInfo); }
	bool IsFinished(const wchar_t * InFilename) { return NativeCall<bool, const wchar_t *>(this, "FRemoteConfigAsyncTaskManager.IsFinished", InFilename); }
	bool StartTask(const wchar_t * InFilename, const wchar_t * RemotePath, FRemoteConfigAsyncIOInfo * InIOInfo, FString * InContents, bool bInIsRead) { return NativeCall<bool, const wchar_t *, const wchar_t *, FRemoteConfigAsyncIOInfo *, FString *, bool>(this, "FRemoteConfigAsyncTaskManager.StartTask", InFilename, RemotePath, InIOInfo, InContents, bInIsRead); }
};

