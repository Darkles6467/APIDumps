#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCameraComponent : USceneComponent
{
	char __padding[0x370L];
	float& AspectRatioField() { return *GetNativePointerField<float*>(this, "UCameraComponent.AspectRatio"); }
	TEnumAsByte<enum ECameraProjectionMode::Type>& ProjectionModeField() { return *GetNativePointerField<TEnumAsByte<enum ECameraProjectionMode::Type>*>(this, "UCameraComponent.ProjectionMode"); }
	float& PostProcessBlendWeightField() { return *GetNativePointerField<float*>(this, "UCameraComponent.PostProcessBlendWeight"); }
	bool& bUseControllerViewRotationField() { return *GetNativePointerField<bool*>(this, "UCameraComponent.bUseControllerViewRotation"); }

	// Functions

	void GetCameraView(float DeltaTime, FMinimalViewInfo * DesiredView) { NativeCall<void, float, FMinimalViewInfo *>(this, "UCameraComponent.GetCameraView", DeltaTime, DesiredView); }
	void OnRegister() { NativeCall<void>(this, "UCameraComponent.OnRegister"); }
	void PostLoad() { NativeCall<void>(this, "UCameraComponent.PostLoad"); }
};

