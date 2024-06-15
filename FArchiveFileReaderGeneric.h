#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FArchiveFileReaderGeneric : FArchive
{
	char __padding[0x438L];
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "FArchiveFileReaderGeneric.Filename"); }
	__int64& SizeField() { return *GetNativePointerField<__int64*>(this, "FArchiveFileReaderGeneric.Size"); }
	__int64& PosField() { return *GetNativePointerField<__int64*>(this, "FArchiveFileReaderGeneric.Pos"); }
	__int64& BufferBaseField() { return *GetNativePointerField<__int64*>(this, "FArchiveFileReaderGeneric.BufferBase"); }
	__int64& BufferCountField() { return *GetNativePointerField<__int64*>(this, "FArchiveFileReaderGeneric.BufferCount"); }
	FieldArray<char, 1024> BufferField() { return {this, "FArchiveFileReaderGeneric.Buffer"}; }

	// Functions

	bool Close() { return NativeCall<bool>(this, "FArchiveFileReaderGeneric.Close"); }
	void CloseLowLevel() { NativeCall<void>(this, "FArchiveFileReaderGeneric.CloseLowLevel"); }
	bool InternalPrecache(__int64 PrecacheOffset, __int64 PrecacheSize) { return NativeCall<bool, __int64, __int64>(this, "FArchiveFileReaderGeneric.InternalPrecache", PrecacheOffset, PrecacheSize); }
	void ReadLowLevel(char * Dest, __int64 CountToRead, __int64 * OutBytesRead) { NativeCall<void, char *, __int64, __int64 *>(this, "FArchiveFileReaderGeneric.ReadLowLevel", Dest, CountToRead, OutBytesRead); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "FArchiveFileReaderGeneric.Seek", InPos); }
	bool SeekLowLevel(__int64 InPos) { return NativeCall<bool, __int64>(this, "FArchiveFileReaderGeneric.SeekLowLevel", InPos); }
	void Serialize(void * V, __int64 Length) { NativeCall<void, void *, __int64>(this, "FArchiveFileReaderGeneric.Serialize", V, Length); }
};

