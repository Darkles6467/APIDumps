#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessLensFlareBasePS : FGlobalShader
{
	char __padding[0xc8L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessLensFlareBasePS.PostprocessParameter"); }

	// Functions

};

