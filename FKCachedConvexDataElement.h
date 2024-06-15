#pragma once

#include "BaseDeclarations.h"
struct FKCachedConvexDataElement
{
	char __padding[0x10L];
	TArray<unsigned char>& ConvexElementDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FKCachedConvexDataElement.ConvexElementData"); }
};

