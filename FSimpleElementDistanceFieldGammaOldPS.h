#pragma once

#include "BaseDeclarations.h"
#include "FSimpleElementMaskedGammaBasePS.h"
#include "FSimpleElementGammaBasePS.h"
#include "FSimpleElementPS.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FSimpleElementDistanceFieldGammaOldPS : FSimpleElementMaskedGammaBasePS
{
	char __padding[0x40L];

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, const FTexture * Texture, float Gamma, float ClipRef, float SmoothWidthValue, bool EnableShadowValue, const FVector2D * ShadowDirectionValue, const FLinearColor * ShadowColorValue, float ShadowSmoothWidthValue, const FDepthFieldGlowInfo * GlowInfo, ESimpleElementBlendMode BlendMode) { NativeCall<void, FRHICommandList *, const FTexture *, float, float, float, bool, const FVector2D *, const FLinearColor *, float, const FDepthFieldGlowInfo *, ESimpleElementBlendMode>(this, "FSimpleElementDistanceFieldGammaOldPS.SetParameters", RHICmdList, Texture, Gamma, ClipRef, SmoothWidthValue, EnableShadowValue, ShadowDirectionValue, ShadowColorValue, ShadowSmoothWidthValue, GlowInfo, BlendMode); }
};

