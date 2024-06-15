#pragma once

#include "BaseDeclarations.h"
struct FKCachedPerTriData
{
	char __padding[0x10L];
	TArray<unsigned char>& CachedPerTriDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FKCachedPerTriData.CachedPerTriData"); }
};

