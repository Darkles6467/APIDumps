#pragma once

#include "BaseDeclarations.h"
#include "FMalloc.h"
#include "FExec.h"

struct FMallocDebug : FMalloc
{
	char __padding[0x30L];
	unsigned __int64& TotalAllocationSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocDebug.TotalAllocationSize"); }
	unsigned __int64& TotalWasteSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocDebug.TotalWasteSize"); }
	unsigned __int64& LowestAddressField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocDebug.LowestAddress"); }
	unsigned __int64& HighestAddressField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocDebug.HighestAddress"); }
	bool& bFirstCallField() { return *GetNativePointerField<bool*>(this, "FMallocDebug.bFirstCall"); }
};

