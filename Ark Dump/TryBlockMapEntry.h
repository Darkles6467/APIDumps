#pragma once

#include "BaseDeclarations.h"
struct TryBlockMapEntry
{
	char __padding[0x14L];
	None& tryLowField() { return *GetNativePointerField<None*>(this, "TryBlockMapEntry.tryLow"); }
	None& tryHighField() { return *GetNativePointerField<None*>(this, "TryBlockMapEntry.tryHigh"); }
	None& catchHighField() { return *GetNativePointerField<None*>(this, "TryBlockMapEntry.catchHigh"); }
	None& nCatchesField() { return *GetNativePointerField<None*>(this, "TryBlockMapEntry.nCatches"); }
	None& pHandlerArrayField() { return *GetNativePointerField<None*>(this, "TryBlockMapEntry.pHandlerArray"); }
};

