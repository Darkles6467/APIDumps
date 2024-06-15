#pragma once

#include "BaseDeclarations.h"
#include "FFileStreamerBase.h"
#include "FArchive.h"

struct FFileStreamReader : FFileStreamerBase
{
	char __padding[0x20L];
	__int64& FoundTotalSizeField() { return *GetNativePointerField<__int64*>(this, "FFileStreamReader.FoundTotalSize"); }
	__int64& CurrentPositionField() { return *GetNativePointerField<__int64*>(this, "FFileStreamReader.CurrentPosition"); }
};

