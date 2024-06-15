#pragma once

#include "BaseDeclarations.h"
struct FDepthFieldGlowInfo
{
	char __padding[0x2cL];
	FLinearColor& GlowColorField() { return *GetNativePointerField<FLinearColor*>(this, "FDepthFieldGlowInfo.GlowColor"); }
	FVector2D& GlowOuterRadiusField() { return *GetNativePointerField<FVector2D*>(this, "FDepthFieldGlowInfo.GlowOuterRadius"); }
	FVector2D& GlowInnerRadiusField() { return *GetNativePointerField<FVector2D*>(this, "FDepthFieldGlowInfo.GlowInnerRadius"); }
	float& ScreenPercentageLerpScalarField() { return *GetNativePointerField<float*>(this, "FDepthFieldGlowInfo.ScreenPercentageLerpScalar"); }

	// Functions

	bool operator==(const FDepthFieldGlowInfo * Other) { return NativeCall<bool, const FDepthFieldGlowInfo *>(this, "FDepthFieldGlowInfo.operator==", Other); }
};

