#pragma once

#include "BaseDeclarations.h"
struct FReflectionCaptureSortData
{
	char __padding[0xa0L];
	unsigned int& GuidField() { return *GetNativePointerField<unsigned int*>(this, "FReflectionCaptureSortData.Guid"); }
	int& CaptureIndexField() { return *GetNativePointerField<int*>(this, "FReflectionCaptureSortData.CaptureIndex"); }
	FVector4& PositionAndRadiusField() { return *GetNativePointerField<FVector4*>(this, "FReflectionCaptureSortData.PositionAndRadius"); }
	FVector4& CapturePropertiesField() { return *GetNativePointerField<FVector4*>(this, "FReflectionCaptureSortData.CaptureProperties"); }
	FMatrix& BoxTransformField() { return *GetNativePointerField<FMatrix*>(this, "FReflectionCaptureSortData.BoxTransform"); }
	FVector4& BoxScalesField() { return *GetNativePointerField<FVector4*>(this, "FReflectionCaptureSortData.BoxScales"); }
	FTexture * SM4FullHDRCubemapField() { return GetNativePointerField<FTexture *>(this, "FReflectionCaptureSortData.SM4FullHDRCubemap"); }
	float& FadeDistanceStartField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureSortData.FadeDistanceStart"); }
	float& FadeDistanceEndField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureSortData.FadeDistanceEnd"); }
	float& ShadowIntensityField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureSortData.ShadowIntensity"); }
};

