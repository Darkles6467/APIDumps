#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FFileStreamerBase : FArchive
{
	char __padding[0x10L];
	FGroupedDirectStreamAsyncArchive * ParentField() { return GetNativePointerField<FGroupedDirectStreamAsyncArchive *>(this, "FFileStreamerBase.Parent"); }
	bool& bHasSwappedToBaseField() { return *GetNativePointerField<bool*>(this, "FFileStreamerBase.bHasSwappedToBase"); }
};

