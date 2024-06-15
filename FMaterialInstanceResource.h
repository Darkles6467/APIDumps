#pragma once

#include "BaseDeclarations.h"
#include "FMaterialRenderProxy.h"
#include "FRenderResource.h"

struct FMaterialInstanceResource : FMaterialRenderProxy
{
	char __padding[0x50L];
	float& DistanceFieldPenumbraScaleField() { return *GetNativePointerField<float*>(this, "FMaterialInstanceResource.DistanceFieldPenumbraScale"); }

	// Functions

	float GetDistanceFieldPenumbraScale() { return NativeCall<float>(this, "FMaterialInstanceResource.GetDistanceFieldPenumbraScale"); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FMaterialInstanceResource.GetFriendlyName", result); }
	bool GetScalarValue(const FName ParameterName, float * OutValue, const FMaterialRenderContext * Context) { return NativeCall<bool, const FName, float *, const FMaterialRenderContext *>(this, "FMaterialInstanceResource.GetScalarValue", ParameterName, OutValue, Context); }
	bool GetTextureValue(const FName ParameterName, const UTexture ** OutValue, const FMaterialRenderContext * Context) { return NativeCall<bool, const FName, const UTexture **, const FMaterialRenderContext *>(this, "FMaterialInstanceResource.GetTextureValue", ParameterName, OutValue, Context); }
	bool GetVectorValue(const FName ParameterName, FLinearColor * OutValue, const FMaterialRenderContext * Context) { return NativeCall<bool, const FName, FLinearColor *, const FMaterialRenderContext *>(this, "FMaterialInstanceResource.GetVectorValue", ParameterName, OutValue, Context); }
};

