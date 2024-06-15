#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FDuplicateDataReader : FArchiveUObject
{
	char __padding[0x18L];
	const TArray<unsigned char> * ObjectDataField() { return GetNativePointerField<const TArray<unsigned char> *>(this, "FDuplicateDataReader.ObjectData"); }
	int& OffsetField() { return *GetNativePointerField<int*>(this, "FDuplicateDataReader.Offset"); }

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FDuplicateDataReader.GetArchiveName", result); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "FDuplicateDataReader.Seek", InPos); }
	void Serialize(void * Data, __int64 Num) { NativeCall<void, void *, __int64>(this, "FDuplicateDataReader.Serialize", Data, Num); }
	void SerializeFail() { NativeCall<void>(this, "FDuplicateDataReader.SerializeFail"); }
	__int64 Tell() { return NativeCall<__int64>(this, "FDuplicateDataReader.Tell"); }
	__int64 TotalSize() { return NativeCall<__int64>(this, "FDuplicateDataReader.TotalSize"); }
};

