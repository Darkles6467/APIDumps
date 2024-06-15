#pragma once

#include "BaseDeclarations.h"
struct FGCReferenceFixedArrayTokenHelper
{
	char __padding[0x10L];
	FGCReferenceTokenStream * ReferenceTokenStreamField() { return GetNativePointerField<FGCReferenceTokenStream *>(this, "FGCReferenceFixedArrayTokenHelper.ReferenceTokenStream"); }
	int& CountField() { return *GetNativePointerField<int*>(this, "FGCReferenceFixedArrayTokenHelper.Count"); }
};

