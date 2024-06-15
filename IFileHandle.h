#pragma once

#include "BaseDeclarations.h"
struct IFileHandle
{
	char __padding[0x8L];

	// Functions

	__int64 Size() { return NativeCall<__int64>(this, "IFileHandle.Size"); }
};

