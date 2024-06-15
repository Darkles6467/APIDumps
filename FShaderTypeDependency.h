#pragma once

#include "BaseDeclarations.h"
struct FShaderTypeDependency
{
	char __padding[0x20L];
	FSHAHash& SourceHashField() { return *GetNativePointerField<FSHAHash*>(this, "FShaderTypeDependency.SourceHash"); }
};

