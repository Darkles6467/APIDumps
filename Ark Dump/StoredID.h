#pragma once

#include "BaseDeclarations.h"
struct StoredID
{
	char __padding[0x8L];
	unsigned __int64& BIDField() { return *GetNativePointerField<unsigned __int64*>(this, "StoredID.BID"); }
	unsigned int& SIDField() { return *GetNativePointerField<unsigned int*>(this, "StoredID.SID"); }
};

