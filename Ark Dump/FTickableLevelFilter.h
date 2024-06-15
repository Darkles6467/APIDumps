#pragma once

#include "BaseDeclarations.h"
struct FTickableLevelFilter
{

	// Functions

	static bool CanIterateLevel(ULevel * Level) { return NativeCall<bool, ULevel *>(nullptr, "FTickableLevelFilter.CanIterateLevel", Level); }
};

