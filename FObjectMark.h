#pragma once

#include "BaseDeclarations.h"
struct FObjectMark
{
	char __padding[0x4L];
	EObjectMark& MarksField() { return *GetNativePointerField<EObjectMark*>(this, "FObjectMark.Marks"); }
};

