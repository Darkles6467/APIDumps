#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FChildGroupedStreamAsyncArchive : FArchive
{
	char __padding[0x20L];
	FVirtualFile * VirtualFileField() { return GetNativePointerField<FVirtualFile *>(this, "FChildGroupedStreamAsyncArchive.VirtualFile"); }
	__int64& CurrentPosField() { return *GetNativePointerField<__int64*>(this, "FChildGroupedStreamAsyncArchive.CurrentPos"); }
	bool& bWasILastOperationField() { return *GetNativePointerField<bool*>(this, "FChildGroupedStreamAsyncArchive.bWasILastOperation"); }
};

