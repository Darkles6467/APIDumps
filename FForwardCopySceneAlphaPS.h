#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FForwardCopySceneAlphaPS : FGlobalShader
{
	char __padding[0x28L];
	FSceneTextureShaderParameters& SceneTextureParametersField() { return *GetNativePointerField<FSceneTextureShaderParameters*>(this, "FForwardCopySceneAlphaPS.SceneTextureParameters"); }

	// Functions

};

