#pragma once

#include "BaseDeclarations.h"
#include "IDynamicRHIModule.h"
#include "IModuleInterface.h"

struct FOpenGLDynamicRHIModule : IDynamicRHIModule
{

	// Functions

	bool IsSupported() { return NativeCall<bool>(this, "FOpenGLDynamicRHIModule.IsSupported"); }
};

