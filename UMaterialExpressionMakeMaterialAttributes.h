#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionMakeMaterialAttributes : UMaterialExpression
{
	char __padding[0x5e8L];
	FExpressionInput& BaseColorField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.BaseColor"); }
	FExpressionInput& MetallicField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.Metallic"); }
	FExpressionInput& SpecularField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.Specular"); }
	FExpressionInput& RoughnessField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.Roughness"); }
	FExpressionInput& EmissiveColorField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.EmissiveColor"); }
	FExpressionInput& OpacityField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.Opacity"); }
	FExpressionInput& OpacityMaskField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.OpacityMask"); }
	FExpressionInput& NormalField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.Normal"); }
	FExpressionInput& WorldPositionOffsetField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.WorldPositionOffset"); }
	FExpressionInput& WorldDisplacementField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.WorldDisplacement"); }
	FExpressionInput& TessellationMultiplierField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.TessellationMultiplier"); }
	FExpressionInput& SubsurfaceColorField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.SubsurfaceColor"); }
	FExpressionInput& ClearCoatField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.ClearCoat"); }
	FExpressionInput& ClearCoatRoughnessField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.ClearCoatRoughness"); }
	FExpressionInput& AmbientOcclusionField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.AmbientOcclusion"); }
	FExpressionInput& RefractionField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.Refraction"); }
	FExpressionInput& SSAOIntensityField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.SSAOIntensity"); }
	FExpressionInput& SSAOInfluenceField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.SSAOInfluence"); }
	FExpressionInput& SSAOLightInfluenceField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMakeMaterialAttributes.SSAOLightInfluence"); }
	FieldArray<FExpressionInput, 8> CustomizedUVsField() { return {this, "UMaterialExpressionMakeMaterialAttributes.CustomizedUVs"}; }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionMakeMaterialAttributes.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionMakeMaterialAttributes.GetCaption", OutCaptions); }
};

