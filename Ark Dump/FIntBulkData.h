#pragma once

#include "BaseDeclarations.h"
#include "FUntypedBulkData.h"

struct FIntBulkData : FUntypedBulkData
{

	// Functions

	void SerializeElement(FArchive * Ar, void * Data, int ElementIndex) { NativeCall<void, FArchive *, void *, int>(this, "FIntBulkData.SerializeElement", Ar, Data, ElementIndex); }
};

