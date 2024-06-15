#pragma once

#include "BaseDeclarations.h"
#include "UReflectionCaptureComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent
{
	char __padding[0x20L];
	float& InfluenceRadiusScaleField() { return *GetNativePointerField<float*>(this, "UPlaneReflectionCaptureComponent.InfluenceRadiusScale"); }
	UDrawSphereComponent * PreviewInfluenceRadiusField() { return GetNativePointerField<UDrawSphereComponent *>(this, "UPlaneReflectionCaptureComponent.PreviewInfluenceRadius"); }
	UBoxComponent * PreviewCaptureBoxField() { return GetNativePointerField<UBoxComponent *>(this, "UPlaneReflectionCaptureComponent.PreviewCaptureBox"); }

	// Functions

	float GetInfluenceBoundingRadius() { return NativeCall<float>(this, "UPlaneReflectionCaptureComponent.GetInfluenceBoundingRadius"); }
	void UpdatePreviewShape() { NativeCall<void>(this, "UPlaneReflectionCaptureComponent.UpdatePreviewShape"); }
};

