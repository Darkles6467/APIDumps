#pragma once

#include "BaseDeclarations.h"
#include "USceneCaptureComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USceneCaptureComponent2D : USceneCaptureComponent
{
	char __padding[0x380L];
	float& FOVAngleField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent2D.FOVAngle"); }
	FVector2D& DesiredTargetSizeField() { return *GetNativePointerField<FVector2D*>(this, "USceneCaptureComponent2D.DesiredTargetSize"); }
	TEnumAsByte<enum ESceneCaptureSource>& CaptureSourceField() { return *GetNativePointerField<TEnumAsByte<enum ESceneCaptureSource>*>(this, "USceneCaptureComponent2D.CaptureSource"); }
	float& PostProcessBlendWeightField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent2D.PostProcessBlendWeight"); }

	// Functions

	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "USceneCaptureComponent2D.SendRenderTransform_Concurrent"); }
	void UpdateContent() { NativeCall<void>(this, "USceneCaptureComponent2D.UpdateContent"); }
	static void UpdateDeferredCaptures(FSceneInterface * Scene) { NativeCall<void, FSceneInterface *>(nullptr, "USceneCaptureComponent2D.UpdateDeferredCaptures", Scene); }
};

