#pragma once

#include "BaseDeclarations.h"
struct FUntypedBulkData
{
	char __padding[0x48L];
	unsigned int& BulkDataFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FUntypedBulkData.BulkDataFlags"); }
	int& ElementCountField() { return *GetNativePointerField<int*>(this, "FUntypedBulkData.ElementCount"); }
	__int64& BulkDataOffsetInFileField() { return *GetNativePointerField<__int64*>(this, "FUntypedBulkData.BulkDataOffsetInFile"); }
	int& BulkDataSizeOnDiskField() { return *GetNativePointerField<int*>(this, "FUntypedBulkData.BulkDataSizeOnDisk"); }
	void * BulkDataField() { return GetNativePointerField<void *>(this, "FUntypedBulkData.BulkData"); }
	unsigned int& LockStatusField() { return *GetNativePointerField<unsigned int*>(this, "FUntypedBulkData.LockStatus"); }
	bool& bShouldFreeOnEmptyField() { return *GetNativePointerField<bool*>(this, "FUntypedBulkData.bShouldFreeOnEmpty"); }
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "FUntypedBulkData.Filename"); }

	// Functions

	bool CanLoadFromDisk() { return NativeCall<bool>(this, "FUntypedBulkData.CanLoadFromDisk"); }
	void ForceBulkDataResident() { NativeCall<void>(this, "FUntypedBulkData.ForceBulkDataResident"); }
	int GetBulkDataSize() { return NativeCall<int>(this, "FUntypedBulkData.GetBulkDataSize"); }
	void GetCopy(void ** Dest, bool bDiscardInternalCopy) { NativeCall<void, void **, bool>(this, "FUntypedBulkData.GetCopy", Dest, bDiscardInternalCopy); }
	ECompressionFlags GetDecompressionFlags() { return NativeCall<ECompressionFlags>(this, "FUntypedBulkData.GetDecompressionFlags"); }
	bool IsStoredCompressedOnDisk() { return NativeCall<bool>(this, "FUntypedBulkData.IsStoredCompressedOnDisk"); }
	void LoadDataIntoMemory(void * Dest) { NativeCall<void, void *>(this, "FUntypedBulkData.LoadDataIntoMemory", Dest); }
	void * Lock(unsigned int LockFlags) { return NativeCall<void *, unsigned int>(this, "FUntypedBulkData.Lock", LockFlags); }
	const void * LockReadOnly() { return NativeCall<const void *>(this, "FUntypedBulkData.LockReadOnly"); }
	void * Realloc(int InElementCount) { return NativeCall<void *, int>(this, "FUntypedBulkData.Realloc", InElementCount); }
	void RemoveBulkData() { NativeCall<void>(this, "FUntypedBulkData.RemoveBulkData"); }
	void Serialize(FArchive * Ar, UObject * Owner, int Idx) { NativeCall<void, FArchive *, UObject *, int>(this, "FUntypedBulkData.Serialize", Ar, Owner, Idx); }
	void SerializeBulkData(FArchive * Ar, void * Data) { NativeCall<void, FArchive *, void *>(this, "FUntypedBulkData.SerializeBulkData", Ar, Data); }
	void SetBulkDataFlags(unsigned int BulkDataFlagsToSet) { NativeCall<void, unsigned int>(this, "FUntypedBulkData.SetBulkDataFlags", BulkDataFlagsToSet); }
	bool ShouldFreeOnEmpty() { return NativeCall<bool>(this, "FUntypedBulkData.ShouldFreeOnEmpty"); }
	void StoreCompressedOnDisk(ECompressionFlags CompressionFlags) { NativeCall<void, ECompressionFlags>(this, "FUntypedBulkData.StoreCompressedOnDisk", CompressionFlags); }
	void Unlock() { NativeCall<void>(this, "FUntypedBulkData.Unlock"); }
	FString * GetFilename(FString * result) { return NativeCall<FString *, FString *>(this, "FUntypedBulkData.GetFilename", result); }
};

