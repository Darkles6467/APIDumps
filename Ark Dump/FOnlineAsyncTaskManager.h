#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FOnlineAsyncTaskManager : FRunnable
{
	char __padding[0xc8L];
	FWindowsCriticalSection& InQueueLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineAsyncTaskManager.InQueueLock"); }
	FWindowsCriticalSection& ParallelTasksLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineAsyncTaskManager.ParallelTasksLock"); }
	FWindowsCriticalSection& OutQueueLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineAsyncTaskManager.OutQueueLock"); }
	unsigned int& PollingIntervalField() { return *GetNativePointerField<unsigned int*>(this, "FOnlineAsyncTaskManager.PollingInterval"); }
	int& bRequestingExitField() { return *GetNativePointerField<int*>(this, "FOnlineAsyncTaskManager.bRequestingExit"); }
	volatile unsigned int& OnlineThreadIdField() { return *GetNativePointerField<volatile unsigned int*>(this, "FOnlineAsyncTaskManager.OnlineThreadId"); }

	// Functions

	void AddToInQueue(FOnlineAsyncTask * NewTask) { NativeCall<void, FOnlineAsyncTask *>(this, "FOnlineAsyncTaskManager.AddToInQueue", NewTask); }
	void AddToOutQueue(FOnlineAsyncItem * CompletedItem) { NativeCall<void, FOnlineAsyncItem *>(this, "FOnlineAsyncTaskManager.AddToOutQueue", CompletedItem); }
	void Exit() { NativeCall<void>(this, "FOnlineAsyncTaskManager.Exit"); }
	void GameTick() { NativeCall<void>(this, "FOnlineAsyncTaskManager.GameTick"); }
	bool Init() { return NativeCall<bool>(this, "FOnlineAsyncTaskManager.Init"); }
	void PopFromInQueue() { NativeCall<void>(this, "FOnlineAsyncTaskManager.PopFromInQueue"); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FOnlineAsyncTaskManager.Run"); }
	void Stop() { NativeCall<void>(this, "FOnlineAsyncTaskManager.Stop"); }
	void Tick() { NativeCall<void>(this, "FOnlineAsyncTaskManager.Tick"); }
};

