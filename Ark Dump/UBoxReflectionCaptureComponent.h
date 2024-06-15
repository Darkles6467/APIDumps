#pragma once

#include "BaseDeclarations.h"
#include "UReflectionCaptureComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent
{
	char __padding[0x20L];
	float& BoxTransitionDistanceField() { return *GetNativePointerField<float*>(this, "UBoxReflectionCaptureComponent.BoxTransitionDistance"); }
	UBoxComponent * PreviewInfluenceBoxField() { return GetNativePointerField<UBoxComponent *>(this, "UBoxReflectionCaptureComponent.PreviewInfluenceBox"); }
	UBoxComponent * PreviewCaptureBoxField() { return GetNativePointerField<UBoxComponent *>(this, "UBoxReflectionCaptureComponent.PreviewCaptureBox"); }

	// Functions

	float GetInfluenceBoundingRadius() { return NativeCall<float>(this, "UBoxReflectionCaptureComponent.GetInfluenceBoundingRadius"); }
	void UpdatePreviewShape() { NativeCall<void>(this, "UBoxReflectionCaptureComponent.UpdatePreviewShape"); }
};

