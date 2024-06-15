#pragma once

#include "BaseDeclarations.h"
#include "FUntypedBulkData.h"

struct FByteBulkData : FUntypedBulkData
{

	// Functions

	void SerializeElement(FArchive * Ar, void * Data, int ElementIndex) { NativeCall<void, FArchive *, void *, int>(this, "FByteBulkData.SerializeElement", Ar, Data, ElementIndex); }
};

