#pragma once

#include "BaseDeclarations.h"
#include "IFileHandle.h"

struct FFileHandleWindows : IFileHandle
{
	char __padding[0x8L];
	void * FileHandleField() { return GetNativePointerField<void *>(this, "FFileHandleWindows.FileHandle"); }

	// Functions

	bool Read(char * Destination, __int64 BytesToRead) { return NativeCall<bool, char *, __int64>(this, "FFileHandleWindows.Read", Destination, BytesToRead); }
	bool Seek(__int64 NewPosition) { return NativeCall<bool, __int64>(this, "FFileHandleWindows.Seek", NewPosition); }
	bool SeekFromEnd(__int64 NewPositionRelativeToEnd) { return NativeCall<bool, __int64>(this, "FFileHandleWindows.SeekFromEnd", NewPositionRelativeToEnd); }
	__int64 Tell() { return NativeCall<__int64>(this, "FFileHandleWindows.Tell"); }
	bool Write(const char * Source, __int64 BytesToWrite) { return NativeCall<bool, const char *, __int64>(this, "FFileHandleWindows.Write", Source, BytesToWrite); }
};

