#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FArchiveShowReferences : FArchiveUObject
{
	char __padding[0x38L];
	bool& DidRefField() { return *GetNativePointerField<bool*>(this, "FArchiveShowReferences.DidRef"); }
};

