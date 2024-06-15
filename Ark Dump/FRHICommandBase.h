#pragma once

#include "BaseDeclarations.h"
struct FRHICommandBase
{
	char __padding[0x10L];
	FRHICommandBase * NextField() { return GetNativePointerField<FRHICommandBase *>(this, "FRHICommandBase.Next"); }
};

