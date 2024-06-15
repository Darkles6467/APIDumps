#pragma once

#include "BaseDeclarations.h"
struct FSteamUserCloudData
{
	char __padding[0x80L];

	// Functions

	bool ClearFiles() { return NativeCall<bool>(this, "FSteamUserCloudData.ClearFiles"); }
};

