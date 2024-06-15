#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FDuplicateDataWriter : FArchiveUObject
{
	char __padding[0x38L];
	TArray<unsigned char> * ObjectDataField() { return GetNativePointerField<TArray<unsigned char> *>(this, "FDuplicateDataWriter.ObjectData"); }
	__int64& OffsetField() { return *GetNativePointerField<__int64*>(this, "FDuplicateDataWriter.Offset"); }
	EObjectFlags& FlagMaskField() { return *GetNativePointerField<EObjectFlags*>(this, "FDuplicateDataWriter.FlagMask"); }
	EObjectFlags& ApplyFlagsField() { return *GetNativePointerField<EObjectFlags*>(this, "FDuplicateDataWriter.ApplyFlags"); }
	FObjectInstancingGraph * InstanceGraphField() { return GetNativePointerField<FObjectInstancingGraph *>(this, "FDuplicateDataWriter.InstanceGraph"); }

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FDuplicateDataWriter.GetArchiveName", result); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "FDuplicateDataWriter.Seek", InPos); }
	void Serialize(void * Data, __int64 Num) { NativeCall<void, void *, __int64>(this, "FDuplicateDataWriter.Serialize", Data, Num); }
};

