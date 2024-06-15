#pragma once

#include "BaseDeclarations.h"
#include "FLightSceneProxy.h"

struct FDirectionalLightSceneProxy : FLightSceneProxy
{
	char __padding[0x40L];
	float& OcclusionDepthRangeField() { return *GetNativePointerField<float*>(this, "FDirectionalLightSceneProxy.OcclusionDepthRange"); }
	FVector& LightShaftOverrideDirectionField() { return *GetNativePointerField<FVector*>(this, "FDirectionalLightSceneProxy.LightShaftOverrideDirection"); }
	float& WholeSceneDynamicShadowRadiusField() { return *GetNativePointerField<float*>(this, "FDirectionalLightSceneProxy.WholeSceneDynamicShadowRadius"); }
	int& DynamicShadowCascadesField() { return *GetNativePointerField<int*>(this, "FDirectionalLightSceneProxy.DynamicShadowCascades"); }
	float& CascadeDistributionExponentField() { return *GetNativePointerField<float*>(this, "FDirectionalLightSceneProxy.CascadeDistributionExponent"); }
	float& CascadeTransitionFractionField() { return *GetNativePointerField<float*>(this, "FDirectionalLightSceneProxy.CascadeTransitionFraction"); }
	float& ShadowDistanceFadeoutFractionField() { return *GetNativePointerField<float*>(this, "FDirectionalLightSceneProxy.ShadowDistanceFadeoutFraction"); }
	bool& bUseInsetShadowsForMovableObjectsField() { return *GetNativePointerField<bool*>(this, "FDirectionalLightSceneProxy.bUseInsetShadowsForMovableObjects"); }
	float& DistanceFieldShadowDistanceField() { return *GetNativePointerField<float*>(this, "FDirectionalLightSceneProxy.DistanceFieldShadowDistance"); }
	float& LightSourceAngleField() { return *GetNativePointerField<float*>(this, "FDirectionalLightSceneProxy.LightSourceAngle"); }
	float& AmbientShadowIntensityMultiplierField() { return *GetNativePointerField<float*>(this, "FDirectionalLightSceneProxy.AmbientShadowIntensityMultiplier"); }
	bool& bIsPersistentPrimaryLightField() { return *GetNativePointerField<bool*>(this, "FDirectionalLightSceneProxy.bIsPersistentPrimaryLight"); }

	// Functions

	static float GetSortPriority() { return NativeCall<float>(nullptr, "FDirectionalLightSceneProxy.GetSortPriority"); }
	static float ComputeAccumulatedScale(float Exponent, int CascadeIndex, int CascadeCount) { return NativeCall<float, float, int, int>(nullptr, "FDirectionalLightSceneProxy.ComputeAccumulatedScale", Exponent, CascadeIndex, CascadeCount); }
	void ComputeShadowCullingVolume(const FVector * CascadeFrustumVerts, const FVector * LightDirection, FConvexVolume * ConvexVolumeOut, FPlane * NearPlaneOut, FPlane * FarPlaneOut) { NativeCall<void, const FVector *, const FVector *, FConvexVolume *, FPlane *, FPlane *>(this, "FDirectionalLightSceneProxy.ComputeShadowCullingVolume", CascadeFrustumVerts, LightDirection, ConvexVolumeOut, NearPlaneOut, FarPlaneOut); }
	float GetAmbientShadowIntensityMultiplier() { return NativeCall<float>(this, "FDirectionalLightSceneProxy.GetAmbientShadowIntensityMultiplier"); }
	float GetCSMMaxDistance() { return NativeCall<float>(this, "FDirectionalLightSceneProxy.GetCSMMaxDistance"); }
	FVector2D * GetDirectionalLightDistanceFadeParameters(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "FDirectionalLightSceneProxy.GetDirectionalLightDistanceFadeParameters", result); }
	float GetDistanceFieldShadowDistance() { return NativeCall<float>(this, "FDirectionalLightSceneProxy.GetDistanceFieldShadowDistance"); }
	FVector * GetLightPositionForLightShafts(FVector * result, FVector ViewOrigin) { return NativeCall<FVector *, FVector *, FVector>(this, "FDirectionalLightSceneProxy.GetLightPositionForLightShafts", result, ViewOrigin); }
	bool GetLightShaftOcclusionParameters(float * OutOcclusionMaskDarkness, float * OutOcclusionDepthRange) { return NativeCall<bool, float *, float *>(this, "FDirectionalLightSceneProxy.GetLightShaftOcclusionParameters", OutOcclusionMaskDarkness, OutOcclusionDepthRange); }
	float GetLightSourceAngle() { return NativeCall<float>(this, "FDirectionalLightSceneProxy.GetLightSourceAngle"); }
	int GetNumViewDependentWholeSceneShadows(FSceneView * View) { return NativeCall<int, FSceneView *>(this, "FDirectionalLightSceneProxy.GetNumViewDependentWholeSceneShadows", View); }
	void GetParameters(FVector4 * LightPositionAndInvRadius, FVector4 * LightColorAndFalloffExponent, FVector * NormalizedLightDirection, FVector2D * SpotAngles, float * LightSourceRadius, float * LightSourceLength, float * LightMinRoughness) { NativeCall<void, FVector4 *, FVector4 *, FVector *, FVector2D *, float *, float *, float *>(this, "FDirectionalLightSceneProxy.GetParameters", LightPositionAndInvRadius, LightColorAndFalloffExponent, NormalizedLightDirection, SpotAngles, LightSourceRadius, LightSourceLength, LightMinRoughness); }
	bool GetPerObjectProjectedShadowInitializer(const FBoxSphereBounds * SubjectBounds, FPerObjectProjectedShadowInitializer * OutInitializer) { return NativeCall<bool, const FBoxSphereBounds *, FPerObjectProjectedShadowInitializer *>(this, "FDirectionalLightSceneProxy.GetPerObjectProjectedShadowInitializer", SubjectBounds, OutInitializer); }
	FSphere * GetShadowSplitBounds(FSphere * result, FSceneView * View, int InCascadeIndex, FShadowCascadeSettings * OutCascadeSettings) { return NativeCall<FSphere *, FSphere *, FSceneView *, int, FShadowCascadeSettings *>(this, "FDirectionalLightSceneProxy.GetShadowSplitBounds", result, View, InCascadeIndex, OutCascadeSettings); }
	FSphere * GetShadowSplitBoundsDepthRange(FSphere * result, FSceneView * View, FVector ViewOrigin, float SplitNear, float SplitFar, FShadowCascadeSettings * OutCascadeSettings) { return NativeCall<FSphere *, FSphere *, FSceneView *, FVector, float, float, FShadowCascadeSettings *>(this, "FDirectionalLightSceneProxy.GetShadowSplitBoundsDepthRange", result, View, ViewOrigin, SplitNear, SplitFar, OutCascadeSettings); }
	float GetShadowTransitionScale() { return NativeCall<float>(this, "FDirectionalLightSceneProxy.GetShadowTransitionScale"); }
	float GetSplitDistance(FSceneView * View, unsigned int SplitIndex, bool bDistanceFieldShadows) { return NativeCall<float, FSceneView *, unsigned int, bool>(this, "FDirectionalLightSceneProxy.GetSplitDistance", View, SplitIndex, bDistanceFieldShadows); }
	bool GetViewDependentRsmWholeSceneProjectedShadowInitializer(FSceneView * View, const FBox * LightPropagationVolumeBounds, FWholeSceneProjectedShadowInitializer * OutInitializer) { return NativeCall<bool, FSceneView *, const FBox *, FWholeSceneProjectedShadowInitializer *>(this, "FDirectionalLightSceneProxy.GetViewDependentRsmWholeSceneProjectedShadowInitializer", View, LightPropagationVolumeBounds, OutInitializer); }
	bool GetViewDependentWholeSceneProjectedShadowInitializer(FSceneView * View, int InCascadeIndex, FWholeSceneProjectedShadowInitializer * OutInitializer) { return NativeCall<bool, FSceneView *, int, FWholeSceneProjectedShadowInitializer *>(this, "FDirectionalLightSceneProxy.GetViewDependentWholeSceneProjectedShadowInitializer", View, InCascadeIndex, OutInitializer); }
	void InvalidatePrecomputedLighting(bool bIsEditor) { NativeCall<void, bool>(this, "FDirectionalLightSceneProxy.InvalidatePrecomputedLighting", bIsEditor); }
	void SetTransform(const FMatrix * InLightToWorld, const FVector4 * InPosition) { NativeCall<void, const FMatrix *, const FVector4 *>(this, "FDirectionalLightSceneProxy.SetTransform", InLightToWorld, InPosition); }
	bool ShouldCreatePerObjectShadowsForDynamicObjects() { return NativeCall<bool>(this, "FDirectionalLightSceneProxy.ShouldCreatePerObjectShadowsForDynamicObjects"); }
	bool ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<bool, ERHIFeatureLevel::Type>(this, "FDirectionalLightSceneProxy.ShouldCreateRayTracedCascade", InFeatureLevel); }
	void UpdateLightShaftOverrideDirection_GameThread(const UDirectionalLightComponent * Component) { NativeCall<void, const UDirectionalLightComponent *>(this, "FDirectionalLightSceneProxy.UpdateLightShaftOverrideDirection_GameThread", Component); }
	void UpdateWorldToLight(FSceneView * View) { NativeCall<void, FSceneView *>(this, "FDirectionalLightSceneProxy.UpdateWorldToLight", View); }
};

