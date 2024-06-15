#pragma once

#include "BaseDeclarations.h"
struct FStructOnScope
{
	char __padding[0x10L];
	char * SampleStructMemoryField() { return GetNativePointerField<char *>(this, "FStructOnScope.SampleStructMemory"); }
};

