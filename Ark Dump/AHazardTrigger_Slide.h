#pragma once

#include "BaseDeclarations.h"
#include "ABaseBoxTrigger.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct AHazardTrigger : ABaseBoxTrigger
{
	char __padding[0x20L];
	FVector& BoundsField() { return *GetNativePointerField<FVector*>(this, "AHazardTrigger.Bounds"); }
	bool& bIsActiveField() { return *GetNativePointerField<bool*>(this, "AHazardTrigger.bIsActive"); }
	long double& LastActivationTimeField() { return *GetNativePointerField<long double*>(this, "AHazardTrigger.LastActivationTime"); }
	bool& bConformToTerrainField() { return *GetNativePointerField<bool*>(this, "AHazardTrigger.bConformToTerrain"); }

	// Functions

	void Activate() { NativeCall<void>(this, "AHazardTrigger.Activate"); }
	void BeginPlay() { NativeCall<void>(this, "AHazardTrigger.BeginPlay"); }
	void ClientActivation_Implementation(bool bActivate) { NativeCall<void, bool>(this, "AHazardTrigger.ClientActivation_Implementation", bActivate); }
	void Deactivate() { NativeCall<void>(this, "AHazardTrigger.Deactivate"); }
	void Destroyed() { NativeCall<void>(this, "AHazardTrigger.Destroyed"); }
	bool FindFloor(const FVector * TestLocation, FFloorSlopeData * FloorSlope, float DepthOverride, bool UseActorNormal) { return NativeCall<bool, const FVector *, FFloorSlopeData *, float, bool>(this, "AHazardTrigger.FindFloor", TestLocation, FloorSlope, DepthOverride, UseActorNormal); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AHazardTrigger.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void OnConstruction(const FTransform * Transform) { NativeCall<void, const FTransform *>(this, "AHazardTrigger.OnConstruction", Transform); }
	void OnTriggerBeginOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult * SweepResult) { NativeCall<void, AActor *, UPrimitiveComponent *, int, bool, const FHitResult *>(this, "AHazardTrigger.OnTriggerBeginOverlap", OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnTriggerEndOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex) { NativeCall<void, AActor *, UPrimitiveComponent *, int>(this, "AHazardTrigger.OnTriggerEndOverlap", OtherActor, OtherComp, OtherBodyIndex); }
	void ClientActivation(bool bActivate) { NativeCall<void, bool>(this, "AHazardTrigger.ClientActivation", bActivate); }
	void OnActivated() { NativeCall<void>(this, "AHazardTrigger.OnActivated"); }
	void OnCharacterEnter(APrimalCharacter * Character) { NativeCall<void, APrimalCharacter *>(this, "AHazardTrigger.OnCharacterEnter", Character); }
	void OnCharacterExit(APrimalCharacter * Character) { NativeCall<void, APrimalCharacter *>(this, "AHazardTrigger.OnCharacterExit", Character); }
	void OnDeactivated() { NativeCall<void>(this, "AHazardTrigger.OnDeactivated"); }
};

struct AHazardTrigger_Slide : AHazardTrigger
{
	char __padding[0xe8L];
	TSubobjectPtr<UAudioComponent>& SoundToPlayField() { return *GetNativePointerField<TSubobjectPtr<UAudioComponent>*>(this, "AHazardTrigger_Slide.SoundToPlay"); }
	TArray<USplineComponent *>& SplinesField() { return *GetNativePointerField<TArray<USplineComponent *>*>(this, "AHazardTrigger_Slide.Splines"); }
	TArray<UParticleSystem *>& SlideFXField() { return *GetNativePointerField<TArray<UParticleSystem *>*>(this, "AHazardTrigger_Slide.SlideFX"); }
	int& StructureDamageField() { return *GetNativePointerField<int*>(this, "AHazardTrigger_Slide.StructureDamage"); }
	float& SplineSeparationField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.SplineSeparation"); }
	float& MinTimeBetweenActivationsField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MinTimeBetweenActivations"); }
	float& SlideSpeedField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.SlideSpeed"); }
	float& WaveWidthField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.WaveWidth"); }
	float& ImpulseField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.Impulse"); }
	float& MinWarningIntervalField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MinWarningInterval"); }
	float& MaxWarningIntervalField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MaxWarningInterval"); }
	float& ActivationChanceField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ActivationChance"); }
	float& ActivationIncrementField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ActivationIncrement"); }
	float& MinProjectileIntervalField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MinProjectileInterval"); }
	float& MaxProjectileIntervalField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.MaxProjectileInterval"); }
	float& ImpulseVelocityLimitField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ImpulseVelocityLimit"); }
	float& WarningTimerField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.WarningTimer"); }
	float& CurrentActivationChanceField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.CurrentActivationChance"); }
	float& ProjectileTimerField() { return *GetNativePointerField<float*>(this, "AHazardTrigger_Slide.ProjectileTimer"); }
	TArray<FSlideData>& SlideComponentsField() { return *GetNativePointerField<TArray<FSlideData>*>(this, "AHazardTrigger_Slide.SlideComponents"); }
	TArray<FVector>& SlidePositionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "AHazardTrigger_Slide.SlidePositions"); }

	// Functions

	void Activate() { NativeCall<void>(this, "AHazardTrigger_Slide.Activate"); }
	void BeginPlay() { NativeCall<void>(this, "AHazardTrigger_Slide.BeginPlay"); }
	bool CanActivate() { return NativeCall<bool>(this, "AHazardTrigger_Slide.CanActivate"); }
	UParticleSystem * ChooseSlideFX() { return NativeCall<UParticleSystem *>(this, "AHazardTrigger_Slide.ChooseSlideFX"); }
	void Deactivate() { NativeCall<void>(this, "AHazardTrigger_Slide.Deactivate"); }
	void EndSlide() { NativeCall<void>(this, "AHazardTrigger_Slide.EndSlide"); }
	void LaunchProjectile() { NativeCall<void>(this, "AHazardTrigger_Slide.LaunchProjectile"); }
	void OnCharacterEnter(APrimalCharacter * Character) { NativeCall<void, APrimalCharacter *>(this, "AHazardTrigger_Slide.OnCharacterEnter", Character); }
	void OnCharacterExit(APrimalCharacter * Character) { NativeCall<void, APrimalCharacter *>(this, "AHazardTrigger_Slide.OnCharacterExit", Character); }
	void OnConstruction(const FTransform * Transform) { NativeCall<void, const FTransform *>(this, "AHazardTrigger_Slide.OnConstruction", Transform); }
	void SpawnProjectile_Implementation(FVector Location, FVector Heading) { NativeCall<void, FVector, FVector>(this, "AHazardTrigger_Slide.SpawnProjectile_Implementation", Location, Heading); }
	void SpawnWarningFX_Implementation() { NativeCall<void>(this, "AHazardTrigger_Slide.SpawnWarningFX_Implementation"); }
	void StartSlide() { NativeCall<void>(this, "AHazardTrigger_Slide.StartSlide"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AHazardTrigger_Slide.Tick", DeltaSeconds); }
	void UpdateActive(float DeltaSeconds) { NativeCall<void, float>(this, "AHazardTrigger_Slide.UpdateActive", DeltaSeconds); }
	void UpdateInactive(float DeltaSeconds) { NativeCall<void, float>(this, "AHazardTrigger_Slide.UpdateInactive", DeltaSeconds); }
	void SpawnProjectile(FVector Location, FVector Heading) { NativeCall<void, FVector, FVector>(this, "AHazardTrigger_Slide.SpawnProjectile", Location, Heading); }
	void SpawnWarningFX() { NativeCall<void>(this, "AHazardTrigger_Slide.SpawnWarningFX"); }
};

