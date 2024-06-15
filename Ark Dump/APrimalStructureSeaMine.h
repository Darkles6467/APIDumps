#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct APrimalStructureSeaMine : APrimalStructure
{
	char __padding[0x90L];
	UParticleSystem * ActivatedMineParticleSystemField() { return GetNativePointerField<UParticleSystem *>(this, "APrimalStructureSeaMine.ActivatedMineParticleSystem"); }
	FVector& ActivatedMineParticleSystemOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureSeaMine.ActivatedMineParticleSystemOffset"); }
	float& SeaMineSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.SeaMineSpeed"); }
	float& SeaMineExplodeTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.SeaMineExplodeTime"); }
	float& ExplosionDamageField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionDamage"); }
	float& ExplosionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionRadius"); }
	float& ExplosionImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionImpulse"); }
	int& OwnerTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeaMine.OwnerTargetingTeam"); }
	FVector& LastKnownTargetLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureSeaMine.LastKnownTargetLocation"); }

	// Functions

	void ActivateSeaMine() { NativeCall<void>(this, "APrimalStructureSeaMine.ActivateSeaMine"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureSeaMine.BeginPlay"); }
	void Explode() { NativeCall<void>(this, "APrimalStructureSeaMine.Explode"); }
	bool FinalStructurePlacement(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bIsFlipped) { return NativeCall<bool, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool>(this, "APrimalStructureSeaMine.FinalStructurePlacement", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bIsFlipped); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureSeaMine.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void OnExplodingTriggerBeginOverlap(AActor * Other, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult * SweepResult) { NativeCall<void, AActor *, UPrimitiveComponent *, int, bool, const FHitResult *>(this, "APrimalStructureSeaMine.OnExplodingTriggerBeginOverlap", Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnHit(AActor * SelfActor, AActor * Other, FVector NormalImpulse, const FHitResult * Hit) { NativeCall<void, AActor *, AActor *, FVector, const FHitResult *>(this, "APrimalStructureSeaMine.OnHit", SelfActor, Other, NormalImpulse, Hit); }
	void OnRep_SeaMineTarget() { NativeCall<void>(this, "APrimalStructureSeaMine.OnRep_SeaMineTarget"); }
	void OnTriggerBeginOverlap(AActor * Other, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult * SweepResult) { NativeCall<void, AActor *, UPrimitiveComponent *, int, bool, const FHitResult *>(this, "APrimalStructureSeaMine.OnTriggerBeginOverlap", Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnTriggerEndOverlap(AActor * Other, UPrimitiveComponent * OtherComp, int OtherBodyIndex) { NativeCall<void, AActor *, UPrimitiveComponent *, int>(this, "APrimalStructureSeaMine.OnTriggerEndOverlap", Other, OtherComp, OtherBodyIndex); }
	void PlacedStructure(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureSeaMine.PlacedStructure", PC); }
	void PlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalStructureSeaMine.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void RefreshSeaMineTarget() { NativeCall<void>(this, "APrimalStructureSeaMine.RefreshSeaMineTarget"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureSeaMine.Tick", DeltaSeconds); }
};

