#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FComponentSocketDescription.h"

struct USpringArmComponent : USceneComponent
{
	char __padding[0x70L];
	FieldArray<_BYTE, 8> SocketOffsetField() { return {this, "USpringArmComponent.SocketOffset"}; }
	FVector& TargetOffsetField() { return *GetNativePointerField<FVector*>(this, "USpringArmComponent.TargetOffset"); }
	float& ProbeSizeField() { return *GetNativePointerField<float*>(this, "USpringArmComponent.ProbeSize"); }
	TEnumAsByte<enum ECollisionChannel>& ProbeChannelField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionChannel>*>(this, "USpringArmComponent.ProbeChannel"); }
	float& CameraLagSpeedField() { return *GetNativePointerField<float*>(this, "USpringArmComponent.CameraLagSpeed"); }
	float& CameraRotationLagSpeedField() { return *GetNativePointerField<float*>(this, "USpringArmComponent.CameraRotationLagSpeed"); }
	FVector& PreviousDesiredLocField() { return *GetNativePointerField<FVector*>(this, "USpringArmComponent.PreviousDesiredLoc"); }
	FRotator& PreviousDesiredRotField() { return *GetNativePointerField<FRotator*>(this, "USpringArmComponent.PreviousDesiredRot"); }
	FVector& RelativeSocketLocationField() { return *GetNativePointerField<FVector*>(this, "USpringArmComponent.RelativeSocketLocation"); }
	FQuat& RelativeSocketRotationField() { return *GetNativePointerField<FQuat*>(this, "USpringArmComponent.RelativeSocketRotation"); }
	bool& bUseControllerViewRotationField() { return *GetNativePointerField<bool*>(this, "USpringArmComponent.bUseControllerViewRotation"); }

	// Functions

	FVector * BlendLocations(FVector * result, const FVector * DesiredArmLocation, const FVector * TraceHitLocation, bool bHitSomething, float DeltaTime) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, bool, float>(this, "USpringArmComponent.BlendLocations", result, DesiredArmLocation, TraceHitLocation, bHitSomething, DeltaTime); }
	FTransform * GetSocketTransform(FTransform * result, FName InSocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<FTransform *, FTransform *, FName, ERelativeTransformSpace>(this, "USpringArmComponent.GetSocketTransform", result, InSocketName, TransformSpace); }
	void OnRegister() { NativeCall<void>(this, "USpringArmComponent.OnRegister"); }
	void PostLoad() { NativeCall<void>(this, "USpringArmComponent.PostLoad"); }
	void QuerySupportedSockets(TArray<FComponentSocketDescription> * OutSockets) { NativeCall<void, TArray<FComponentSocketDescription> *>(this, "USpringArmComponent.QuerySupportedSockets", OutSockets); }
	void UpdateDesiredArmLocation(bool bDoTrace, bool bDoLocationLag, bool bDoRotationLag, float DeltaTime) { NativeCall<void, bool, bool, bool, float>(this, "USpringArmComponent.UpdateDesiredArmLocation", bDoTrace, bDoLocationLag, bDoRotationLag, DeltaTime); }
};

