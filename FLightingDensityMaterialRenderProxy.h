#pragma once

#include "BaseDeclarations.h"
#include "FMaterialRenderProxy.h"
#include "FRenderResource.h"

struct FColoredMaterialRenderProxy : FMaterialRenderProxy
{
	char __padding[0x20L];
	const FLinearColor& ColorField() { return *GetNativePointerField<const FLinearColor*>(this, "FColoredMaterialRenderProxy.Color"); }
	FName& ColorParamNameField() { return *GetNativePointerField<FName*>(this, "FColoredMaterialRenderProxy.ColorParamName"); }

	// Functions

	bool GetScalarValue(const FName ParameterName, float * OutValue, const FMaterialRenderContext * Context) { return NativeCall<bool, const FName, float *, const FMaterialRenderContext *>(this, "FColoredMaterialRenderProxy.GetScalarValue", ParameterName, OutValue, Context); }
	bool GetTextureValue(const FName ParameterName, const UTexture ** OutValue, const FMaterialRenderContext * Context) { return NativeCall<bool, const FName, const UTexture **, const FMaterialRenderContext *>(this, "FColoredMaterialRenderProxy.GetTextureValue", ParameterName, OutValue, Context); }
	bool GetVectorValue(const FName ParameterName, FLinearColor * OutValue, const FMaterialRenderContext * Context) { return NativeCall<bool, const FName, FLinearColor *, const FMaterialRenderContext *>(this, "FColoredMaterialRenderProxy.GetVectorValue", ParameterName, OutValue, Context); }
};

struct FLightingDensityMaterialRenderProxy : FColoredMaterialRenderProxy
{
	char __padding[0x8L];
	const FVector2D& LightmapResolutionField() { return *GetNativePointerField<const FVector2D*>(this, "FLightingDensityMaterialRenderProxy.LightmapResolution"); }
};

