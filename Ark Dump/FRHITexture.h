#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FRHITexture : FRHIResource
{
	char __padding[0x50L];
	FClearValueBinding& ClearValueField() { return *GetNativePointerField<FClearValueBinding*>(this, "FRHITexture.ClearValue"); }
	unsigned int& NumMipsField() { return *GetNativePointerField<unsigned int*>(this, "FRHITexture.NumMips"); }
	unsigned int& NumSamplesField() { return *GetNativePointerField<unsigned int*>(this, "FRHITexture.NumSamples"); }
	EPixelFormat& FormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FRHITexture.Format"); }
	unsigned int& FlagsField() { return *GetNativePointerField<unsigned int*>(this, "FRHITexture.Flags"); }
	FLastRenderTimeContainer * LastRenderTimeField() { return GetNativePointerField<FLastRenderTimeContainer *>(this, "FRHITexture.LastRenderTime"); }
	FLastRenderTimeContainer& DefaultLastRenderTimeField() { return *GetNativePointerField<FLastRenderTimeContainer*>(this, "FRHITexture.DefaultLastRenderTime"); }
	FName& TextureNameField() { return *GetNativePointerField<FName*>(this, "FRHITexture.TextureName"); }
};

