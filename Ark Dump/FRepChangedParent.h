#pragma once

#include "BaseDeclarations.h"
struct FRepChangedParent
{
	char __padding[0x18L];
	TArray<unsigned short>& ChangedField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FRepChangedParent.Changed"); }
};

