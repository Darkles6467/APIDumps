#pragma once

#include "BaseDeclarations.h"
struct FStoredID
{
	char __padding[0x8L];
	StoredID& IDField() { return *GetNativePointerField<StoredID*>(this, "FStoredID.ID"); }
};

