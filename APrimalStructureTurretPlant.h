#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureItemContainer.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FMultiUseEntry.h"
#include "UDamageType.h"
#include "FLifetimeProperty.h"
#include "FHitResult.h"

struct APrimalStructureTurret : APrimalStructureItemContainer
{
	char __padding[0x138L];
	float& FireIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireInterval"); }
	long double& LastFireTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastFireTime"); }
	long double& LastLongReloadStartTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastLongReloadStartTime"); }
	float& MaxFireYawDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFireYawDelta"); }
	float& MaxFirePitchDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFirePitchDelta"); }
	FVector& TargetingLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.TargetingLocOffset"); }
	float& TargetingRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.TargetingRotationInterpSpeed"); }
	FieldArray<float, 3> TargetingRangesField() { return {this, "APrimalStructureTurret.TargetingRanges"}; }
	FVector& TargetingTraceOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.TargetingTraceOffset"); }
	float& FireDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageAmount"); }
	float& FireDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageImpulse"); }
	UParticleSystem * TrailFXField() { return GetNativePointerField<UParticleSystem *>(this, "APrimalStructureTurret.TrailFX"); }
	FRotator& TurretAimRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureTurret.TurretAimRotOffset"); }
	FVector& AimTargetLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.AimTargetLocOffset"); }
	FVector& PlayerProneTargetOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.PlayerProneTargetOffset"); }
	float& AimSpreadField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AimSpread"); }
	char& RangeSettingField() { return *GetNativePointerField<char*>(this, "APrimalStructureTurret.RangeSetting"); }
	char& AISettingField() { return *GetNativePointerField<char*>(this, "APrimalStructureTurret.AISetting"); }
	char& WarningSettingField() { return *GetNativePointerField<char*>(this, "APrimalStructureTurret.WarningSetting"); }
	int& NumBulletsField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBullets"); }
	int& NumBulletsPerShotField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBulletsPerShot"); }
	int& LongAmmoReloadCDField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.LongAmmoReloadCD"); }
	float& MaxAmmoContainerReloadPercentField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxAmmoContainerReloadPercent"); }
	float& AlwaysEnableFastTurretTargetingOverVelocityField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AlwaysEnableFastTurretTargetingOverVelocity"); }
	float& WarningExpirationTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.WarningExpirationTime"); }
	float& BatteryIntervalFromActivationBeforeFiringField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.BatteryIntervalFromActivationBeforeFiring"); }
	bool& bWarnedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureTurret.bWarned"); }
	UChildActorComponent * MyChildEmitterTargetingEffectField() { return GetNativePointerField<UChildActorComponent *>(this, "APrimalStructureTurret.MyChildEmitterTargetingEffect"); }
	FRotator& DefaultTurretAimRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureTurret.DefaultTurretAimRotOffset"); }
	FVector& MuzzleLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurret.MuzzleLocOffset"); }
	long double& LastWarningTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureTurret.LastWarningTime"); }
	int& MagazineSizeField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.MagazineSize"); }
	float& RangeToCheckForAmmoField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.RangeToCheckForAmmo"); }
	float& AmmoBoxReloadCooldownField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AmmoBoxReloadCooldown"); }

	// Functions

	bool ApplyPinCode(AShooterPlayerController * ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController *, int, bool, int>(this, "APrimalStructureTurret.ApplyPinCode", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurret.BeginPlay"); }
	bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurret.CanFire"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureTurret.ClientMultiUse", ForPC, UseIndex); }
	void ClientsFireProjectile_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "APrimalStructureTurret.ClientsFireProjectile_Implementation", Origin, ShootDir); }
	void ConsumeAmmo() { NativeCall<void>(this, "APrimalStructureTurret.ConsumeAmmo"); }
	void CopySettingsToTurrentsInRange(APlayerController * ForPC, int PinCode) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureTurret.CopySettingsToTurrentsInRange", ForPC, PinCode); }
	void DealDamage(const FHitResult * Impact, const FVector * ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, const FHitResult *, const FVector *, int, TSubclassOf<UDamageType>, float>(this, "APrimalStructureTurret.DealDamage", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	void DoFire(int RandomSeed) { NativeCall<void, int>(this, "APrimalStructureTurret.DoFire", RandomSeed); }
	void DoFireProjectile(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "APrimalStructureTurret.DoFireProjectile", Origin, ShootDir); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureTurret.DrawHUD", HUD); }
	void FinishWarning() { NativeCall<void>(this, "APrimalStructureTurret.FinishWarning"); }
	FVector * GetAimPivotLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetAimPivotLocation", result); }
	void GetAmmoNearby(UClass ** FoundAmmoItemType) { NativeCall<void, UClass **>(this, "APrimalStructureTurret.GetAmmoNearby", FoundAmmoItemType); }
	FVector * GetAttackingFromLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetAttackingFromLocation", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureTurret.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureTurret.GetMultiUseEntries", ForPC, MultiUseEntries); }
	FName * GetMuzzleFlashSocketName(FName * result) { return NativeCall<FName *, FName *>(this, "APrimalStructureTurret.GetMuzzleFlashSocketName", result); }
	FVector * GetMuzzleLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetMuzzleLocation", result); }
	FRotator * GetMuzzleRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalStructureTurret.GetMuzzleRotation", result); }
	FVector * GetTargetAimAtLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurret.GetTargetAimAtLocation", result); }
	FName * GetTargetAltAimSocket(FName * result, APrimalCharacter * ForTarget) { return NativeCall<FName *, FName *, APrimalCharacter *>(this, "APrimalStructureTurret.GetTargetAltAimSocket", result, ForTarget); }
	FVector * GetTargetFireAtLocation(FVector * result, APrimalCharacter * ForTarget) { return NativeCall<FVector *, FVector *, APrimalCharacter *>(this, "APrimalStructureTurret.GetTargetFireAtLocation", result, ForTarget); }
	bool IsTurretFastTargetingAutoEnabled() { return NativeCall<bool>(this, "APrimalStructureTurret.IsTurretFastTargetingAutoEnabled"); }
	bool IsValidToFire() { return NativeCall<bool>(this, "APrimalStructureTurret.IsValidToFire"); }
	bool NetExecCommand(FName CommandName, const FNetExecParams * ExecParams) { return NativeCall<bool, FName, const FNetExecParams *>(this, "APrimalStructureTurret.NetExecCommand", CommandName, ExecParams); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "APrimalStructureTurret.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "APrimalStructureTurret.NotifyItemQuantityUpdated", anItem, amount); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureTurret.NotifyItemRemoved", anItem); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructureTurret.PreInitializeComponents"); }
	void SetPinToTurrentsInRange(APlayerController * ForPC, int PinCode) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureTurret.SetPinToTurrentsInRange", ForPC, PinCode); }
	void SetTarget(AActor * aTarget) { NativeCall<void, AActor *>(this, "APrimalStructureTurret.SetTarget", aTarget); }
	bool ShouldDealDamage(AActor * TestActor) { return NativeCall<bool, AActor *>(this, "APrimalStructureTurret.ShouldDealDamage", TestActor); }
	void SpawnImpactEffects(const FHitResult * Impact, const FVector * ShootDir) { NativeCall<void, const FHitResult *, const FVector *>(this, "APrimalStructureTurret.SpawnImpactEffects", Impact, ShootDir); }
	void SpawnTrailEffect(const FVector * EndPoint) { NativeCall<void, const FVector *>(this, "APrimalStructureTurret.SpawnTrailEffect", EndPoint); }
	void StartWarning() { NativeCall<void>(this, "APrimalStructureTurret.StartWarning"); }
	void Stasis() { NativeCall<void>(this, "APrimalStructureTurret.Stasis"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureTurret.Tick", DeltaSeconds); }
	void ToggleCopySettingsVisualRange() { NativeCall<void>(this, "APrimalStructureTurret.ToggleCopySettingsVisualRange"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureTurret.TryMultiUse", ForPC, UseIndex); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureTurret.Unstasis"); }
	void UpdateNumBullets() { NativeCall<void>(this, "APrimalStructureTurret.UpdateNumBullets"); }
	void UpdatedTargeting() { NativeCall<void>(this, "APrimalStructureTurret.UpdatedTargeting"); }
	bool UseTurretFastTargeting(bool bCheckFastTargetingAutoEnabled) { return NativeCall<bool, bool>(this, "APrimalStructureTurret.UseTurretFastTargeting", bCheckFastTargetingAutoEnabled); }
	void WeaponTraceHits(TArray<FHitResult> * HitResults, const FVector * StartTrace, const FVector * EndTrace) { NativeCall<void, TArray<FHitResult> *, const FVector *, const FVector *>(this, "APrimalStructureTurret.WeaponTraceHits", HitResults, StartTrace, EndTrace); }
	bool BPCopyCustomSettingsFromTurret(APrimalStructureTurret * FromTurret) { return NativeCall<bool, APrimalStructureTurret *>(this, "APrimalStructureTurret.BPCopyCustomSettingsFromTurret", FromTurret); }
	bool BPTurretPreventsTargeting(APrimalCharacter * PotentialTarget) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalStructureTurret.BPTurretPreventsTargeting", PotentialTarget); }
};

struct APrimalStructureTurretPlant : APrimalStructureTurret
{
	char __padding[0x60L];
	TArray<FName>& PlantMuzzleSocketsField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructureTurretPlant.PlantMuzzleSockets"); }
	TArray<UAnimMontage *>& PlantAttackAnimsField() { return *GetNativePointerField<TArray<UAnimMontage *>*>(this, "APrimalStructureTurretPlant.PlantAttackAnims"); }
	float& PlantHealthRecoverPerSecField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.PlantHealthRecoverPerSec"); }
	float& AmountOfFertilizerToUsePerShotField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.AmountOfFertilizerToUsePerShot"); }
	float& HealthRecoverPerSecField() { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.HealthRecoverPerSec"); }
	FName& AttackOriginSocketField() { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretPlant.AttackOriginSocket"); }
	FVector& AttackOriginLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureTurretPlant.AttackOriginLocation"); }
	FRotator& AttackOriginRotationField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureTurretPlant.AttackOriginRotation"); }
	int& SelectedAttackOriginField() { return *GetNativePointerField<int*>(this, "APrimalStructureTurretPlant.SelectedAttackOrigin"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalStructureTurretPlant.BeginPlay"); }
	bool CanFire() { return NativeCall<bool>(this, "APrimalStructureTurretPlant.CanFire"); }
	void Demolish(APlayerController * ForPC, AActor * DamageCauser) { NativeCall<void, APlayerController *, AActor *>(this, "APrimalStructureTurretPlant.Demolish", ForPC, DamageCauser); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureTurretPlant.GetMultiUseEntries", ForPC, MultiUseEntries); }
	FName * GetMuzzleFlashSocketName(FName * result) { return NativeCall<FName *, FName *>(this, "APrimalStructureTurretPlant.GetMuzzleFlashSocketName", result); }
	FVector * GetMuzzleLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureTurretPlant.GetMuzzleLocation", result); }
	FRotator * GetMuzzleRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalStructureTurretPlant.GetMuzzleRotation", result); }
	void PlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalStructureTurretPlant.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayShootAnim() { NativeCall<void>(this, "APrimalStructureTurretPlant.PlayShootAnim"); }
	void RecoverHealthTimer() { NativeCall<void>(this, "APrimalStructureTurretPlant.RecoverHealthTimer"); }
	void SelectAttackOrigin(const FVector * TargetPosition) { NativeCall<void, const FVector *>(this, "APrimalStructureTurretPlant.SelectAttackOrigin", TargetPosition); }
	void SetHealthRecoveryTimer() { NativeCall<void>(this, "APrimalStructureTurretPlant.SetHealthRecoveryTimer"); }
	void Stasis() { NativeCall<void>(this, "APrimalStructureTurretPlant.Stasis"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureTurretPlant.TryMultiUse", ForPC, UseIndex); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructureTurretPlant.Unstasis"); }
};

