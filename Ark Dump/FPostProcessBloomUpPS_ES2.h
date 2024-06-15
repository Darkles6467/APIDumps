#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessBloomUpPS_ES2 : FGlobalShader
{
	char __padding[0xd0L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessBloomUpPS_ES2.PostprocessParameter"); }

	// Functions

};

