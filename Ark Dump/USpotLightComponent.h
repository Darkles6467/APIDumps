#pragma once

#include "BaseDeclarations.h"
#include "ULightComponent.h"
#include "ULightComponentBase.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPointLightComponent : ULightComponent
{
	char __padding[0x20L];
	float& MaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "UPointLightComponent.MaxDrawDistance"); }
	float& LightFalloffExponentField() { return *GetNativePointerField<float*>(this, "UPointLightComponent.LightFalloffExponent"); }
	float& SourceRadiusField() { return *GetNativePointerField<float*>(this, "UPointLightComponent.SourceRadius"); }
	float& SourceLengthField() { return *GetNativePointerField<float*>(this, "UPointLightComponent.SourceLength"); }
	FLightmassPointLightSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassPointLightSettings*>(this, "UPointLightComponent.LightmassSettings"); }

	// Functions

	bool AffectsBounds(const FBoxSphereBounds * Bounds) { return NativeCall<bool, const FBoxSphereBounds *>(this, "UPointLightComponent.AffectsBounds", Bounds); }
	float ComputeLightBrightness() { return NativeCall<float>(this, "UPointLightComponent.ComputeLightBrightness"); }
	FBox * GetBoundingBox(FBox * result) { return NativeCall<FBox *, FBox *>(this, "UPointLightComponent.GetBoundingBox", result); }
	FSphere * GetBoundingSphere(FSphere * result) { return NativeCall<FSphere *, FSphere *>(this, "UPointLightComponent.GetBoundingSphere", result); }
	FVector4 * GetLightPosition(FVector4 * result) { return NativeCall<FVector4 *, FVector4 *>(this, "UPointLightComponent.GetLightPosition", result); }
	void PostInterpChange(UProperty * PropertyThatChanged) { NativeCall<void, UProperty *>(this, "UPointLightComponent.PostInterpChange", PropertyThatChanged); }
	void PostLoad() { NativeCall<void>(this, "UPointLightComponent.PostLoad"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UPointLightComponent.SendRenderTransform_Concurrent"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UPointLightComponent.Serialize", Ar); }
	void SetAttenuationRadius(float NewRadius) { NativeCall<void, float>(this, "UPointLightComponent.SetAttenuationRadius", NewRadius); }
	void SetLightFalloffExponent(float NewLightFalloffExponent) { NativeCall<void, float>(this, "UPointLightComponent.SetLightFalloffExponent", NewLightFalloffExponent); }
	void SetSourceRadius(float bNewValue) { NativeCall<void, float>(this, "UPointLightComponent.SetSourceRadius", bNewValue); }
};

struct USpotLightComponent : UPointLightComponent
{
	char __padding[0x30L];
	float& InnerConeAngleField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.InnerConeAngle"); }
	float& OuterConeAngleField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.OuterConeAngle"); }
	float& LightShaftConeAngleField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.LightShaftConeAngle"); }
	float& ShadowNearScaleField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.ShadowNearScale"); }
	float& ShadowFarScaleField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.ShadowFarScale"); }
	float& InfluenceScaleField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.InfluenceScale"); }
	float& InfluenceRangeField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.InfluenceRange"); }
	float& InfluenceExponentField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.InfluenceExponent"); }
	float& MaxInjectedWholeSceneDynamicShadowRadiusField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.MaxInjectedWholeSceneDynamicShadowRadius"); }
	float& MaxInjectedShadowDistanceFadeoutFractionField() { return *GetNativePointerField<float*>(this, "USpotLightComponent.MaxInjectedShadowDistanceFadeoutFraction"); }

	// Functions

	bool AffectsBounds(const FBoxSphereBounds * Bounds) { return NativeCall<bool, const FBoxSphereBounds *>(this, "USpotLightComponent.AffectsBounds", Bounds); }
	FSphere * GetBoundingSphere(FSphere * result) { return NativeCall<FSphere *, FSphere *>(this, "USpotLightComponent.GetBoundingSphere", result); }
	void PostLoad() { NativeCall<void>(this, "USpotLightComponent.PostLoad"); }
	void SetInnerConeAngle(float NewInnerConeAngle) { NativeCall<void, float>(this, "USpotLightComponent.SetInnerConeAngle", NewInnerConeAngle); }
	void SetOuterConeAngle(float NewOuterConeAngle) { NativeCall<void, float>(this, "USpotLightComponent.SetOuterConeAngle", NewOuterConeAngle); }
};

