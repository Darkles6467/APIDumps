#pragma once

#include "BaseDeclarations.h"
struct FObjectMemoryUsage
{
	char __padding[0x50L];
	unsigned __int64& InclusiveMemoryUsageField() { return *GetNativePointerField<unsigned __int64*>(this, "FObjectMemoryUsage.InclusiveMemoryUsage"); }
	unsigned __int64& ExclusiveMemoryUsageField() { return *GetNativePointerField<unsigned __int64*>(this, "FObjectMemoryUsage.ExclusiveMemoryUsage"); }
	unsigned __int64& InclusiveResourceSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "FObjectMemoryUsage.InclusiveResourceSize"); }
	unsigned __int64& ExclusiveResourceSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "FObjectMemoryUsage.ExclusiveResourceSize"); }
	unsigned int& FlagsField() { return *GetNativePointerField<unsigned int*>(this, "FObjectMemoryUsage.Flags"); }
};

