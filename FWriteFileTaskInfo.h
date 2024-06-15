#pragma once

#include "BaseDeclarations.h"
struct FWriteFileTaskInfo
{
	char __padding[0x58L];
	TArray<unsigned char>& FileContentField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FWriteFileTaskInfo.FileContent"); }
	TArray<unsigned char>& EXTRA_FileContentField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FWriteFileTaskInfo.EXTRA_FileContent"); }
	TArray<unsigned char>& EXTRA2_FileContentField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FWriteFileTaskInfo.EXTRA2_FileContent"); }
	TArray<unsigned char>& EXTRA3_FileContentField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FWriteFileTaskInfo.EXTRA3_FileContent"); }
	TArray<unsigned char>& EXTRA4_FileContentField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FWriteFileTaskInfo.EXTRA4_FileContent"); }
	TRefCountPtr<FGraphEvent>& CompletionHandleField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "FWriteFileTaskInfo.CompletionHandle"); }

	// Functions

};

