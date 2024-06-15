#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ACameraActor : AActor
{
	char __padding[0x380L];
	TEnumAsByte<enum EAutoReceiveInput::Type>& AutoActivateForPlayerField() { return *GetNativePointerField<TEnumAsByte<enum EAutoReceiveInput::Type>*>(this, "ACameraActor.AutoActivateForPlayer"); }
	TSubobjectPtr<UCameraComponent>& CameraComponentField() { return *GetNativePointerField<TSubobjectPtr<UCameraComponent>*>(this, "ACameraActor.CameraComponent"); }
	TWeakObjectPtr<UCameraAnim>& PreviewedCameraAnimField() { return *GetNativePointerField<TWeakObjectPtr<UCameraAnim>*>(this, "ACameraActor.PreviewedCameraAnim"); }
	float& AspectRatio_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ACameraActor.AspectRatio_DEPRECATED"); }
	float& FOVAngle_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ACameraActor.FOVAngle_DEPRECATED"); }
	float& PostProcessBlendWeight_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "ACameraActor.PostProcessBlendWeight_DEPRECATED"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ACameraActor.BeginPlay"); }
	int GetAutoActivatePlayerIndex() { return NativeCall<int>(this, "ACameraActor.GetAutoActivatePlayerIndex"); }
	void PostLoadSubobjects(FObjectInstancingGraph * OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph *>(this, "ACameraActor.PostLoadSubobjects", OuterInstanceGraph); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ACameraActor.Serialize", Ar); }
};

