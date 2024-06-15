#pragma once

#include "BaseDeclarations.h"
struct FUint32toUint64ID
{

	// Functions

	static unsigned __int64 CombinedNumber(unsigned int ItemID1, unsigned int ItemID2) { return NativeCall<unsigned __int64, unsigned int, unsigned int>(nullptr, "FUint32toUint64ID.CombinedNumber", ItemID1, ItemID2); }
};

