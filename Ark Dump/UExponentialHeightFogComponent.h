#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UExponentialHeightFogComponent : USceneComponent
{
	char __padding[0x40L];
	float& FogDensityField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FogDensity"); }
	FLinearColor& FogInscatteringColorField() { return *GetNativePointerField<FLinearColor*>(this, "UExponentialHeightFogComponent.FogInscatteringColor"); }
	float& DirectionalInscatteringExponentField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.DirectionalInscatteringExponent"); }
	float& DirectionalInscatteringStartDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.DirectionalInscatteringStartDistance"); }
	FLinearColor& DirectionalInscatteringColorField() { return *GetNativePointerField<FLinearColor*>(this, "UExponentialHeightFogComponent.DirectionalInscatteringColor"); }
	float& FogHeightFalloffField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FogHeightFalloff"); }
	float& FogMaxOpacityField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.FogMaxOpacity"); }
	float& StartDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.StartDistance"); }
	float& AdditionalStartDistanceField() { return *GetNativePointerField<float*>(this, "UExponentialHeightFogComponent.AdditionalStartDistance"); }

	// Functions

	void AddFogIfNeeded() { NativeCall<void>(this, "UExponentialHeightFogComponent.AddFogIfNeeded"); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "UExponentialHeightFogComponent.CreateRenderState_Concurrent"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UExponentialHeightFogComponent.DestroyRenderState_Concurrent"); }
	void PostLoad() { NativeCall<void>(this, "UExponentialHeightFogComponent.PostLoad"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UExponentialHeightFogComponent.SendRenderTransform_Concurrent"); }
	void SetAdditionalStartDistance(float Value) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetAdditionalStartDistance", Value); }
	void SetDirectionalInscatteringColor(FLinearColor Value) { NativeCall<void, FLinearColor>(this, "UExponentialHeightFogComponent.SetDirectionalInscatteringColor", Value); }
	void SetDirectionalInscatteringExponent(float Value) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetDirectionalInscatteringExponent", Value); }
	void SetDirectionalInscatteringStartDistance(float Value) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetDirectionalInscatteringStartDistance", Value); }
	void SetFogHeightFalloff(float Value) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetFogHeightFalloff", Value); }
	void SetFogInscatteringColor(FLinearColor Value) { NativeCall<void, FLinearColor>(this, "UExponentialHeightFogComponent.SetFogInscatteringColor", Value); }
	void SetFogMaxOpacity(float Value) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetFogMaxOpacity", Value); }
	void SetStartDistance(float Value) { NativeCall<void, float>(this, "UExponentialHeightFogComponent.SetStartDistance", Value); }
	void PostInterpChange(UProperty * PropertyThatChanged) { NativeCall<void, UProperty *>(this, "UExponentialHeightFogComponent.PostInterpChange", PropertyThatChanged); }
};

