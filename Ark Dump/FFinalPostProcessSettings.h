#pragma once

#include "BaseDeclarations.h"
struct FPostProcessSettings
{
	char __padding[0x358L];
	TArray<FOverrideClutterLayer>& OverrideClutterLayersField() { return *GetNativePointerField<TArray<FOverrideClutterLayer>*>(this, "FPostProcessSettings.OverrideClutterLayers"); }
	TArray<FClutterPropertyOverride>& ClutterPropertyOverridesField() { return *GetNativePointerField<TArray<FClutterPropertyOverride>*>(this, "FPostProcessSettings.ClutterPropertyOverrides"); }
	FLinearColor& FilmWhitePointField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.FilmWhitePoint"); }
	FLinearColor& FilmShadowTintField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.FilmShadowTint"); }
	float& FilmShadowTintBlendField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.FilmShadowTintBlend"); }
	float& FilmShadowTintAmountField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.FilmShadowTintAmount"); }
	float& FilmSaturationField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.FilmSaturation"); }
	FLinearColor& FilmChannelMixerRedField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.FilmChannelMixerRed"); }
	FLinearColor& FilmChannelMixerGreenField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.FilmChannelMixerGreen"); }
	FLinearColor& FilmChannelMixerBlueField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.FilmChannelMixerBlue"); }
	float& FilmContrastField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.FilmContrast"); }
	float& FilmToeAmountField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.FilmToeAmount"); }
	float& FilmHealAmountField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.FilmHealAmount"); }
	float& FilmDynamicRangeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.FilmDynamicRange"); }
	float& MinExposureFilmToeAmountField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.MinExposureFilmToeAmount"); }
	float& MinFilmToeAmountField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.MinFilmToeAmount"); }
	float& MaxExposureFilmToeAmountField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.MaxExposureFilmToeAmount"); }
	float& MaxFilmToeAmountField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.MaxFilmToeAmount"); }
	FLinearColor& SceneColorTintField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.SceneColorTint"); }
	float& SceneFringeIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.SceneFringeIntensity"); }
	float& SceneFringeSaturationField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.SceneFringeSaturation"); }
	float& BloomIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.BloomIntensity"); }
	float& BloomThresholdField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.BloomThreshold"); }
	float& Bloom1SizeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.Bloom1Size"); }
	float& Bloom2SizeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.Bloom2Size"); }
	float& Bloom3SizeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.Bloom3Size"); }
	float& Bloom4SizeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.Bloom4Size"); }
	float& Bloom5SizeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.Bloom5Size"); }
	FLinearColor& Bloom1TintField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.Bloom1Tint"); }
	FLinearColor& Bloom2TintField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.Bloom2Tint"); }
	FLinearColor& Bloom3TintField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.Bloom3Tint"); }
	FLinearColor& Bloom4TintField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.Bloom4Tint"); }
	FLinearColor& Bloom5TintField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.Bloom5Tint"); }
	float& BloomDirtMaskIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.BloomDirtMaskIntensity"); }
	FLinearColor& BloomDirtMaskTintField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.BloomDirtMaskTint"); }
	float& LPVIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LPVIntensity"); }
	float& LPVWarpIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LPVWarpIntensity"); }
	float& LPVVplInjectionBiasField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LPVVplInjectionBias"); }
	float& LPVSizeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LPVSize"); }
	float& LPVSecondaryOcclusionIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LPVSecondaryOcclusionIntensity"); }
	float& LPVSecondaryBounceIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LPVSecondaryBounceIntensity"); }
	float& LPVGeometryVolumeBiasField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LPVGeometryVolumeBias"); }
	float& LPVEmissiveInjectionIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LPVEmissiveInjectionIntensity"); }
	float& LPVTransmissionIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LPVTransmissionIntensity"); }
	FLinearColor& AmbientCubemapTintField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.AmbientCubemapTint"); }
	float& AmbientCubemapIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientCubemapIntensity"); }
	float& AutoExposureLowPercentField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AutoExposureLowPercent"); }
	float& AutoExposureHighPercentField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AutoExposureHighPercent"); }
	float& AutoExposureMinBrightnessField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AutoExposureMinBrightness"); }
	float& AutoExposureMaxBrightnessField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AutoExposureMaxBrightness"); }
	float& AutoExposureSpeedUpField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AutoExposureSpeedUp"); }
	float& AutoExposureSpeedDownField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AutoExposureSpeedDown"); }
	float& AutoExposureBiasField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AutoExposureBias"); }
	float& HistogramLogMinField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.HistogramLogMin"); }
	float& HistogramLogMaxField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.HistogramLogMax"); }
	float& LensFlareIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LensFlareIntensity"); }
	FLinearColor& LensFlareTintField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.LensFlareTint"); }
	float& LensFlareBokehSizeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LensFlareBokehSize"); }
	float& LensFlareThresholdField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.LensFlareThreshold"); }
	FieldArray<FLinearColor, 8> LensFlareTintsField() { return {this, "FPostProcessSettings.LensFlareTints"}; }
	float& VignetteIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.VignetteIntensity"); }
	FLinearColor& VignetteColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.VignetteColor"); }
	float& GrainJitterField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.GrainJitter"); }
	float& GrainIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.GrainIntensity"); }
	float& AmbientOcclusionIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionIntensity"); }
	float& AmbientOcclusionStaticFractionField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionStaticFraction"); }
	float& AmbientOcclusionRadiusField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionRadius"); }
	float& AmbientOcclusionFadeDistanceField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionFadeDistance"); }
	float& AmbientOcclusionFadeRadiusField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionFadeRadius"); }
	float& AmbientOcclusionDistanceField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionDistance"); }
	float& AmbientOcclusionPowerField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionPower"); }
	float& AmbientOcclusionBiasField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionBias"); }
	float& AmbientOcclusionQualityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionQuality"); }
	float& AmbientOcclusionMipBlendField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionMipBlend"); }
	float& AmbientOcclusionMipScaleField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionMipScale"); }
	float& AmbientOcclusionMipThresholdField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AmbientOcclusionMipThreshold"); }
	FLinearColor& IndirectLightingColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPostProcessSettings.IndirectLightingColor"); }
	float& IndirectLightingIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.IndirectLightingIntensity"); }
	float& ColorGradingIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.ColorGradingIntensity"); }
	TEnumAsByte<enum EDepthOfFieldMethod>& DepthOfFieldMethodField() { return *GetNativePointerField<TEnumAsByte<enum EDepthOfFieldMethod>*>(this, "FPostProcessSettings.DepthOfFieldMethod"); }
	float& DepthOfFieldFocalDistanceField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldFocalDistance"); }
	float& DepthOfFieldFocalRegionField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldFocalRegion"); }
	float& DepthOfFieldNearTransitionRegionField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldNearTransitionRegion"); }
	float& DepthOfFieldFarTransitionRegionField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldFarTransitionRegion"); }
	float& DepthOfFieldScaleField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldScale"); }
	float& DepthOfFieldMaxBokehSizeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldMaxBokehSize"); }
	float& DepthOfFieldNearBlurSizeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldNearBlurSize"); }
	float& DepthOfFieldFarBlurSizeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldFarBlurSize"); }
	float& DepthOfFieldOcclusionField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldOcclusion"); }
	float& DepthOfFieldColorThresholdField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldColorThreshold"); }
	float& DepthOfFieldSizeThresholdField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldSizeThreshold"); }
	float& DepthOfFieldSkyFocusDistanceField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.DepthOfFieldSkyFocusDistance"); }
	float& MotionBlurAmountField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.MotionBlurAmount"); }
	float& MotionBlurMaxField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.MotionBlurMax"); }
	float& MotionBlurPerObjectSizeField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.MotionBlurPerObjectSize"); }
	float& ScreenPercentageField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.ScreenPercentage"); }
	TEnumAsByte<enum EAntiAliasingMethod>& AntiAliasingMethodField() { return *GetNativePointerField<TEnumAsByte<enum EAntiAliasingMethod>*>(this, "FPostProcessSettings.AntiAliasingMethod"); }
	float& ScreenSpaceReflectionIntensityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.ScreenSpaceReflectionIntensity"); }
	float& ScreenSpaceReflectionQualityField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.ScreenSpaceReflectionQuality"); }
	float& ScreenSpaceReflectionMaxRoughnessField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.ScreenSpaceReflectionMaxRoughness"); }
	float& AdditionalMaterialSetSkyLightMultiplierField() { return *GetNativePointerField<float*>(this, "FPostProcessSettings.AdditionalMaterialSetSkyLightMultiplier"); }

	// Functions

	void ApplyMaterialCollectionParams(UWorld * World) { NativeCall<void, UWorld *>(this, "FPostProcessSettings.ApplyMaterialCollectionParams", World); }
	void PostProcessModifyBlendableMaterial(const UMaterialInterface * BlendableMaterialInterface, UMaterialInstanceDynamic * MID) { NativeCall<void, const UMaterialInterface *, UMaterialInstanceDynamic *>(this, "FPostProcessSettings.PostProcessModifyBlendableMaterial", BlendableMaterialInterface, MID); }
	void SetBaseValues() { NativeCall<void>(this, "FPostProcessSettings.SetBaseValues"); }
};

struct FFinalPostProcessSettings : FPostProcessSettings
{
	char __padding[0x118L];
	TArray<FFinalPostProcessSettings::FCubemapEntry>& ContributingCubemapsField() { return *GetNativePointerField<TArray<FFinalPostProcessSettings::FCubemapEntry>*>(this, "FFinalPostProcessSettings.ContributingCubemaps"); }
	TArray<FFinalPostProcessSettings::FLUTBlenderEntry>& ContributingLUTsField() { return *GetNativePointerField<TArray<FFinalPostProcessSettings::FLUTBlenderEntry>*>(this, "FFinalPostProcessSettings.ContributingLUTs"); }
	bool& bBufferVisualizationDumpRequiredField() { return *GetNativePointerField<bool*>(this, "FFinalPostProcessSettings.bBufferVisualizationDumpRequired"); }
	FString& BufferVisualizationDumpBaseFilenameField() { return *GetNativePointerField<FString*>(this, "FFinalPostProcessSettings.BufferVisualizationDumpBaseFilename"); }
	FBlendableManager& BlendableManagerField() { return *GetNativePointerField<FBlendableManager*>(this, "FFinalPostProcessSettings.BlendableManager"); }
	bool& bHasAnyCustomDepthsField() { return *GetNativePointerField<bool*>(this, "FFinalPostProcessSettings.bHasAnyCustomDepths"); }

	// Functions

	FFinalPostProcessSettings * operator=(const FFinalPostProcessSettings * __that) { return NativeCall<FFinalPostProcessSettings *, const FFinalPostProcessSettings *>(this, "FFinalPostProcessSettings.operator=", __that); }
	void LerpTo(UTexture * InTexture, float Weight) { NativeCall<void, UTexture *, float>(this, "FFinalPostProcessSettings.LerpTo", InTexture, Weight); }
	void PushLUT(UTexture * Texture, float Weight) { NativeCall<void, UTexture *, float>(this, "FFinalPostProcessSettings.PushLUT", Texture, Weight); }
	void UpdateEntry(const FFinalPostProcessSettings::FCubemapEntry * Entry, float Weight) { NativeCall<void, const FFinalPostProcessSettings::FCubemapEntry *, float>(this, "FFinalPostProcessSettings.UpdateEntry", Entry, Weight); }
};

