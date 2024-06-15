#pragma once

#include "BaseDeclarations.h"
#include "ADestructibleActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AFadingDestructibleActor : ADestructibleActor
{
	char __padding[0x50L];
	float& Fall_RotAccelField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_RotAccel"); }
	float& Fall_RotAccelRateField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_RotAccelRate"); }
	FVector& Fall_Direction_RightField() { return *GetNativePointerField<FVector*>(this, "AFadingDestructibleActor.Fall_Direction_Right"); }
	float& Fall_Spin_RandField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_Spin_Rand"); }
	float& Fall_SpinVelocityField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_SpinVelocity"); }
	float& Fall_SpinAccelField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_SpinAccel"); }
	float& Fall_SpinAccelRateField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_SpinAccelRate"); }
	float& Fall_RotVelocityField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.Fall_RotVelocity"); }
	float& FadeOutDelayTimeField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.FadeOutDelayTime"); }
	float& FadeOutTimeField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.FadeOutTime"); }
	float& DefaultFadeOutTimeField() { return *GetNativePointerField<float*>(this, "AFadingDestructibleActor.DefaultFadeOutTime"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "AFadingDestructibleActor.BeginPlay"); }
	void SetupFade() { NativeCall<void>(this, "AFadingDestructibleActor.SetupFade"); }
	void SetupForFalling(UStaticMesh * InMesh, TArray<UMaterialInterface *> * OverrideDestructionMaterials, const FVector * HitDirection) { NativeCall<void, UStaticMesh *, TArray<UMaterialInterface *> *, const FVector *>(this, "AFadingDestructibleActor.SetupForFalling", InMesh, OverrideDestructionMaterials, HitDirection); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AFadingDestructibleActor.Tick", DeltaSeconds); }
};

