#pragma once

#include "BaseDeclarations.h"
struct FShaderResourceId
{
	char __padding[0x18L];
	FSHAHash& OutputHashField() { return *GetNativePointerField<FSHAHash*>(this, "FShaderResourceId.OutputHash"); }
};

