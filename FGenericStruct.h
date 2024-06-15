#pragma once

#include "BaseDeclarations.h"
struct FGenericStruct
{
	char __padding[0x4L];
	int& DataField() { return *GetNativePointerField<int*>(this, "FGenericStruct.Data"); }

	// Functions

};

