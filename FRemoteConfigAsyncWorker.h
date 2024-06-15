#pragma once

#include "BaseDeclarations.h"
struct FRemoteConfigAsyncWorker
{
	char __padding[0x1048L];
	FieldArray<wchar_t, 1024> FilenameField() { return {this, "FRemoteConfigAsyncWorker.Filename"}; }
	FRemoteConfigAsyncIOInfo& IOInfoField() { return *GetNativePointerField<FRemoteConfigAsyncIOInfo*>(this, "FRemoteConfigAsyncWorker.IOInfo"); }
	FString& ContentsField() { return *GetNativePointerField<FString*>(this, "FRemoteConfigAsyncWorker.Contents"); }
	bool& bIsReadField() { return *GetNativePointerField<bool*>(this, "FRemoteConfigAsyncWorker.bIsRead"); }

	// Functions

	void DoWork() { NativeCall<void>(this, "FRemoteConfigAsyncWorker.DoWork"); }
};

