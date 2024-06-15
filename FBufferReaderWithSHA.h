#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FBufferReader : FArchive
{
	char __padding[0x20L];
	void * ReaderDataField() { return GetNativePointerField<void *>(this, "FBufferReader.ReaderData"); }
	__int64& ReaderPosField() { return *GetNativePointerField<__int64*>(this, "FBufferReader.ReaderPos"); }
	__int64& ReaderSizeField() { return *GetNativePointerField<__int64*>(this, "FBufferReader.ReaderSize"); }
	bool& bFreeOnCloseField() { return *GetNativePointerField<bool*>(this, "FBufferReader.bFreeOnClose"); }

	// Functions

	bool AtEnd() { return NativeCall<bool>(this, "FBufferReader.AtEnd"); }
	bool Close() { return NativeCall<bool>(this, "FBufferReader.Close"); }
	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FBufferReader.GetArchiveName", result); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "FBufferReader.Seek", InPos); }
	void Serialize(void * Data, __int64 Num) { NativeCall<void, void *, __int64>(this, "FBufferReader.Serialize", Data, Num); }
};

struct FBufferReaderWithSHA : FBufferReader
{
	char __padding[0x18L];
	FString& SourcePathnameField() { return *GetNativePointerField<FString*>(this, "FBufferReaderWithSHA.SourcePathname"); }
	bool& bIsUnfoundHashAnErrorField() { return *GetNativePointerField<bool*>(this, "FBufferReaderWithSHA.bIsUnfoundHashAnError"); }

	// Functions

	bool Close() { return NativeCall<bool>(this, "FBufferReaderWithSHA.Close"); }
	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FBufferReaderWithSHA.GetArchiveName", result); }
};

