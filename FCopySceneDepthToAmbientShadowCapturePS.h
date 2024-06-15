#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCopySceneDepthToAmbientShadowCapturePS : FGlobalShader
{
	char __padding[0x80L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FCopySceneDepthToAmbientShadowCapturePS.DeferredParameters"); }

	// Functions

};

