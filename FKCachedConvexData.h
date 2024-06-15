#pragma once

#include "BaseDeclarations.h"
struct FKCachedConvexData
{
	char __padding[0x10L];
	TArray<FKCachedConvexDataElement>& CachedConvexElementsField() { return *GetNativePointerField<TArray<FKCachedConvexDataElement>*>(this, "FKCachedConvexData.CachedConvexElements"); }
};

