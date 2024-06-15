#pragma once

#include "BaseDeclarations.h"
struct FReflectionCaptureProxy
{
	char __padding[0x140L];
	int& PackedIndexField() { return *GetNativePointerField<int*>(this, "FReflectionCaptureProxy.PackedIndex"); }
	FTexture * SM4FullHDRCubemapField() { return GetNativePointerField<FTexture *>(this, "FReflectionCaptureProxy.SM4FullHDRCubemap"); }
	FTexture * EncodedHDRCubemapField() { return GetNativePointerField<FTexture *>(this, "FReflectionCaptureProxy.EncodedHDRCubemap"); }
	FTexture * AmbientShadowCaptureField() { return GetNativePointerField<FTexture *>(this, "FReflectionCaptureProxy.AmbientShadowCapture"); }
	EReflectionCaptureShape::Type& ShapeField() { return *GetNativePointerField<EReflectionCaptureShape::Type*>(this, "FReflectionCaptureProxy.Shape"); }
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FReflectionCaptureProxy.Position"); }
	float& InfluenceRadiusField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.InfluenceRadius"); }
	float& BrightnessField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.Brightness"); }
	float& CaptureBrightnessField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.CaptureBrightness"); }
	float& FallOffField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.FallOff"); }
	float& ShadowFallOffField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.ShadowFallOff"); }
	unsigned int& GuidField() { return *GetNativePointerField<unsigned int*>(this, "FReflectionCaptureProxy.Guid"); }
	bool& bUseSeperateShadowFadeOutField() { return *GetNativePointerField<bool*>(this, "FReflectionCaptureProxy.bUseSeperateShadowFadeOut"); }
	bool& bUseGlobalBrightnessField() { return *GetNativePointerField<bool*>(this, "FReflectionCaptureProxy.bUseGlobalBrightness"); }
	bool& bBakeAndStreamField() { return *GetNativePointerField<bool*>(this, "FReflectionCaptureProxy.bBakeAndStream"); }
	FMatrix& BoxTransformField() { return *GetNativePointerField<FMatrix*>(this, "FReflectionCaptureProxy.BoxTransform"); }
	FVector& BoxScalesField() { return *GetNativePointerField<FVector*>(this, "FReflectionCaptureProxy.BoxScales"); }
	float& BoxTransitionDistanceField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.BoxTransitionDistance"); }
	FVector4& ReflectionXAxisAndYScaleField() { return *GetNativePointerField<FVector4*>(this, "FReflectionCaptureProxy.ReflectionXAxisAndYScale"); }
	float& FadeOutDistanceStartField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.FadeOutDistanceStart"); }
	float& FadeOutDistanceEndField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.FadeOutDistanceEnd"); }
	float& ShadowFadeOutDistanceStartField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.ShadowFadeOutDistanceStart"); }
	float& ShadowFadeOutDistanceEndField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.ShadowFadeOutDistanceEnd"); }
	TArray<float>& BouncesIntensityField() { return *GetNativePointerField<TArray<float>*>(this, "FReflectionCaptureProxy.BouncesIntensity"); }
	int& BouncesField() { return *GetNativePointerField<int*>(this, "FReflectionCaptureProxy.Bounces"); }
	float& AmbientLightInfluenceField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.AmbientLightInfluence"); }
	FVector& AmbientLightDirectionField() { return *GetNativePointerField<FVector*>(this, "FReflectionCaptureProxy.AmbientLightDirection"); }
	float& AmbientShadowIntensityField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.AmbientShadowIntensity"); }
	float& AmbientShadowNearField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.AmbientShadowNear"); }
	float& AmbientShadowFarField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.AmbientShadowFar"); }
	float& AmbientShadowDistanceFadeFractionField() { return *GetNativePointerField<float*>(this, "FReflectionCaptureProxy.AmbientShadowDistanceFadeFraction"); }
	FLinearColor& AmbientTranslucencyColorField() { return *GetNativePointerField<FLinearColor*>(this, "FReflectionCaptureProxy.AmbientTranslucencyColor"); }
	bool& bCaptureAmbientShadowField() { return *GetNativePointerField<bool*>(this, "FReflectionCaptureProxy.bCaptureAmbientShadow"); }
	unsigned __int16& AmbientShadowCaptureObjectLayerMaskField() { return *GetNativePointerField<unsigned __int16*>(this, "FReflectionCaptureProxy.AmbientShadowCaptureObjectLayerMask"); }
	FIntPoint& AmbientShadowCaptureBufferResolutionField() { return *GetNativePointerField<FIntPoint*>(this, "FReflectionCaptureProxy.AmbientShadowCaptureBufferResolution"); }
	char& DFAOOptionField() { return *GetNativePointerField<char*>(this, "FReflectionCaptureProxy.DFAOOption"); }

	// Functions

	bool GetWholeSceneProjectedShadowInitializer(FSceneViewFamily * ViewFamily, FWholeSceneProjectedShadowInitializer * OutInitializer) { return NativeCall<bool, FSceneViewFamily *, FWholeSceneProjectedShadowInitializer *>(this, "FReflectionCaptureProxy.GetWholeSceneProjectedShadowInitializer", ViewFamily, OutInitializer); }
	void SetTransform(const FMatrix * InTransform) { NativeCall<void, const FMatrix *>(this, "FReflectionCaptureProxy.SetTransform", InTransform); }
};

