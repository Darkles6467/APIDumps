#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FLandscapeMaskCS : FGlobalShader
{
	char __padding[0x18L];
	FRWShaderParameter& LandscapeInfoBufferInformationParameterField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FLandscapeMaskCS.LandscapeInfoBufferInformationParameter"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FLandscapeMaskCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FRHITexture2D * InLandscapeTexture, const FIntRect * TileData) { NativeCall<void, FRHICommandList *, FSceneView *, FRHITexture2D *, const FIntRect *>(this, "FLandscapeMaskCS.SetParameters", RHICmdList, View, InLandscapeTexture, TileData); }
};

