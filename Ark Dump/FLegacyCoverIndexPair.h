#pragma once

#include "BaseDeclarations.h"
struct FLegacyCoverIndexPair
{
	char __padding[0x20L];
	TLazyObjectPtr<ACoverLink>& CoverRefField() { return *GetNativePointerField<TLazyObjectPtr<ACoverLink>*>(this, "FLegacyCoverIndexPair.CoverRef"); }
	char& SlotIdxField() { return *GetNativePointerField<char*>(this, "FLegacyCoverIndexPair.SlotIdx"); }
};

