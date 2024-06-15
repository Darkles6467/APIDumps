#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureSeating.h"
#include "APrimalStructureItemContainer.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UDamageType.h"
#include "FLifetimeProperty.h"
#include "FHitResult.h"

struct APrimalStructureTurretBallista : APrimalStructureSeating
{
	char __padding[0x1e8L];
	FName& TurretTipBoneField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.TurretTipBone"); }
	FName& RiderOverrideSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.RiderOverrideSocketName"); }
	float& ShootingDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingDamageAmount"); }
	float& ShootingDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingDamageImpulse"); }
	UParticleSystem * ShootingTrailFXField() { return GetNativePointerField<UParticleSystem *>(this, "APrimalStructureTurretBallista.ShootingTrailFX"); }
	float& ShootingAimSpreadField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingAimSpread"); }
	float& ShootingFireIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingFireInterval"); }
	long double& LastShootingFireTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurretBallista.LastShootingFireTime"); }
	bool& bIsTryingToShootField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bIsTryingToShoot"); }
	bool& bIsShootingField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bIsShooting"); }
	bool& bIsTargetingField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bIsTargeting"); }
	bool& bQueuedShotField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bQueuedShot"); }
	float& YawViewRotationField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.YawViewRotation"); }
	float& OldYawViewRotationField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.OldYawViewRotation"); }
	float& PitctViewRotationField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.PitctViewRotation"); }
	FRotator& RotationInputField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureTurretBallista.RotationInput"); }
	USoundCue * FireSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalStructureTurretBallista.FireSound"); }
	USoundCue * EmptyFireSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalStructureTurretBallista.EmptyFireSound"); }
	USoundCue * RotateSoundCueField() { return GetNativePointerField<USoundCue *>(this, "APrimalStructureTurretBallista.RotateSoundCue"); }
	float& RotateSpeedThresholdField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSpeedThreshold"); }
	float& RotateSoundFadeInSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundFadeInSpeed"); }
	float& RotateSoundFadeOutSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundFadeOutSpeed"); }
	float& RotateSoundMinVolumeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundMinVolume"); }
	float& RotateSoundMaxVolumeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundMaxVolume"); }
	float& TPVCameraPitchMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraPitchMin"); }
	float& TPVCameraPitchMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraPitchMax"); }
	float& TPVCameraYawMinField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraYawMin"); }
	float& TPVCameraYawMaxField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraYawMax"); }
	UAnimMontage * FireBallistaAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalStructureTurretBallista.FireBallistaAnimation"); }
	UAnimMontage * EmptyBallistaAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalStructureTurretBallista.EmptyBallistaAnimation"); }
	UAnimMontage * ReloadBallistaAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalStructureTurretBallista.ReloadBallistaAnimation"); }
	bool& bIsLoadedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bIsLoaded"); }
	float& ControllerRiddingYawField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ControllerRiddingYaw"); }
	FName& TurretSkeletalMeshComponentNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.TurretSkeletalMeshComponentName"); }
	FName& AttachedModuleComponentNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.AttachedModuleComponentName"); }
	UAnimMontage * AttachedModuleFireAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalStructureTurretBallista.AttachedModuleFireAnimation"); }
	UAnimMontage * AttachedModuleReloadAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalStructureTurretBallista.AttachedModuleReloadAnimation"); }
	FName& ProjectileMeshAttachPointField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileMeshAttachPoint"); }
	FName& ProjectileMeshAttachPointForMeshOnlyField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileMeshAttachPointForMeshOnly"); }
	FName& ProjectileBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileBoneName"); }
	char& bQueueReloadingAnimationField() { return *GetNativePointerField<char*>(this, "APrimalStructureTurretBallista.bQueueReloadingAnimation"); }
	TSubobjectPtr<UAudioComponent>& RotateSoundComponentField() { return *GetNativePointerField<TSubobjectPtr<UAudioComponent>*>(this, "APrimalStructureTurretBallista.RotateSoundComponent"); }
	int& AmmoCountField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurretBallista.AmmoCount"); }
	int& MagazineSizeField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurretBallista.MagazineSize"); }
	float& RangeToCheckForAmmoField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RangeToCheckForAmmo"); }
	FString& CurrentAmmoSourceStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretBallista.CurrentAmmoSourceString"); }
	long double& AuthorityDisableUpdateMeshAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurretBallista.AuthorityDisableUpdateMeshAtTime"); }
	UStaticMesh * AmmoItemTemplateMeshField() { return GetNativePointerField<UStaticMesh *>(this, "APrimalStructureTurretBallista.AmmoItemTemplateMesh"); }
	TArray<UStaticMesh *>& AlternateAmmoItemTemplateMeshesField() { return *GetNativePointerField<TArray<UStaticMesh *>*>(this, "APrimalStructureTurretBallista.AlternateAmmoItemTemplateMeshes"); }
	float& DefaultAmmoReloadAnimSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.DefaultAmmoReloadAnimSpeed"); }
	TArray<float>& AlternateAmmoReloadAnimSpeedsField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalStructureTurretBallista.AlternateAmmoReloadAnimSpeeds"); }
	float& HealthCostPerShotField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.HealthCostPerShot"); }
	float& MinimumHealthPercentToShootField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.MinimumHealthPercentToShoot"); }
	float& InstantFireTraceRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.InstantFireTraceRange"); }
	bool& AimFromPlayerViewField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.AimFromPlayerView"); }

	// Functions

	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "APrimalStructureTurretBallista.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurretBallista.BeginPlay"); }
	bool CanDemolish() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.CanDemolish"); }
	bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.CanFire"); }
	bool CanReload() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.CanReload"); }
	bool CanUse(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureTurretBallista.CanUse", ForPC); }
	void ClientsFireProjectile_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "APrimalStructureTurretBallista.ClientsFireProjectile_Implementation", Origin, ShootDir); }
	void ClientsPlayFireAnim_Implementation() { NativeCall<void>(this, "APrimalStructureTurretBallista.ClientsPlayFireAnim_Implementation"); }
	void Control(AShooterCharacter * ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter *, int, bool>(this, "APrimalStructureTurretBallista.Control", ShooterCharacter, SeatNumber, bLockedToSeat); }
	void DealDamage(const FHitResult * Impact, const FVector * ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, const FHitResult *, const FVector *, int, TSubclassOf<UDamageType>, float>(this, "APrimalStructureTurretBallista.DealDamage", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	void DealDamageOnServer(const FHitResult * Impact, const FVector ShootDir) { NativeCall<void, const FHitResult *, const FVector>(this, "APrimalStructureTurretBallista.DealDamageOnServer", Impact, ShootDir); }
	void Demolish(APlayerController * ForPC, AActor * DamageCauser) { NativeCall<void, APlayerController *, AActor *>(this, "APrimalStructureTurretBallista.Demolish", ForPC, DamageCauser); }
	bool Die(float KillingDamage, const FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, const FDamageEvent *, AController *, AActor *>(this, "APrimalStructureTurretBallista.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void DoFire(int RandomSeed) { NativeCall<void, int>(this, "APrimalStructureTurretBallista.DoFire", RandomSeed); }
	void DoFireProjectile(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "APrimalStructureTurretBallista.DoFireProjectile", Origin, ShootDir); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureTurretBallista.DrawHUD", HUD); }
	void Fire(FVector FireLocation, FVector FireDirection) { NativeCall<void, FVector, FVector>(this, "APrimalStructureTurretBallista.Fire", FireLocation, FireDirection); }
	void ForceRefreshBones(float TickPoseDelta) { NativeCall<void, float>(this, "APrimalStructureTurretBallista.ForceRefreshBones", TickPoseDelta); }
	void ForceUpdateMeshForTime(float ForceUpdateForTime) { NativeCall<void, float>(this, "APrimalStructureTurretBallista.ForceUpdateMeshForTime", ForceUpdateForTime); }
	int GetAmmoAmount(UClass * ForAmmoType, bool bIncludePlayerInventory) { return NativeCall<int, UClass *, bool>(this, "APrimalStructureTurretBallista.GetAmmoAmount", ForAmmoType, bIncludePlayerInventory); }
	int GetAmmoNearby(UClass * ForAmmoType) { return NativeCall<int, UClass *>(this, "APrimalStructureTurretBallista.GetAmmoNearby", ForAmmoType); }
	FVector * GetAttackingFromLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurretBallista.GetAttackingFromLocation", result); }
	void GetCameraLocationAndRotation(FVector * Location, FRotator * Rotation) { NativeCall<void, FVector *, FRotator *>(this, "APrimalStructureTurretBallista.GetCameraLocationAndRotation", Location, Rotation); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureTurretBallista.GetLifetimeReplicatedProps", OutLifetimeProps); }
	FName * GetMuzzleFlashSocketName(FName * result) { return NativeCall<FName *, FName *>(this, "APrimalStructureTurretBallista.GetMuzzleFlashSocketName", result); }
	FVector * GetMuzzleLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurretBallista.GetMuzzleLocation", result); }
	FRotator * GetMuzzleRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalStructureTurretBallista.GetMuzzleRotation", result); }
	void GetShootingOriginAndDirection(FVector * Origin, FVector * Direction) { NativeCall<void, FVector *, FVector *>(this, "APrimalStructureTurretBallista.GetShootingOriginAndDirection", Origin, Direction); }
	FVector * GetUnboardLocation(FVector * result, FVector CharacterLocation) { return NativeCall<FVector *, FVector *, FVector>(this, "APrimalStructureTurretBallista.GetUnboardLocation", result, CharacterLocation); }
	bool IsBallistaPenetratingWalls() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.IsBallistaPenetratingWalls"); }
	bool NetExecCommand(FName CommandName, const FNetExecParams * ExecParams) { return NativeCall<bool, FName, const FNetExecParams *>(this, "APrimalStructureTurretBallista.NetExecCommand", CommandName, ExecParams); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "APrimalStructureTurretBallista.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "APrimalStructureTurretBallista.NotifyItemQuantityUpdated", anItem, amount); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureTurretBallista.NotifyItemRemoved", anItem); }
	void OnRep_IsShooting() { NativeCall<void>(this, "APrimalStructureTurretBallista.OnRep_IsShooting"); }
	void OnRep_Loaded() { NativeCall<void>(this, "APrimalStructureTurretBallista.OnRep_Loaded"); }
	void PlayEmptySound() { NativeCall<void>(this, "APrimalStructureTurretBallista.PlayEmptySound"); }
	void PlayFireAnimation() { NativeCall<void>(this, "APrimalStructureTurretBallista.PlayFireAnimation"); }
	void PlayReloadAnimation() { NativeCall<void>(this, "APrimalStructureTurretBallista.PlayReloadAnimation"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureTurretBallista.PostInitializeComponents"); }
	void Release(AShooterCharacter * ShooterCharacter) { NativeCall<void, AShooterCharacter *>(this, "APrimalStructureTurretBallista.Release", ShooterCharacter); }
	void ServerSetTargeting_Implementation(bool bTargeting) { NativeCall<void, bool>(this, "APrimalStructureTurretBallista.ServerSetTargeting_Implementation", bTargeting); }
	void ServerSwitchAmmoType_Implementation() { NativeCall<void>(this, "APrimalStructureTurretBallista.ServerSwitchAmmoType_Implementation"); }
	void ShowProjectileMesh(bool Visible, bool bIsFromStartLoading) { NativeCall<void, bool, bool>(this, "APrimalStructureTurretBallista.ShowProjectileMesh", Visible, bIsFromStartLoading); }
	void SpawnImpactEffects(const FHitResult * Impact, const FVector * ShootDir) { NativeCall<void, const FHitResult *, const FVector *>(this, "APrimalStructureTurretBallista.SpawnImpactEffects", Impact, ShootDir); }
	void SpawnTrailEffect(const FVector * EndPoint) { NativeCall<void, const FVector *>(this, "APrimalStructureTurretBallista.SpawnTrailEffect", EndPoint); }
	void StartFire() { NativeCall<void>(this, "APrimalStructureTurretBallista.StartFire"); }
	void StopFire() { NativeCall<void>(this, "APrimalStructureTurretBallista.StopFire"); }
	void SwitchAmmoType() { NativeCall<void>(this, "APrimalStructureTurretBallista.SwitchAmmoType"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureTurretBallista.Tick", DeltaSeconds); }
	void TryFiring_Implementation(bool shouldFire) { NativeCall<void, bool>(this, "APrimalStructureTurretBallista.TryFiring_Implementation", shouldFire); }
	void UpdateAmmoCount(bool bIncludePlayerInventory, bool bIgnoreGetAmmoNearby) { NativeCall<void, bool, bool>(this, "APrimalStructureTurretBallista.UpdateAmmoCount", bIncludePlayerInventory, bIgnoreGetAmmoNearby); }
	void WeaponTraceHits(TArray<FHitResult> * HitResults, const FVector * StartTrace, const FVector * EndTrace) { NativeCall<void, TArray<FHitResult> *, const FVector *, const FVector *>(this, "APrimalStructureTurretBallista.WeaponTraceHits", HitResults, StartTrace, EndTrace); }
	bool BPCanFire() { return NativeCall<bool>(this, "APrimalStructureTurretBallista.BPCanFire"); }
	float BPGetDamageMultiplier() { return NativeCall<float>(this, "APrimalStructureTurretBallista.BPGetDamageMultiplier"); }
	void ClientsPlayFireAnim() { NativeCall<void>(this, "APrimalStructureTurretBallista.ClientsPlayFireAnim"); }
	void ServerSetTargeting(bool bNewTargeting) { NativeCall<void, bool>(this, "APrimalStructureTurretBallista.ServerSetTargeting", bNewTargeting); }
	void ServerSwitchAmmoType() { NativeCall<void>(this, "APrimalStructureTurretBallista.ServerSwitchAmmoType"); }
	void TryFiring(bool shouldFire) { NativeCall<void, bool>(this, "APrimalStructureTurretBallista.TryFiring", shouldFire); }
};

