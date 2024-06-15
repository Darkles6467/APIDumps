#pragma once

#include "BaseDeclarations.h"
struct FNavPathType
{
	char __padding[0x4L];
	unsigned int& IdField() { return *GetNativePointerField<unsigned int*>(this, "FNavPathType.Id"); }
};

