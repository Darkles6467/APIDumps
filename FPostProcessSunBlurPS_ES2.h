#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessSunBlurPS_ES2 : FGlobalShader
{
	char __padding[0xc8L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessSunBlurPS_ES2.PostprocessParameter"); }

	// Functions

};

