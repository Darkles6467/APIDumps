#pragma once

#include "BaseDeclarations.h"
struct FObjectExportSeekFreeSorter
{
	char __padding[0x118L];
	FExportReferenceSorter& SortArchiveField() { return *GetNativePointerField<FExportReferenceSorter*>(this, "FObjectExportSeekFreeSorter.SortArchive"); }
};

