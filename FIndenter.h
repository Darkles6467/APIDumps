#pragma once

#include "BaseDeclarations.h"
struct FIndenter
{
	char __padding[0x8L];
	float * IndentField() { return GetNativePointerField<float *>(this, "FIndenter.Indent"); }
};

