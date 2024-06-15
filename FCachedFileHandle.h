#pragma once

#include "BaseDeclarations.h"
#include "IFileHandle.h"

struct FCachedFileHandle : IFileHandle
{
	char __padding[0x20050L];
	__int64& FilePosField() { return *GetNativePointerField<__int64*>(this, "FCachedFileHandle.FilePos"); }
	__int64& TellPosField() { return *GetNativePointerField<__int64*>(this, "FCachedFileHandle.TellPos"); }
	__int64& FileSizeField() { return *GetNativePointerField<__int64*>(this, "FCachedFileHandle.FileSize"); }
	bool& bWritableField() { return *GetNativePointerField<bool*>(this, "FCachedFileHandle.bWritable"); }
	bool& bReadableField() { return *GetNativePointerField<bool*>(this, "FCachedFileHandle.bReadable"); }
	FieldArray<char[2][65536], 265536> BufferCacheField() { return {this, "FCachedFileHandle.BufferCache"}; }
	FieldArray<__int64[2], 642> CacheStartField() { return {this, "FCachedFileHandle.CacheStart"}; }
	FieldArray<__int64[2], 642> CacheEndField() { return {this, "FCachedFileHandle.CacheEnd"}; }
	int& CurrentCacheField() { return *GetNativePointerField<int*>(this, "FCachedFileHandle.CurrentCache"); }

	// Functions

	int GetCacheIndex(__int64 Pos) { return NativeCall<int, __int64>(this, "FCachedFileHandle.GetCacheIndex", Pos); }
	bool InnerRead(char * Dest, unsigned __int64 BytesToRead) { return NativeCall<bool, char *, unsigned __int64>(this, "FCachedFileHandle.InnerRead", Dest, BytesToRead); }
	bool InnerSeek(unsigned __int64 Pos) { return NativeCall<bool, unsigned __int64>(this, "FCachedFileHandle.InnerSeek", Pos); }
	bool Read(char * Destination, __int64 BytesToRead) { return NativeCall<bool, char *, __int64>(this, "FCachedFileHandle.Read", Destination, BytesToRead); }
	bool Seek(__int64 NewPosition) { return NativeCall<bool, __int64>(this, "FCachedFileHandle.Seek", NewPosition); }
	bool SeekFromEnd(__int64 NewPositionRelativeToEnd) { return NativeCall<bool, __int64>(this, "FCachedFileHandle.SeekFromEnd", NewPositionRelativeToEnd); }
	bool Write(const char * Source, __int64 BytesToWrite) { return NativeCall<bool, const char *, __int64>(this, "FCachedFileHandle.Write", Source, BytesToWrite); }
};

