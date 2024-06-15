#pragma once

#include "BaseDeclarations.h"
struct FMaterialInstanceUsedWithOverride
{
	char __padding[0x4L];

	// Functions

	void UpdateHash(FSHA1 * HashState) { NativeCall<void, FSHA1 *>(this, "FMaterialInstanceUsedWithOverride.UpdateHash", HashState); }
};

