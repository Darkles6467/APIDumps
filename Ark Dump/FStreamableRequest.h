#pragma once

#include "BaseDeclarations.h"
struct FStreamableRequest
{
	char __padding[0x10L];
	int& StreamablesReferencedField() { return *GetNativePointerField<int*>(this, "FStreamableRequest.StreamablesReferenced"); }
};

