#pragma once

#include "BaseDeclarations.h"
#include "FBoid.h"

struct FBoid
{
	char __padding[0x54L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FBoid.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FBoid.Rotation"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "FBoid.Velocity"); }
	FVector& AccelerationField() { return *GetNativePointerField<FVector*>(this, "FBoid.Acceleration"); }
	float& MaxSpeedField() { return *GetNativePointerField<float*>(this, "FBoid.MaxSpeed"); }
	float& MaxForceField() { return *GetNativePointerField<float*>(this, "FBoid.MaxForce"); }
	float& TurnRateField() { return *GetNativePointerField<float*>(this, "FBoid.TurnRate"); }
	float& SpiralTimeField() { return *GetNativePointerField<float*>(this, "FBoid.SpiralTime"); }
	FVector& TargetLocationField() { return *GetNativePointerField<FVector*>(this, "FBoid.TargetLocation"); }
	TEnumAsByte<enum EBoidType::Type>& TypeField() { return *GetNativePointerField<TEnumAsByte<enum EBoidType::Type>*>(this, "FBoid.Type"); }

	// Functions

	FVector * Align(FVector * result, const TArray<FBoid> * Boids, const FBoidBehavior * Behavior) { return NativeCall<FVector *, FVector *, const TArray<FBoid> *, const FBoidBehavior *>(this, "FBoid.Align", result, Boids, Behavior); }
	FVector * Avoidance(FVector * result, const TArray<FBoid> * Boids, FFlockPersistentData * InOutFlockData, const FBoidBehavior * Behavior) { return NativeCall<FVector *, FVector *, const TArray<FBoid> *, FFlockPersistentData *, const FBoidBehavior *>(this, "FBoid.Avoidance", result, Boids, InOutFlockData, Behavior); }
	FVector * Cohesion(FVector * result, const TArray<FBoid> * Boids, const FBoidBehavior * Behavior) { return NativeCall<FVector *, FVector *, const TArray<FBoid> *, const FBoidBehavior *>(this, "FBoid.Cohesion", result, Boids, Behavior); }
	float GetMaxForce(const FBoidBehavior * Behavior) { return NativeCall<float, const FBoidBehavior *>(this, "FBoid.GetMaxForce", Behavior); }
	float GetMaxSpeed(const FBoidBehavior * Behavior) { return NativeCall<float, const FBoidBehavior *>(this, "FBoid.GetMaxSpeed", Behavior); }
	void MoveTo(float DeltaTime, const TArray<FBoid> * Boids, FFlockPersistentData * InOutFlockData, const FBoidBehavior * Behavior, const FVector * NewWorldLocation, float TargetDistanceThreshold, bool bUseInterp, float InterpSpeed) { NativeCall<void, float, const TArray<FBoid> *, FFlockPersistentData *, const FBoidBehavior *, const FVector *, float, bool, float>(this, "FBoid.MoveTo", DeltaTime, Boids, InOutFlockData, Behavior, NewWorldLocation, TargetDistanceThreshold, bUseInterp, InterpSpeed); }
	void MoveTo(float DeltaTime, const FVector * NewWorldLocation, bool bUseInterp, float InterpSpeed) { NativeCall<void, float, const FVector *, bool, float>(this, "FBoid.MoveTo", DeltaTime, NewWorldLocation, bUseInterp, InterpSpeed); }
	FVector * Seek(FVector * result, const FVector * Target, const FBoidBehavior * Behavior) { return NativeCall<FVector *, FVector *, const FVector *, const FBoidBehavior *>(this, "FBoid.Seek", result, Target, Behavior); }
	FVector * Separate(FVector * result, const TArray<FBoid> * Boids, const FBoidBehavior * Behavior) { return NativeCall<FVector *, FVector *, const TArray<FBoid> *, const FBoidBehavior *>(this, "FBoid.Separate", result, Boids, Behavior); }
	void Tick(float DeltaTime, const TArray<FBoid> * Boids, FFlockPersistentData * InOutFlockData, const FBoidBehavior * Behavior, bool bIsTargeting) { NativeCall<void, float, const TArray<FBoid> *, FFlockPersistentData *, const FBoidBehavior *, bool>(this, "FBoid.Tick", DeltaTime, Boids, InOutFlockData, Behavior, bIsTargeting); }
	FBoid * operator=(const FBoid * __that) { return NativeCall<FBoid *, const FBoid *>(this, "FBoid.operator=", __that); }
};

