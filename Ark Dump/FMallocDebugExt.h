#pragma once

#include "BaseDeclarations.h"
#include "FMalloc.h"
#include "FExec.h"

struct FMallocDebugExt : FMalloc
{
	char __padding[0x20L];
	unsigned __int64& TotalAllocationSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocDebugExt.TotalAllocationSize"); }
	unsigned __int64& TotalWasteSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocDebugExt.TotalWasteSize"); }
};

