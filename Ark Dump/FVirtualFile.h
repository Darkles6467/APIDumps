#pragma once

#include "BaseDeclarations.h"
struct FVirtualFile
{
	char __padding[0x30L];
	FThreadSafeCounter& PrecacheReadStatusField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FVirtualFile.PrecacheReadStatus"); }
	__int64& RequestIdField() { return *GetNativePointerField<__int64*>(this, "FVirtualFile.RequestId"); }
	__int64& FileSizeField() { return *GetNativePointerField<__int64*>(this, "FVirtualFile.FileSize"); }
	__int64& ActualFileSizeField() { return *GetNativePointerField<__int64*>(this, "FVirtualFile.ActualFileSize"); }
	TArray<unsigned char>& FileDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FVirtualFile.FileData"); }
};

