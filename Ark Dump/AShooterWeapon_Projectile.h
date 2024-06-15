#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon.h"
#include "AShooterProjectile.h"

struct AShooterWeapon_Projectile : AShooterWeapon
{
	char __padding[0xb0L];
	bool& bUseAmmoOnFireProjectileField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Projectile.bUseAmmoOnFireProjectile"); }
	USoundCue * FireProjectileSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon_Projectile.FireProjectileSound"); }
	FName& ProjectileAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Projectile.ProjectileAttachPoint3P"); }
	bool& bSpawnProjectileOnClientField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Projectile.bSpawnProjectileOnClient"); }
	bool& bUseBPSelectProjectileToFireField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Projectile.bUseBPSelectProjectileToFire"); }
	float& ProjectileSpreadYawField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ProjectileSpreadYaw"); }
	float& ProjectileSpreadPitchField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ProjectileSpreadPitch"); }
	float& ServerMaxProjectileAngleErrorField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ServerMaxProjectileAngleError"); }
	float& ServerMaxProjectileOriginErrorField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ServerMaxProjectileOriginError"); }
	FName& Mesh1PProjectileBoneNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Projectile.Mesh1PProjectileBoneName"); }
	float& LockOnYScreenPercentageField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.LockOnYScreenPercentage"); }
	bool& bUseLockOnField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Projectile.bUseLockOn"); }
	float& LockOnTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.LockOnTime"); }
	float& CurrentLockOnTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.CurrentLockOnTime"); }
	float& LockOnMaxTraceDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.LockOnMaxTraceDistance"); }
	FVector& LockOnTraceBoxExtentField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Projectile.LockOnTraceBoxExtent"); }
	bool& bHasLockedTargetField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Projectile.bHasLockedTarget"); }
	FVector& LockOnRelativeHitLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Projectile.LockOnRelativeHitLocation"); }
	TArray<FWeaponCachedProjectileShot>& CachedShotsField() { return *GetNativePointerField<TArray<FWeaponCachedProjectileShot>*>(this, "AShooterWeapon_Projectile.CachedShots"); }

	// Functions

	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "AShooterWeapon_Projectile.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void ApplyWeaponConfig(FProjectileWeaponData * Data) { NativeCall<void, FProjectileWeaponData *>(this, "AShooterWeapon_Projectile.ApplyWeaponConfig", Data); }
	void AttachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Projectile.AttachOtherMeshes"); }
	void CheckRefireTimer() { NativeCall<void>(this, "AShooterWeapon_Projectile.CheckRefireTimer"); }
	void ClearLockOn() { NativeCall<void>(this, "AShooterWeapon_Projectile.ClearLockOn"); }
	void ClientsFireProjectileEx_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir, float Speed, int RandomSeed) { NativeCall<void, FVector, FVector_NetQuantizeNormal, float, int>(this, "AShooterWeapon_Projectile.ClientsFireProjectileEx_Implementation", Origin, ShootDir, Speed, RandomSeed); }
	void ClientsFireProjectile_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "AShooterWeapon_Projectile.ClientsFireProjectile_Implementation", Origin, ShootDir); }
	void DoFireProjectile(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "AShooterWeapon_Projectile.DoFireProjectile", Origin, ShootDir); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "AShooterWeapon_Projectile.DrawHUD", HUD); }
	void FireProjectile(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "AShooterWeapon_Projectile.FireProjectile", Origin, ShootDir); }
	void FireProjectileEx(FVector Origin, FVector_NetQuantizeNormal ShootDir, float Speed, int RandomSeed) { NativeCall<void, FVector, FVector_NetQuantizeNormal, float, int>(this, "AShooterWeapon_Projectile.FireProjectileEx", Origin, ShootDir, Speed, RandomSeed); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_Projectile.FireWeapon"); }
	FVector * GetAdjustedAim(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterWeapon_Projectile.GetAdjustedAim", result); }
	void GetProjectileSpawnTransform(FVector * Origin, FVector * ShootDir) { NativeCall<void, FVector *, FVector *>(this, "AShooterWeapon_Projectile.GetProjectileSpawnTransform", Origin, ShootDir); }
	FHitResult * GetTrajectoryTarget(FHitResult * result, int SubSteps, float TotalTime) { return NativeCall<FHitResult *, FHitResult *, int, float>(this, "AShooterWeapon_Projectile.GetTrajectoryTarget", result, SubSteps, TotalTime); }
	void HideProjectile() { NativeCall<void>(this, "AShooterWeapon_Projectile.HideProjectile"); }
	void PostAttachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Projectile.PostAttachOtherMeshes"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterWeapon_Projectile.PostInitializeComponents"); }
	float ServerClampProjectileSpeed(float inSpeed) { return NativeCall<float, float>(this, "AShooterWeapon_Projectile.ServerClampProjectileSpeed", inSpeed); }
	void ServerFireProjectileEx_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir, float Speed, int RandomSeed) { NativeCall<void, FVector, FVector_NetQuantizeNormal, float, int>(this, "AShooterWeapon_Projectile.ServerFireProjectileEx_Implementation", Origin, ShootDir, Speed, RandomSeed); }
	void ServerFireProjectile_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "AShooterWeapon_Projectile.ServerFireProjectile_Implementation", Origin, ShootDir); }
	void SetLockedTarget_Implementation(AActor * Actor, bool bIsLocked) { NativeCall<void, AActor *, bool>(this, "AShooterWeapon_Projectile.SetLockedTarget_Implementation", Actor, bIsLocked); }
	void BPOnSpawnedProjectile(AShooterProjectile * Projectile) { NativeCall<void, AShooterProjectile *>(this, "AShooterWeapon_Projectile.BPOnSpawnedProjectile", Projectile); }
	void BPSelectProjectileToFire(TSubclassOf<AShooterProjectile> * ProjectileClassOverride, USoundCue ** FireSoundOverride, bool * bSpawnOnClient, float * OverrideMaxSpeed) { NativeCall<void, TSubclassOf<AShooterProjectile> *, USoundCue **, bool *, float *>(this, "AShooterWeapon_Projectile.BPSelectProjectileToFire", ProjectileClassOverride, FireSoundOverride, bSpawnOnClient, OverrideMaxSpeed); }
	void ClientsFireProjectile(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "AShooterWeapon_Projectile.ClientsFireProjectile", Origin, ShootDir); }
	void ClientsFireProjectileEx(FVector Origin, FVector_NetQuantizeNormal ShootDir, float Speed, int RandomSeed) { NativeCall<void, FVector, FVector_NetQuantizeNormal, float, int>(this, "AShooterWeapon_Projectile.ClientsFireProjectileEx", Origin, ShootDir, Speed, RandomSeed); }
	void Listener_LockOn_Stop() { NativeCall<void>(this, "AShooterWeapon_Projectile.Listener_LockOn_Stop"); }
	void Listener_LockOn_Update(bool reset) { NativeCall<void, bool>(this, "AShooterWeapon_Projectile.Listener_LockOn_Update", reset); }
	void OnHideProjectile() { NativeCall<void>(this, "AShooterWeapon_Projectile.OnHideProjectile"); }
	void OnUnHideProjectile() { NativeCall<void>(this, "AShooterWeapon_Projectile.OnUnHideProjectile"); }
	void ServerFireProjectile(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "AShooterWeapon_Projectile.ServerFireProjectile", Origin, ShootDir); }
	void ServerFireProjectileEx(FVector Origin, FVector_NetQuantizeNormal ShootDir, float Speed, int RandomSeed) { NativeCall<void, FVector, FVector_NetQuantizeNormal, float, int>(this, "AShooterWeapon_Projectile.ServerFireProjectileEx", Origin, ShootDir, Speed, RandomSeed); }
	void SetLockedTarget(AActor * Actor, bool bIsLocked) { NativeCall<void, AActor *, bool>(this, "AShooterWeapon_Projectile.SetLockedTarget", Actor, bIsLocked); }
};

