#pragma once

#include "BaseDeclarations.h"
struct FBoolConfigValueHelper
{
	char __padding[0x1L];
	bool& bValueField() { return *GetNativePointerField<bool*>(this, "FBoolConfigValueHelper.bValue"); }
};

