#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"
#include "FCompressedChunk.h"

struct FArchiveProxy : FArchive
{
	char __padding[0x8L];

	// Functions

	bool AtEnd() { return NativeCall<bool>(this, "FArchiveProxy.AtEnd"); }
	void AttachBulkData(UObject * Owner, FUntypedBulkData * BulkData) { NativeCall<void, UObject *, FUntypedBulkData *>(this, "FArchiveProxy.AttachBulkData", Owner, BulkData); }
	bool Close() { return NativeCall<bool>(this, "FArchiveProxy.Close"); }
	void CountBytes(unsigned __int64 InNum, unsigned __int64 InMax) { NativeCall<void, unsigned __int64, unsigned __int64>(this, "FArchiveProxy.CountBytes", InNum, InMax); }
	void DetachBulkData(FUntypedBulkData * BulkData, bool bEnsureBulkDataIsLoaded) { NativeCall<void, FUntypedBulkData *, bool>(this, "FArchiveProxy.DetachBulkData", BulkData, bEnsureBulkDataIsLoaded); }
	void Flush() { NativeCall<void>(this, "FArchiveProxy.Flush"); }
	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FArchiveProxy.GetArchiveName", result); }
	bool GetError() { return NativeCall<bool>(this, "FArchiveProxy.GetError"); }
	bool IsCloseComplete(bool * bHasError) { return NativeCall<bool, bool *>(this, "FArchiveProxy.IsCloseComplete", bHasError); }
	void MarkScriptSerializationEnd(UObject * Obj) { NativeCall<void, UObject *>(this, "FArchiveProxy.MarkScriptSerializationEnd", Obj); }
	void MarkScriptSerializationStart(UObject * Obj) { NativeCall<void, UObject *>(this, "FArchiveProxy.MarkScriptSerializationStart", Obj); }
	bool Precache(__int64 PrecacheOffset, __int64 PrecacheSize) { return NativeCall<bool, __int64, __int64>(this, "FArchiveProxy.Precache", PrecacheOffset, PrecacheSize); }
	void Preload(UObject * Object) { NativeCall<void, UObject *>(this, "FArchiveProxy.Preload", Object); }
	void SerializeBits(void * Bits, __int64 LengthBits) { NativeCall<void, void *, __int64>(this, "FArchiveProxy.SerializeBits", Bits, LengthBits); }
	void SerializeInt(unsigned int * Value, unsigned int Max) { NativeCall<void, unsigned int *, unsigned int>(this, "FArchiveProxy.SerializeInt", Value, Max); }
	bool SetCompressionMap(TArray<FCompressedChunk> * CompressedChunks, ECompressionFlags CompressionFlags) { return NativeCall<bool, TArray<FCompressedChunk> *, ECompressionFlags>(this, "FArchiveProxy.SetCompressionMap", CompressedChunks, CompressionFlags); }
	__int64 TotalSize() { return NativeCall<__int64>(this, "FArchiveProxy.TotalSize"); }
};

struct FShaderSaveArchive : FArchiveProxy
{
	char __padding[0x20L];
	FSerializationHistoryTraversalState& HistoryTraversalStateField() { return *GetNativePointerField<FSerializationHistoryTraversalState*>(this, "FShaderSaveArchive.HistoryTraversalState"); }
	FSerializationHistory * HistoryField() { return GetNativePointerField<FSerializationHistory *>(this, "FShaderSaveArchive.History"); }
	__int64& OriginalPositionField() { return *GetNativePointerField<__int64*>(this, "FShaderSaveArchive.OriginalPosition"); }

	// Functions

	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "FShaderSaveArchive.Seek", InPos); }
	void Serialize(void * V, __int64 Length) { NativeCall<void, void *, __int64>(this, "FShaderSaveArchive.Serialize", V, Length); }
};

