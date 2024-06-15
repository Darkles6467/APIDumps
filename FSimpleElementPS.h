#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FRHITexture2D.h"

struct FSimpleElementPS : FGlobalShader
{
	char __padding[0x28L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSimpleElementPS.Serialize", Ar); }
	void SetEditorCompositingParameters(FRHICommandList * RHICmdList, FSceneView * View, TRefCountPtr<FRHITexture2D> DepthTexture) { NativeCall<void, FRHICommandList *, FSceneView *, TRefCountPtr<FRHITexture2D>>(this, "FSimpleElementPS.SetEditorCompositingParameters", RHICmdList, View, DepthTexture); }
	void SetParameters(FRHICommandList * RHICmdList, const FTexture * TextureValue) { NativeCall<void, FRHICommandList *, const FTexture *>(this, "FSimpleElementPS.SetParameters", RHICmdList, TextureValue); }
	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FSimpleElementPS.GetTypeSize"); }
};

