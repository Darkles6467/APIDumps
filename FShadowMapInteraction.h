#pragma once

#include "BaseDeclarations.h"
struct FShadowMapInteraction
{
	char __padding[0x28L];
	EShadowMapInteractionType& TypeField() { return *GetNativePointerField<EShadowMapInteractionType*>(this, "FShadowMapInteraction.Type"); }
	UShadowMapTexture2D * ShadowTextureField() { return GetNativePointerField<UShadowMapTexture2D *>(this, "FShadowMapInteraction.ShadowTexture"); }
	FVector2D& CoordinateScaleField() { return *GetNativePointerField<FVector2D*>(this, "FShadowMapInteraction.CoordinateScale"); }
	FVector2D& CoordinateBiasField() { return *GetNativePointerField<FVector2D*>(this, "FShadowMapInteraction.CoordinateBias"); }
	FieldArray<bool, 4> bChannelValidField() { return {this, "FShadowMapInteraction.bChannelValid"}; }

	// Functions

};

