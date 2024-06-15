#pragma once

#include "BaseDeclarations.h"
struct FLayerBlendInput
{
	char __padding[0x98L];
	FName& LayerNameField() { return *GetNativePointerField<FName*>(this, "FLayerBlendInput.LayerName"); }
	TEnumAsByte<enum ELandscapeLayerBlendType>& BlendTypeField() { return *GetNativePointerField<TEnumAsByte<enum ELandscapeLayerBlendType>*>(this, "FLayerBlendInput.BlendType"); }
	FExpressionInput& LayerInputField() { return *GetNativePointerField<FExpressionInput*>(this, "FLayerBlendInput.LayerInput"); }
	FExpressionInput& HeightInputField() { return *GetNativePointerField<FExpressionInput*>(this, "FLayerBlendInput.HeightInput"); }
	float& PreviewWeightField() { return *GetNativePointerField<float*>(this, "FLayerBlendInput.PreviewWeight"); }
	FVector& ConstLayerInputField() { return *GetNativePointerField<FVector*>(this, "FLayerBlendInput.ConstLayerInput"); }
	float& ConstHeightInputField() { return *GetNativePointerField<float*>(this, "FLayerBlendInput.ConstHeightInput"); }

	// Functions

	FLayerBlendInput * operator=(const FLayerBlendInput * __that) { return NativeCall<FLayerBlendInput *, const FLayerBlendInput *>(this, "FLayerBlendInput.operator=", __that); }
};

