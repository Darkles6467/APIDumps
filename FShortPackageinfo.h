#pragma once

#include "BaseDeclarations.h"
struct FShortPackageinfo
{
	char __padding[0x18L];
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "FShortPackageinfo.Guid"); }
	__int64& FileSizeField() { return *GetNativePointerField<__int64*>(this, "FShortPackageinfo.FileSize"); }
};

