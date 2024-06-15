#pragma once

#include "BaseDeclarations.h"
#include "FSimpleElementPS.h"

struct FSimpleElementGammaBasePS : FSimpleElementPS
{
	char __padding[0x8L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSimpleElementGammaBasePS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FTexture * Texture, float GammaValue, ESimpleElementBlendMode BlendMode) { NativeCall<void, FRHICommandList *, const FTexture *, float, ESimpleElementBlendMode>(this, "FSimpleElementGammaBasePS.SetParameters", RHICmdList, Texture, GammaValue, BlendMode); }
};

