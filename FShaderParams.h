#pragma once

#include "BaseDeclarations.h"
struct FShaderParams
{
	char __padding[0x10L];
	FVector4& PixelParamsField() { return *GetNativePointerField<FVector4*>(this, "FShaderParams.PixelParams"); }
};

