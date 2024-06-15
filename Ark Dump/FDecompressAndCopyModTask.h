#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct FDecompressAndCopyModTask : FNonAbandonableTask
{
	char __padding[0x90L];
	FString& StartedRootField() { return *GetNativePointerField<FString*>(this, "FDecompressAndCopyModTask.StartedRoot"); }
	FString& MirroredRootField() { return *GetNativePointerField<FString*>(this, "FDecompressAndCopyModTask.MirroredRoot"); }
	bool& bWasSuccessfullField() { return *GetNativePointerField<bool*>(this, "FDecompressAndCopyModTask.bWasSuccessfull"); }
	FString& SrcDirectoryField() { return *GetNativePointerField<FString*>(this, "FDecompressAndCopyModTask.SrcDirectory"); }
	FString& DstDirectoryField() { return *GetNativePointerField<FString*>(this, "FDecompressAndCopyModTask.DstDirectory"); }

	// Functions

	void DoWork() { NativeCall<void>(this, "FDecompressAndCopyModTask.DoWork"); }
};

