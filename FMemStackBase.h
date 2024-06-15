#pragma once

#include "BaseDeclarations.h"
struct FMemStackBase
{
	char __padding[0x28L];
	char * TopField() { return GetNativePointerField<char *>(this, "FMemStackBase.Top"); }
	char * EndField() { return GetNativePointerField<char *>(this, "FMemStackBase.End"); }
	FMemMark * TopMarkField() { return GetNativePointerField<FMemMark *>(this, "FMemStackBase.TopMark"); }
	int& NumMarksField() { return *GetNativePointerField<int*>(this, "FMemStackBase.NumMarks"); }
	int& MinMarksToAllocField() { return *GetNativePointerField<int*>(this, "FMemStackBase.MinMarksToAlloc"); }

	// Functions

	void AllocateNewChunk(int MinSize) { NativeCall<void, int>(this, "FMemStackBase.AllocateNewChunk", MinSize); }
	bool ContainsPointer(const void * Pointer) { return NativeCall<bool, const void *>(this, "FMemStackBase.ContainsPointer", Pointer); }
	void FreeChunks(FMemStackBase::FTaggedMemory * NewTopChunk) { NativeCall<void, FMemStackBase::FTaggedMemory *>(this, "FMemStackBase.FreeChunks", NewTopChunk); }
	int GetByteCount() { return NativeCall<int>(this, "FMemStackBase.GetByteCount"); }
};

