#pragma once

#include "BaseDeclarations.h"
struct FRefCountedObject
{
	char __padding[0x10L];
	int& NumRefsField() { return *GetNativePointerField<int*>(this, "FRefCountedObject.NumRefs"); }
};

