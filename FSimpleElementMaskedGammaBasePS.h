#pragma once

#include "BaseDeclarations.h"
#include "FSimpleElementGammaBasePS.h"

struct FSimpleElementMaskedGammaBasePS : FSimpleElementGammaBasePS
{
	char __padding[0x8L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSimpleElementMaskedGammaBasePS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FTexture * Texture, float Gamma, float ClipRefValue, ESimpleElementBlendMode BlendMode) { NativeCall<void, FRHICommandList *, const FTexture *, float, float, ESimpleElementBlendMode>(this, "FSimpleElementMaskedGammaBasePS.SetParameters", RHICmdList, Texture, Gamma, ClipRefValue, BlendMode); }
};

