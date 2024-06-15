#pragma once

#include "BaseDeclarations.h"
struct FD3DFloatR11G11B10
{
	char __padding[0x4L];

	// Functions

	FLinearColor * operator FLinearColor(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "FD3DFloatR11G11B10.operator FLinearColor", result); }
};

