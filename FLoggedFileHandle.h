#pragma once

#include "BaseDeclarations.h"
#include "IFileHandle.h"

struct FLoggedFileHandle : IFileHandle
{
	char __padding[0x18L];
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "FLoggedFileHandle.Filename"); }

	// Functions

	bool Read(char * Destination, __int64 BytesToRead) { return NativeCall<bool, char *, __int64>(this, "FLoggedFileHandle.Read", Destination, BytesToRead); }
	bool Seek(__int64 NewPosition) { return NativeCall<bool, __int64>(this, "FLoggedFileHandle.Seek", NewPosition); }
	bool SeekFromEnd(__int64 NewPositionRelativeToEnd) { return NativeCall<bool, __int64>(this, "FLoggedFileHandle.SeekFromEnd", NewPositionRelativeToEnd); }
	__int64 Size() { return NativeCall<__int64>(this, "FLoggedFileHandle.Size"); }
	__int64 Tell() { return NativeCall<__int64>(this, "FLoggedFileHandle.Tell"); }
	bool Write(const char * Source, __int64 BytesToWrite) { return NativeCall<bool, const char *, __int64>(this, "FLoggedFileHandle.Write", Source, BytesToWrite); }
};

