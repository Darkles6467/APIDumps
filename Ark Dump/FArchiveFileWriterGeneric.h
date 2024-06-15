#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FArchiveFileWriterGeneric : FArchive
{
	char __padding[0x1030L];
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "FArchiveFileWriterGeneric.Filename"); }
	__int64& PosField() { return *GetNativePointerField<__int64*>(this, "FArchiveFileWriterGeneric.Pos"); }
	__int64& BufferCountField() { return *GetNativePointerField<__int64*>(this, "FArchiveFileWriterGeneric.BufferCount"); }
	FieldArray<char, 4096> BufferField() { return {this, "FArchiveFileWriterGeneric.Buffer"}; }
	bool& bDeleteOnCloseIfFileIsZeroSizedField() { return *GetNativePointerField<bool*>(this, "FArchiveFileWriterGeneric.bDeleteOnCloseIfFileIsZeroSized"); }

	// Functions

	bool Close() { return NativeCall<bool>(this, "FArchiveFileWriterGeneric.Close"); }
	bool CloseLowLevel() { return NativeCall<bool>(this, "FArchiveFileWriterGeneric.CloseLowLevel"); }
	void Flush() { NativeCall<void>(this, "FArchiveFileWriterGeneric.Flush"); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "FArchiveFileWriterGeneric.Seek", InPos); }
	bool SeekLowLevel(__int64 InPos) { return NativeCall<bool, __int64>(this, "FArchiveFileWriterGeneric.SeekLowLevel", InPos); }
	void Serialize(void * V, __int64 Length) { NativeCall<void, void *, __int64>(this, "FArchiveFileWriterGeneric.Serialize", V, Length); }
	__int64 TotalSize() { return NativeCall<__int64>(this, "FArchiveFileWriterGeneric.TotalSize"); }
	bool WriteLowLevel(const char * Src, __int64 CountToWrite) { return NativeCall<bool, const char *, __int64>(this, "FArchiveFileWriterGeneric.WriteLowLevel", Src, CountToWrite); }
};

