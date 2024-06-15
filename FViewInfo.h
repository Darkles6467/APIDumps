#pragma once

#include "BaseDeclarations.h"
#include "FViewUniformShaderParameters.h"
#include "FIntRect.h"

struct FSceneView
{
	char __padding[0xd30L];
	TUniformBufferRef<FViewUniformShaderParameters>& UniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FViewUniformShaderParameters>*>(this, "FSceneView.UniformBuffer"); }
	FIntRect& ViewRectField() { return *GetNativePointerField<FIntRect*>(this, "FSceneView.ViewRect"); }
	const FIntRect& UnscaledViewRectField() { return *GetNativePointerField<const FIntRect*>(this, "FSceneView.UnscaledViewRect"); }
	const FIntRect& UnconstrainedViewRectField() { return *GetNativePointerField<const FIntRect*>(this, "FSceneView.UnconstrainedViewRect"); }
	unsigned int& FrameNumberField() { return *GetNativePointerField<unsigned int*>(this, "FSceneView.FrameNumber"); }
	int& MaxShadowCascadesField() { return *GetNativePointerField<int*>(this, "FSceneView.MaxShadowCascades"); }
	int& MaxFarShadowCascadesField() { return *GetNativePointerField<int*>(this, "FSceneView.MaxFarShadowCascades"); }
	FViewMatrices& ViewMatricesField() { return *GetNativePointerField<FViewMatrices*>(this, "FSceneView.ViewMatrices"); }
	FVector& ViewLocationField() { return *GetNativePointerField<FVector*>(this, "FSceneView.ViewLocation"); }
	FRotator& ViewRotationField() { return *GetNativePointerField<FRotator*>(this, "FSceneView.ViewRotation"); }
	FQuat& BaseHmdOrientationField() { return *GetNativePointerField<FQuat*>(this, "FSceneView.BaseHmdOrientation"); }
	FVector& BaseHmdLocationField() { return *GetNativePointerField<FVector*>(this, "FSceneView.BaseHmdLocation"); }
	float& WorldToMetersScaleField() { return *GetNativePointerField<float*>(this, "FSceneView.WorldToMetersScale"); }
	FViewMatrices& ShadowViewMatricesField() { return *GetNativePointerField<FViewMatrices*>(this, "FSceneView.ShadowViewMatrices"); }
	FMatrix& ProjectionMatrixUnadjustedForRHIField() { return *GetNativePointerField<FMatrix*>(this, "FSceneView.ProjectionMatrixUnadjustedForRHI"); }
	FLinearColor& BackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSceneView.BackgroundColor"); }
	FLinearColor& OverlayColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSceneView.OverlayColor"); }
	FLinearColor& ColorScaleField() { return *GetNativePointerField<FLinearColor*>(this, "FSceneView.ColorScale"); }
	EStereoscopicPass& StereoPassField() { return *GetNativePointerField<EStereoscopicPass*>(this, "FSceneView.StereoPass"); }
	bool& bRenderFirstInstanceOnlyField() { return *GetNativePointerField<bool*>(this, "FSceneView.bRenderFirstInstanceOnly"); }
	FName& CurrentBufferVisualizationModeField() { return *GetNativePointerField<FName*>(this, "FSceneView.CurrentBufferVisualizationMode"); }
	float& CaptureSkyIBLIntensityField() { return *GetNativePointerField<float*>(this, "FSceneView.CaptureSkyIBLIntensity"); }
	FLinearColor& CaptureSkyColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSceneView.CaptureSkyColor"); }
	FLinearColor& CaptureGroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSceneView.CaptureGroundColor"); }
	FTexture * CaptureProcessedAmbientCubeField() { return GetNativePointerField<FTexture *>(this, "FSceneView.CaptureProcessedAmbientCube"); }
	TSHVectorRGB<3>& CaptureAmbientCubeIrradianceField() { return *GetNativePointerField<TSHVectorRGB<3>*>(this, "FSceneView.CaptureAmbientCubeIrradiance"); }
	bool& CaptureApplyAmbienceField() { return *GetNativePointerField<bool*>(this, "FSceneView.CaptureApplyAmbience"); }
	FInterpolatedLightSourceInfo& AmbientLightSourceInfoField() { return *GetNativePointerField<FInterpolatedLightSourceInfo*>(this, "FSceneView.AmbientLightSourceInfo"); }
	FInterpolatedLightSourceInfo& SpotLightSourceInfoField() { return *GetNativePointerField<FInterpolatedLightSourceInfo*>(this, "FSceneView.SpotLightSourceInfo"); }
	float& AtmosphericFogIntensityField() { return *GetNativePointerField<float*>(this, "FSceneView.AtmosphericFogIntensity"); }
	FVector& AtmosphericFogMultiplierField() { return *GetNativePointerField<FVector*>(this, "FSceneView.AtmosphericFogMultiplier"); }
	float& TrueSkyBrightnessField() { return *GetNativePointerField<float*>(this, "FSceneView.TrueSkyBrightness"); }
	FVector& TrueSkyColorMultiplierField() { return *GetNativePointerField<FVector*>(this, "FSceneView.TrueSkyColorMultiplier"); }
	bool& bRenderedDirectionalLightField() { return *GetNativePointerField<bool*>(this, "FSceneView.bRenderedDirectionalLight"); }
	FVector4& DiffuseOverrideParameterField() { return *GetNativePointerField<FVector4*>(this, "FSceneView.DiffuseOverrideParameter"); }
	FVector4& SpecularOverrideParameterField() { return *GetNativePointerField<FVector4*>(this, "FSceneView.SpecularOverrideParameter"); }
	FVector4& NormalOverrideParameterField() { return *GetNativePointerField<FVector4*>(this, "FSceneView.NormalOverrideParameter"); }
	FVector2D& RoughnessOverrideParameterField() { return *GetNativePointerField<FVector2D*>(this, "FSceneView.RoughnessOverrideParameter"); }
	FMatrix& ViewProjectionMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FSceneView.ViewProjectionMatrix"); }
	FMatrix& InvViewMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FSceneView.InvViewMatrix"); }
	FMatrix& InvViewProjectionMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FSceneView.InvViewProjectionMatrix"); }
	float& TemporalJitterPixelsXField() { return *GetNativePointerField<float*>(this, "FSceneView.TemporalJitterPixelsX"); }
	float& TemporalJitterPixelsYField() { return *GetNativePointerField<float*>(this, "FSceneView.TemporalJitterPixelsY"); }
	FConvexVolume& ViewFrustumField() { return *GetNativePointerField<FConvexVolume*>(this, "FSceneView.ViewFrustum"); }
	bool& bHasNearClippingPlaneField() { return *GetNativePointerField<bool*>(this, "FSceneView.bHasNearClippingPlane"); }
	float& NearClippingDistanceField() { return *GetNativePointerField<float*>(this, "FSceneView.NearClippingDistance"); }
	bool& bReverseCullingField() { return *GetNativePointerField<bool*>(this, "FSceneView.bReverseCulling"); }
	FVector4& InvDeviceZToWorldZTransformField() { return *GetNativePointerField<FVector4*>(this, "FSceneView.InvDeviceZToWorldZTransform"); }
	float& LODDistanceFactorField() { return *GetNativePointerField<float*>(this, "FSceneView.LODDistanceFactor"); }
	float& LODDistanceFactorSquaredField() { return *GetNativePointerField<float*>(this, "FSceneView.LODDistanceFactorSquared"); }
	bool& bCameraCutField() { return *GetNativePointerField<bool*>(this, "FSceneView.bCameraCut"); }
	bool& bOriginOffsetThisFrameField() { return *GetNativePointerField<bool*>(this, "FSceneView.bOriginOffsetThisFrame"); }
	FIntPoint& CursorPosField() { return *GetNativePointerField<FIntPoint*>(this, "FSceneView.CursorPos"); }
	bool& bIsGameViewField() { return *GetNativePointerField<bool*>(this, "FSceneView.bIsGameView"); }
	bool& bForceShowMaterialsField() { return *GetNativePointerField<bool*>(this, "FSceneView.bForceShowMaterials"); }
	bool& bIsViewInfoField() { return *GetNativePointerField<bool*>(this, "FSceneView.bIsViewInfo"); }
	bool& bIsSceneCaptureField() { return *GetNativePointerField<bool*>(this, "FSceneView.bIsSceneCapture"); }
	bool& bIsCapturingForSkyField() { return *GetNativePointerField<bool*>(this, "FSceneView.bIsCapturingForSky"); }
	int& BounceNumberField() { return *GetNativePointerField<int*>(this, "FSceneView.BounceNumber"); }
	void * CapturedReflectionCaptureField() { return GetNativePointerField<void *>(this, "FSceneView.CapturedReflectionCapture"); }
	float& GlobalTrueSkyBrightnessField() { return *GetNativePointerField<float*>(this, "FSceneView.GlobalTrueSkyBrightness"); }
	FVector& GlobalTrueSkyColorMultiplierField() { return *GetNativePointerField<FVector*>(this, "FSceneView.GlobalTrueSkyColorMultiplier"); }
	bool& bIsReflectionCaptureField() { return *GetNativePointerField<bool*>(this, "FSceneView.bIsReflectionCapture"); }
	bool& bIsAmbientShadowCaptureField() { return *GetNativePointerField<bool*>(this, "FSceneView.bIsAmbientShadowCapture"); }
	unsigned __int16& AmbientShadowCaptureObjectLayerMaskField() { return *GetNativePointerField<unsigned __int16*>(this, "FSceneView.AmbientShadowCaptureObjectLayerMask"); }
	bool& bIsCachedShadowField() { return *GetNativePointerField<bool*>(this, "FSceneView.bIsCachedShadow"); }
	bool& bIsLockedField() { return *GetNativePointerField<bool*>(this, "FSceneView.bIsLocked"); }
	bool& bStaticSceneOnlyField() { return *GetNativePointerField<bool*>(this, "FSceneView.bStaticSceneOnly"); }
	FRenderingCompositePassContext * RenderingCompositePassContextField() { return GetNativePointerField<FRenderingCompositePassContext *>(this, "FSceneView.RenderingCompositePassContext"); }
	FIntRect& CameraConstrainedViewRectField() { return *GetNativePointerField<FIntRect*>(this, "FSceneView.CameraConstrainedViewRect"); }
	FFinalPostProcessSettings& FinalPostProcessSettingsField() { return *GetNativePointerField<FFinalPostProcessSettings*>(this, "FSceneView.FinalPostProcessSettings"); }
	float& DayCycleInterpField() { return *GetNativePointerField<float*>(this, "FSceneView.DayCycleInterp"); }
	FLinearColor& DayCycleTintScatterField() { return *GetNativePointerField<FLinearColor*>(this, "FSceneView.DayCycleTintScatter"); }
	FLinearColor& DayCycleTintLossField() { return *GetNativePointerField<FLinearColor*>(this, "FSceneView.DayCycleTintLoss"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FSceneView.FeatureLevel"); }
	float& DistanceFieldShadowRaytraceDistanceOverrideField() { return *GetNativePointerField<float*>(this, "FSceneView.DistanceFieldShadowRaytraceDistanceOverride"); }
	FieldArray<TArray<bool>, 2> FrameSubIsOccludedField() { return {this, "FSceneView.FrameSubIsOccluded"}; }

	// Functions

	void ConfigureBufferVisualizationSettings() { NativeCall<void>(this, "FSceneView.ConfigureBufferVisualizationSettings"); }
	void DeprojectFVector2D(const FVector2D * ScreenPos, FVector * out_WorldOrigin, FVector * out_WorldDirection) { NativeCall<void, const FVector2D *, FVector *, FVector *>(this, "FSceneView.DeprojectFVector2D", ScreenPos, out_WorldOrigin, out_WorldDirection); }
	static void DeprojectScreenToWorld(const FVector2D * ScreenPos, const FIntRect * ViewRect, const FMatrix * InvViewMatrix, const FMatrix * InvProjectionMatrix, FVector * out_WorldOrigin, FVector * out_WorldDirection) { NativeCall<void, const FVector2D *, const FIntRect *, const FMatrix *, const FMatrix *, FVector *, FVector *>(nullptr, "FSceneView.DeprojectScreenToWorld", ScreenPos, ViewRect, InvViewMatrix, InvProjectionMatrix, out_WorldOrigin, out_WorldDirection); }
	void EndFinalPostprocessSettings(GroundClutterState GroundClutterAction) { NativeCall<void, GroundClutterState>(this, "FSceneView.EndFinalPostprocessSettings", GroundClutterAction); }
	float GetLODDistanceFactor() { return NativeCall<float>(this, "FSceneView.GetLODDistanceFactor"); }
	FFinalPostProcessSettings * GetPreviousFinalPostProcessSettings() { return NativeCall<FFinalPostProcessSettings *>(this, "FSceneView.GetPreviousFinalPostProcessSettings"); }
	EShaderPlatform GetShaderPlatform() { return NativeCall<EShaderPlatform>(this, "FSceneView.GetShaderPlatform"); }
	float GetTemporalLODDistanceFactor(int Index, bool bUseLaggedLODTransition) { return NativeCall<float, int, bool>(this, "FSceneView.GetTemporalLODDistanceFactor", Index, bUseLaggedLODTransition); }
	FVector * GetTemporalLODOrigin(FVector * result, int Index, bool bUseLaggedLODTransition) { return NativeCall<FVector *, FVector *, int, bool>(this, "FSceneView.GetTemporalLODOrigin", result, Index, bUseLaggedLODTransition); }
	float GetTemporalLODTransition() { return NativeCall<float>(this, "FSceneView.GetTemporalLODTransition"); }
	unsigned int GetViewKey() { return NativeCall<unsigned int>(this, "FSceneView.GetViewKey"); }
	void OverridePostProcessSettings(const FPostProcessSettings * Src, float Weight) { NativeCall<void, const FPostProcessSettings *, float>(this, "FSceneView.OverridePostProcessSettings", Src, Weight); }
	bool ScreenToPixel(const FVector4 * ScreenPoint, FVector2D * OutPixelLocation) { return NativeCall<bool, const FVector4 *, FVector2D *>(this, "FSceneView.ScreenToPixel", ScreenPoint, OutPixelLocation); }
	void SetScaledViewRect(FIntRect InScaledViewRect) { NativeCall<void, FIntRect>(this, "FSceneView.SetScaledViewRect", InScaledViewRect); }
	void StartFinalPostprocessSettings(FVector InViewLocation) { NativeCall<void, FVector>(this, "FSceneView.StartFinalPostprocessSettings", InViewLocation); }
	void UpdateViewMatrix() { NativeCall<void>(this, "FSceneView.UpdateViewMatrix"); }
	bool WorldToPixel(const FVector * WorldPoint, FVector2D * OutPixelLocation) { return NativeCall<bool, const FVector *, FVector2D *>(this, "FSceneView.WorldToPixel", WorldPoint, OutPixelLocation); }
	FVector4 * WorldToScreen(FVector4 * result, const FVector * WorldPoint) { return NativeCall<FVector4 *, FVector4 *, const FVector *>(this, "FSceneView.WorldToScreen", result, WorldPoint); }
};

struct FViewInfo : FSceneView
{
	char __padding[0xef0L];
	TUniquePtr<FViewUniformShaderParameters>& CachedViewUniformShaderParametersField() { return *GetNativePointerField<TUniquePtr<FViewUniformShaderParameters>*>(this, "FViewInfo.CachedViewUniformShaderParameters"); }
	TBitArray<SceneRenderingBitArrayAllocator>& PrimitiveVisibilityMapField() { return *GetNativePointerField<TBitArray<SceneRenderingBitArrayAllocator>*>(this, "FViewInfo.PrimitiveVisibilityMap"); }
	TBitArray<SceneRenderingBitArrayAllocator>& PrimitiveDefinitelyUnoccludedMapField() { return *GetNativePointerField<TBitArray<SceneRenderingBitArrayAllocator>*>(this, "FViewInfo.PrimitiveDefinitelyUnoccludedMap"); }
	TBitArray<SceneRenderingBitArrayAllocator>& PotentiallyFadingPrimitiveMapField() { return *GetNativePointerField<TBitArray<SceneRenderingBitArrayAllocator>*>(this, "FViewInfo.PotentiallyFadingPrimitiveMap"); }
	TBitArray<SceneRenderingBitArrayAllocator>& PrimitiveOcclusionMapField() { return *GetNativePointerField<TBitArray<SceneRenderingBitArrayAllocator>*>(this, "FViewInfo.PrimitiveOcclusionMap"); }
	TBitArray<SceneRenderingBitArrayAllocator>& StaticMeshVisibilityMapField() { return *GetNativePointerField<TBitArray<SceneRenderingBitArrayAllocator>*>(this, "FViewInfo.StaticMeshVisibilityMap"); }
	TBitArray<SceneRenderingBitArrayAllocator>& StaticMeshOccluderMapField() { return *GetNativePointerField<TBitArray<SceneRenderingBitArrayAllocator>*>(this, "FViewInfo.StaticMeshOccluderMap"); }
	TBitArray<SceneRenderingBitArrayAllocator>& StaticMeshVelocityMapField() { return *GetNativePointerField<TBitArray<SceneRenderingBitArrayAllocator>*>(this, "FViewInfo.StaticMeshVelocityMap"); }
	TBitArray<SceneRenderingBitArrayAllocator>& StaticMeshShadowDepthMapField() { return *GetNativePointerField<TBitArray<SceneRenderingBitArrayAllocator>*>(this, "FViewInfo.StaticMeshShadowDepthMap"); }
	FGlobalDistanceFieldInfo& GlobalDistanceFieldInfoField() { return *GetNativePointerField<FGlobalDistanceFieldInfo*>(this, "FViewInfo.GlobalDistanceFieldInfo"); }
	FTranslucentPrimSet& TranslucentPrimSetField() { return *GetNativePointerField<FTranslucentPrimSet*>(this, "FViewInfo.TranslucentPrimSet"); }
	FDistortionPrimSet& DistortionPrimSetField() { return *GetNativePointerField<FDistortionPrimSet*>(this, "FViewInfo.DistortionPrimSet"); }
	FCustomDepthPrimSet& CustomDepthSetField() { return *GetNativePointerField<FCustomDepthPrimSet*>(this, "FViewInfo.CustomDepthSet"); }
	FBatchedElements& BatchedViewElementsField() { return *GetNativePointerField<FBatchedElements*>(this, "FViewInfo.BatchedViewElements"); }
	FBatchedElements& TopBatchedViewElementsField() { return *GetNativePointerField<FBatchedElements*>(this, "FViewInfo.TopBatchedViewElements"); }
	FSimpleElementCollector& SimpleElementCollectorField() { return *GetNativePointerField<FSimpleElementCollector*>(this, "FViewInfo.SimpleElementCollector"); }
	FSimpleElementCollector& EditorSimpleElementCollectorField() { return *GetNativePointerField<FSimpleElementCollector*>(this, "FViewInfo.EditorSimpleElementCollector"); }
	FieldArray<FVector4[2], 42> ExponentialFogParametersField() { return {this, "FViewInfo.ExponentialFogParameters"}; }
	FieldArray<FVector, 2> ExponentialFogColorField() { return {this, "FViewInfo.ExponentialFogColor"}; }
	FieldArray<float, 2> FogMaxOpacityField() { return {this, "FViewInfo.FogMaxOpacity"}; }
	bool& bUseDirectionalInscatteringField() { return *GetNativePointerField<bool*>(this, "FViewInfo.bUseDirectionalInscattering"); }
	FVector& InscatteringLightDirectionField() { return *GetNativePointerField<FVector*>(this, "FViewInfo.InscatteringLightDirection"); }
	FieldArray<float, 2> DirectionalInscatteringExponentField() { return {this, "FViewInfo.DirectionalInscatteringExponent"}; }
	FieldArray<float, 2> DirectionalInscatteringStartDistanceField() { return {this, "FViewInfo.DirectionalInscatteringStartDistance"}; }
	FieldArray<FLinearColor, 2> DirectionalInscatteringColorField() { return {this, "FViewInfo.DirectionalInscatteringColor"}; }
	int& ExponentialFogCountField() { return *GetNativePointerField<int*>(this, "FViewInfo.ExponentialFogCount"); }
	FieldArray<int, 2> FogMapField() { return {this, "FViewInfo.FogMap"}; }
	FieldArray<FVector, 2> TranslucencyLightingVolumeMinField() { return {this, "FViewInfo.TranslucencyLightingVolumeMin"}; }
	FieldArray<float, 2> TranslucencyVolumeVoxelSizeField() { return {this, "FViewInfo.TranslucencyVolumeVoxelSize"}; }
	FieldArray<FVector, 2> TranslucencyLightingVolumeSizeField() { return {this, "FViewInfo.TranslucencyLightingVolumeSize"}; }
	FViewMatrices& PrevViewMatricesField() { return *GetNativePointerField<FViewMatrices*>(this, "FViewInfo.PrevViewMatrices"); }
	FMatrix& PrevViewProjMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FViewInfo.PrevViewProjMatrix"); }
	FMatrix& PrevViewRotationProjMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FViewInfo.PrevViewRotationProjMatrix"); }
	int& NumVisibleStaticMeshElementsField() { return *GetNativePointerField<int*>(this, "FViewInfo.NumVisibleStaticMeshElements"); }
	const char * PrecomputedVisibilityDataField() { return GetNativePointerField<const char *>(this, "FViewInfo.PrecomputedVisibilityData"); }
	FOcclusionQueryBatcher& IndividualOcclusionQueriesField() { return *GetNativePointerField<FOcclusionQueryBatcher*>(this, "FViewInfo.IndividualOcclusionQueries"); }
	FOcclusionQueryBatcher& GroupedOcclusionQueriesField() { return *GetNativePointerField<FOcclusionQueryBatcher*>(this, "FViewInfo.GroupedOcclusionQueries"); }
	float& OneOverNumPossiblePixelsField() { return *GetNativePointerField<float*>(this, "FViewInfo.OneOverNumPossiblePixels"); }
	FVector4& LightShaftCenterField() { return *GetNativePointerField<FVector4*>(this, "FViewInfo.LightShaftCenter"); }
	FLinearColor& LightShaftColorMaskField() { return *GetNativePointerField<FLinearColor*>(this, "FViewInfo.LightShaftColorMask"); }
	FLinearColor& LightShaftColorApplyField() { return *GetNativePointerField<FLinearColor*>(this, "FViewInfo.LightShaftColorApply"); }
	bool& bLightShaftUseField() { return *GetNativePointerField<bool*>(this, "FViewInfo.bLightShaftUse"); }
	FHeightfieldLightingViewInfo& HeightfieldLightingViewInfoField() { return *GetNativePointerField<FHeightfieldLightingViewInfo*>(this, "FViewInfo.HeightfieldLightingViewInfo"); }

	// Functions

	void SetupDefaultGlobalDistanceFieldUniformBufferParameters(FViewUniformShaderParameters * ViewUniformShaderParameters) { NativeCall<void, FViewUniformShaderParameters *>(this, "FViewInfo.SetupDefaultGlobalDistanceFieldUniformBufferParameters", ViewUniformShaderParameters); }
	void SetupGlobalDistanceFieldUniformBufferParameters(FViewUniformShaderParameters * ViewUniformShaderParameters) { NativeCall<void, FViewUniformShaderParameters *>(this, "FViewInfo.SetupGlobalDistanceFieldUniformBufferParameters", ViewUniformShaderParameters); }
	TUniformBufferRef<FViewUniformShaderParameters> * CreateUniformBuffer(TUniformBufferRef<FViewUniformShaderParameters> * result, const FViewUniformShaderParameters * ViewUniformShaderParameters, EUniformBufferUsage Usage) { return NativeCall<TUniformBufferRef<FViewUniformShaderParameters> *, TUniformBufferRef<FViewUniformShaderParameters> *, const FViewUniformShaderParameters *, EUniformBufferUsage>(this, "FViewInfo.CreateUniformBuffer", result, ViewUniformShaderParameters, Usage); }
	TUniformBufferRef<FViewUniformShaderParameters> * CreateUniformBuffer(TUniformBufferRef<FViewUniformShaderParameters> * result, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * DirectionalLightShadowInfo, const FMatrix * EffectiveTranslatedViewMatrix, FBox * OutTranslucentCascadeBoundsArray, int NumTranslucentCascades) { return NativeCall<TUniformBufferRef<FViewUniformShaderParameters> *, TUniformBufferRef<FViewUniformShaderParameters> *, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *, const FMatrix *, FBox *, int>(this, "FViewInfo.CreateUniformBuffer", result, DirectionalLightShadowInfo, EffectiveTranslatedViewMatrix, OutTranslucentCascadeBoundsArray, NumTranslucentCascades); }
	float GetLastEyeAdaptationExposure() { return NativeCall<float>(this, "FViewInfo.GetLastEyeAdaptationExposure"); }
	bool HasValidEyeAdaptation() { return NativeCall<bool>(this, "FViewInfo.HasValidEyeAdaptation"); }
	void Init() { NativeCall<void>(this, "FViewInfo.Init"); }
	void InitRHIResources(const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * DirectionalLightShadowInfo) { NativeCall<void, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *>(this, "FViewInfo.InitRHIResources", DirectionalLightShadowInfo); }
	bool IsDistanceCulled(float DistanceSquared, float InMinDrawDistance, float InMaxDrawDistance, const FPrimitiveSceneInfo * PrimitiveSceneInfo) { return NativeCall<bool, float, float, float, const FPrimitiveSceneInfo *>(this, "FViewInfo.IsDistanceCulled", DistanceSquared, InMinDrawDistance, InMaxDrawDistance, PrimitiveSceneInfo); }
	void SetValidEyeAdaptation() { NativeCall<void>(this, "FViewInfo.SetValidEyeAdaptation"); }
	void SetupSkyIrradianceEnvironmentMapConstants(int Index, FVector4 * OutSkyIrradianceEnvironmentMap) { NativeCall<void, int, FVector4 *>(this, "FViewInfo.SetupSkyIrradianceEnvironmentMapConstants", Index, OutSkyIrradianceEnvironmentMap); }
	void SetupUniformBufferParameters(const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * DirectionalLightShadowInfo, const FMatrix * EffectiveTranslatedViewMatrix, FBox * OutTranslucentCascadeBoundsArray, int NumTranslucentCascades, FViewUniformShaderParameters * OutViewUniformShaderParameters) { NativeCall<void, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *, const FMatrix *, FBox *, int, FViewUniformShaderParameters *>(this, "FViewInfo.SetupUniformBufferParameters", DirectionalLightShadowInfo, EffectiveTranslatedViewMatrix, OutTranslucentCascadeBoundsArray, NumTranslucentCascades, OutViewUniformShaderParameters); }
	void SwapEyeAdaptationRTs(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FViewInfo.SwapEyeAdaptationRTs", RHICmdList); }
	void CalcTranslucencyLightingVolumeBounds(FBox * InOutCascadeBoundsArray, int NumCascades) { NativeCall<void, FBox *, int>(this, "FViewInfo.CalcTranslucencyLightingVolumeBounds", InOutCascadeBoundsArray, NumCascades); }
};

