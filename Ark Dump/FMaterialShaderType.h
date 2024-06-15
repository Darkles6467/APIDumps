#pragma once

#include "BaseDeclarations.h"
#include "FShaderType.h"

struct FMaterialShaderType : FShaderType
{
	char __padding[0x20L];

	// Functions

	void CompiledShaderInitializerType() { NativeCall<void>(this, "FMaterialShaderType.CompiledShaderInitializerType"); }
};

