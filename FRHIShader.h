#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FRHIShader : FRHIResource
{
	char __padding[0x18L];
	FSHAHash& HashField() { return *GetNativePointerField<FSHAHash*>(this, "FRHIShader.Hash"); }
};

