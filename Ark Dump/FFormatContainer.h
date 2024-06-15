#pragma once

#include "BaseDeclarations.h"
struct FFormatContainer
{
	char __padding[0x50L];

	// Functions

	FByteBulkData * GetFormat(FName Format) { return NativeCall<FByteBulkData *, FName>(this, "FFormatContainer.GetFormat", Format); }
	void Serialize(FArchive * Ar, UObject * Owner, const TArray<FName> * FormatsToSave) { NativeCall<void, FArchive *, UObject *, const TArray<FName> *>(this, "FFormatContainer.Serialize", Ar, Owner, FormatsToSave); }
	bool Contains(FName Format) { return NativeCall<bool, FName>(this, "FFormatContainer.Contains", Format); }
	void FlushData() { NativeCall<void>(this, "FFormatContainer.FlushData"); }
};

