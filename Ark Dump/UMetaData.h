#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMetaData : UObject
{
	char __padding[0x50L];

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UMetaData.Serialize", Ar); }
};

