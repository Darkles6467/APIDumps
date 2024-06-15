#pragma once

#include "BaseDeclarations.h"
struct FBoolAnnotation
{
	char __padding[0x1L];
	bool& MarkField() { return *GetNativePointerField<bool*>(this, "FBoolAnnotation.Mark"); }
};

