#pragma once

#include "BaseDeclarations.h"
#include "FMaterialRenderProxy.h"
#include "FRenderResource.h"

struct FDefaultMaterialInstance : FMaterialRenderProxy
{
	char __padding[0x10L];
	UMaterial * MaterialField() { return GetNativePointerField<UMaterial *>(this, "FDefaultMaterialInstance.Material"); }
	float& DistanceFieldPenumbraScaleField() { return *GetNativePointerField<float*>(this, "FDefaultMaterialInstance.DistanceFieldPenumbraScale"); }

	// Functions

	float GetDistanceFieldPenumbraScale() { return NativeCall<float>(this, "FDefaultMaterialInstance.GetDistanceFieldPenumbraScale"); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FDefaultMaterialInstance.GetFriendlyName", result); }
	bool GetScalarValue(const FName ParameterName, float * OutValue, const FMaterialRenderContext * Context) { return NativeCall<bool, const FName, float *, const FMaterialRenderContext *>(this, "FDefaultMaterialInstance.GetScalarValue", ParameterName, OutValue, Context); }
	bool GetTextureValue(const FName ParameterName, const UTexture ** OutValue, const FMaterialRenderContext * Context) { return NativeCall<bool, const FName, const UTexture **, const FMaterialRenderContext *>(this, "FDefaultMaterialInstance.GetTextureValue", ParameterName, OutValue, Context); }
	bool GetVectorValue(const FName ParameterName, FLinearColor * OutValue, const FMaterialRenderContext * Context) { return NativeCall<bool, const FName, FLinearColor *, const FMaterialRenderContext *>(this, "FDefaultMaterialInstance.GetVectorValue", ParameterName, OutValue, Context); }
};

