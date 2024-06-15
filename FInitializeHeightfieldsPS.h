#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FInitializeHeightfieldsPS : FGlobalShader
{
	char __padding[0x10L];
	FHeightfieldTextureParameters& HeightfieldTextureParametersField() { return *GetNativePointerField<FHeightfieldTextureParameters*>(this, "FInitializeHeightfieldsPS.HeightfieldTextureParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FInitializeHeightfieldsPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, UTexture2D * HeightfieldTextureValue, UTexture2D * VisibilityTextureValue) { NativeCall<void, FRHICommandList *, FSceneView *, UTexture2D *, UTexture2D *>(this, "FInitializeHeightfieldsPS.SetParameters", RHICmdList, View, HeightfieldTextureValue, VisibilityTextureValue); }
};

