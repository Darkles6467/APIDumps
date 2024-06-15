#pragma once

#include "BaseDeclarations.h"
#include "FUntypedBulkData.h"

struct FWordBulkData : FUntypedBulkData
{

	// Functions

	void SerializeElement(FArchive * Ar, void * Data, int ElementIndex) { NativeCall<void, FArchive *, void *, int>(this, "FWordBulkData.SerializeElement", Ar, Data, ElementIndex); }
};

