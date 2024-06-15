#pragma once

#include "BaseDeclarations.h"
#include "UReflectionCaptureComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USphereReflectionCaptureComponent : UReflectionCaptureComponent
{
	char __padding[0x20L];
	float& InfluenceRadiusField() { return *GetNativePointerField<float*>(this, "USphereReflectionCaptureComponent.InfluenceRadius"); }
	float& UsedWithDFAOInfluenceRadiusMultiplierField() { return *GetNativePointerField<float*>(this, "USphereReflectionCaptureComponent.UsedWithDFAOInfluenceRadiusMultiplier"); }
	float& FallOffField() { return *GetNativePointerField<float*>(this, "USphereReflectionCaptureComponent.FallOff"); }
	float& ShadowFallOffField() { return *GetNativePointerField<float*>(this, "USphereReflectionCaptureComponent.ShadowFallOff"); }
	float& PercentOfRadiusToStartFalloffField() { return *GetNativePointerField<float*>(this, "USphereReflectionCaptureComponent.PercentOfRadiusToStartFalloff"); }
	float& CaptureDistanceScaleField() { return *GetNativePointerField<float*>(this, "USphereReflectionCaptureComponent.CaptureDistanceScale"); }
	UDrawSphereComponent * PreviewInfluenceRadiusField() { return GetNativePointerField<UDrawSphereComponent *>(this, "USphereReflectionCaptureComponent.PreviewInfluenceRadius"); }

	// Functions

	float GetInfluenceBoundingRadius() { return NativeCall<float>(this, "USphereReflectionCaptureComponent.GetInfluenceBoundingRadius"); }
	void UpdatePreviewShape() { NativeCall<void>(this, "USphereReflectionCaptureComponent.UpdatePreviewShape"); }
};

