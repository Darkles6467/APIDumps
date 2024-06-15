#pragma once

#include "BaseDeclarations.h"
struct FPoly
{
	char __padding[0x150L];
	FVector& BaseField() { return *GetNativePointerField<FVector*>(this, "FPoly.Base"); }
	FVector& NormalField() { return *GetNativePointerField<FVector*>(this, "FPoly.Normal"); }
	FVector& TextureUField() { return *GetNativePointerField<FVector*>(this, "FPoly.TextureU"); }
	FVector& TextureVField() { return *GetNativePointerField<FVector*>(this, "FPoly.TextureV"); }
	TArray<FVector,TInlineAllocator<16> >& VerticesField() { return *GetNativePointerField<TArray<FVector,TInlineAllocator<16> >*>(this, "FPoly.Vertices"); }
	unsigned int& PolyFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FPoly.PolyFlags"); }
	FName& RulesetVariationField() { return *GetNativePointerField<FName*>(this, "FPoly.RulesetVariation"); }
	FName& ItemNameField() { return *GetNativePointerField<FName*>(this, "FPoly.ItemName"); }
	int& iLinkField() { return *GetNativePointerField<int*>(this, "FPoly.iLink"); }
	int& iBrushPolyField() { return *GetNativePointerField<int*>(this, "FPoly.iBrushPoly"); }
	unsigned int& SmoothingMaskField() { return *GetNativePointerField<unsigned int*>(this, "FPoly.SmoothingMask"); }
	float& LightMapScaleField() { return *GetNativePointerField<float*>(this, "FPoly.LightMapScale"); }
	FLightmassPrimitiveSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassPrimitiveSettings*>(this, "FPoly.LightmassSettings"); }

	// Functions

	void Init() { NativeCall<void>(this, "FPoly.Init"); }
};

