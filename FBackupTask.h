#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FBackupTask
{
	char __padding[0x20L];
	FString& BackupFolderField() { return *GetNativePointerField<FString*>(this, "FBackupTask.BackupFolder"); }
	FString& WorldNameField() { return *GetNativePointerField<FString*>(this, "FBackupTask.WorldName"); }

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FBackupTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

