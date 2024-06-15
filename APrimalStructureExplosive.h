#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructure.h"
#include "FLifetimeProperty.h"

struct APrimalStructureExplosive : APrimalStructure
{
	char __padding[0xa0L];
	unsigned int& ConstructorPlayerDataIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureExplosive.ConstructorPlayerDataID"); }
	AShooterCharacter * ConstructorPawnField() { return GetNativePointerField<AShooterCharacter *>(this, "APrimalStructureExplosive.ConstructorPawn"); }
	int& ConstructorTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalStructureExplosive.ConstructorTargetingTeam"); }
	FVector& ExplosiveLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureExplosive.ExplosiveLocOffset"); }
	FRotator& ExplosiveRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureExplosive.ExplosiveRotOffset"); }
	float& PlacementInitialSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementInitialSpeed"); }
	float& PlacementMaxSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementMaxSpeed"); }
	float& PlacementAccelField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementAccel"); }
	float& ExplosionDamageField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionDamage"); }
	float& ExplosionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionRadius"); }
	float& ExplosionImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionImpulse"); }
	float& AlertDinosRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.AlertDinosRange"); }
	int& PickUpQuantityField() { return *GetNativePointerField<int*>(this, "APrimalStructureExplosive.PickUpQuantity"); }
	float& AnimationTargetHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.AnimationTargetHeight"); }
	float& PlacementInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementInterpSpeed"); }
	bool& bExplosiveReadyField() { return *GetNativePointerField<bool*>(this, "APrimalStructureExplosive.bExplosiveReady"); }
	FVector& OriginalRelativeLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureExplosive.OriginalRelativeLocation"); }
	FRotator& OriginalRelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureExplosive.OriginalRelativeRotation"); }

	// Functions

	void ApplyPlacementPreview() { NativeCall<void>(this, "APrimalStructureExplosive.ApplyPlacementPreview"); }
	bool CanDetonateMe(AShooterCharacter * Character, bool bUsingRemote) { return NativeCall<bool, AShooterCharacter *, bool>(this, "APrimalStructureExplosive.CanDetonateMe", Character, bUsingRemote); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureExplosive.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructureExplosive.LoadedFromSaveGame"); }
	void NetDoSpawnEffects_Implementation() { NativeCall<void>(this, "APrimalStructureExplosive.NetDoSpawnEffects_Implementation"); }
	void NetIgnoreDestructionEvents_Implementation() { NativeCall<void>(this, "APrimalStructureExplosive.NetIgnoreDestructionEvents_Implementation"); }
	void PlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalStructureExplosive.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureExplosive.PostSpawnInitialize"); }
	void PrepareAsPlacementPreview() { NativeCall<void>(this, "APrimalStructureExplosive.PrepareAsPlacementPreview"); }
	void SetPlayerConstructor(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "APrimalStructureExplosive.SetPlayerConstructor", PC); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureExplosive.Tick", DeltaSeconds); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureExplosive.TryMultiUse", ForPC, UseIndex); }
};

