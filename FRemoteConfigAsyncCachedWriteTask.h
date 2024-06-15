#pragma once

#include "BaseDeclarations.h"
struct FRemoteConfigAsyncCachedWriteTask
{
	char __padding[0x20L];
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "FRemoteConfigAsyncCachedWriteTask.Filename"); }
	FString& ContentsField() { return *GetNativePointerField<FString*>(this, "FRemoteConfigAsyncCachedWriteTask.Contents"); }

	// Functions

};

