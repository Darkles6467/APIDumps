#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCopySceneColorToCubeFacePS : FGlobalShader
{
	char __padding[0x88L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FCopySceneColorToCubeFacePS.DeferredParameters"); }

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FCopySceneColorToCubeFacePS.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCopySceneColorToCubeFacePS.Serialize", Ar); }
};

