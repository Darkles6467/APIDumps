#pragma once

#include "BaseDeclarations.h"
struct FThreadedTaskContainer
{
	char __padding[0x8L];

	// Functions

};

struct FDecompressContainer : FThreadedTaskContainer
{
	char __padding[0x10L];
	FAsyncTask<FDecompressAndCopyModTask> * TaskField() { return GetNativePointerField<FAsyncTask<FDecompressAndCopyModTask> *>(this, "FDecompressContainer.Task"); }
	FDecompressAndCopyModTask * RootTaskField() { return GetNativePointerField<FDecompressAndCopyModTask *>(this, "FDecompressContainer.RootTask"); }

	// Functions

	void GetStatus(int * ProcessedFiles, int * TotalFiles) { NativeCall<void, int *, int *>(this, "FDecompressContainer.GetStatus", ProcessedFiles, TotalFiles); }
	bool IsActive() { return NativeCall<bool>(this, "FDecompressContainer.IsActive"); }
	bool WasSucessfull() { return NativeCall<bool>(this, "FDecompressContainer.WasSucessfull"); }
};

