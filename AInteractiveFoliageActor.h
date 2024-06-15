#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AStaticMeshActor : AActor
{
	char __padding[0x10L];
	bool& bStaticMeshReplicateMovementField() { return *GetNativePointerField<bool*>(this, "AStaticMeshActor.bStaticMeshReplicateMovement"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "AStaticMeshActor.BeginPlay"); }
	FString * GetDetailedInfoInternal(FString * result) { return NativeCall<FString *, FString *>(this, "AStaticMeshActor.GetDetailedInfoInternal", result); }
	void PostLoad() { NativeCall<void>(this, "AStaticMeshActor.PostLoad"); }
};

struct AInteractiveFoliageActor : AStaticMeshActor
{
	char __padding[0x60L];
	TSubobjectPtr<UCapsuleComponent>& CapsuleComponentField() { return *GetNativePointerField<TSubobjectPtr<UCapsuleComponent>*>(this, "AInteractiveFoliageActor.CapsuleComponent"); }
	FVector& TouchingActorEntryPositionField() { return *GetNativePointerField<FVector*>(this, "AInteractiveFoliageActor.TouchingActorEntryPosition"); }
	FVector& FoliageVelocityField() { return *GetNativePointerField<FVector*>(this, "AInteractiveFoliageActor.FoliageVelocity"); }
	FVector& FoliageForceField() { return *GetNativePointerField<FVector*>(this, "AInteractiveFoliageActor.FoliageForce"); }
	FVector& FoliagePositionField() { return *GetNativePointerField<FVector*>(this, "AInteractiveFoliageActor.FoliagePosition"); }
	float& FoliageDamageImpulseScaleField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.FoliageDamageImpulseScale"); }
	float& FoliageTouchImpulseScaleField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.FoliageTouchImpulseScale"); }
	float& FoliageStiffnessField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.FoliageStiffness"); }
	float& FoliageStiffnessQuadraticField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.FoliageStiffnessQuadratic"); }
	float& FoliageDampingField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.FoliageDamping"); }
	float& MaxDamageImpulseField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.MaxDamageImpulse"); }
	float& MaxTouchImpulseField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.MaxTouchImpulse"); }
	float& MaxForceField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.MaxForce"); }
	float& MassField() { return *GetNativePointerField<float*>(this, "AInteractiveFoliageActor.Mass"); }

	// Functions

	void CapsuleTouched(AActor * Other, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult * SweepResult) { NativeCall<void, AActor *, UPrimitiveComponent *, int, bool, const FHitResult *>(this, "AInteractiveFoliageActor.CapsuleTouched", Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void PostActorCreated() { NativeCall<void>(this, "AInteractiveFoliageActor.PostActorCreated"); }
	void PostLoad() { NativeCall<void>(this, "AInteractiveFoliageActor.PostLoad"); }
	void SetupCollisionCylinder() { NativeCall<void>(this, "AInteractiveFoliageActor.SetupCollisionCylinder"); }
	float TakeDamage(float DamageAmount, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, const FDamageEvent *, AController *, AActor *>(this, "AInteractiveFoliageActor.TakeDamage", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AInteractiveFoliageActor.Tick", DeltaSeconds); }
};

