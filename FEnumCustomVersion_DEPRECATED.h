#pragma once

#include "BaseDeclarations.h"
struct FEnumCustomVersion_DEPRECATED
{
	char __padding[0x8L];
	unsigned int& TagField() { return *GetNativePointerField<unsigned int*>(this, "FEnumCustomVersion_DEPRECATED.Tag"); }
	int& VersionField() { return *GetNativePointerField<int*>(this, "FEnumCustomVersion_DEPRECATED.Version"); }
};

