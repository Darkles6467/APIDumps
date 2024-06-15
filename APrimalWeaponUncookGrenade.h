#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon_Projectile.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrimalWeaponGrenade : AShooterWeapon_Projectile
{
	char __padding[0x70L];
	FWeaponAnim& PrepareThrowAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGrenade.PrepareThrowAnim"); }
	FWeaponAnim& QuickThrowAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGrenade.QuickThrowAnim"); }
	FWeaponAnim& OvercookHurtAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponGrenade.OvercookHurtAnim"); }
	FName& GrenadeBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGrenade.GrenadeBoneName"); }
	FName& GrenadePinBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponGrenade.GrenadePinBoneName"); }
	float& MaxGrenadeLifeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGrenade.MaxGrenadeLife"); }
	bool& bIsThrowingGrenadeField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bIsThrowingGrenade"); }
	bool& bIsCookingGrenadeField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bIsCookingGrenade"); }
	bool& bUseBlueprintSpeedField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bUseBlueprintSpeed"); }
	bool& bHideSkeletalMeshField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bHideSkeletalMesh"); }
	float& CookingTimeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponGrenade.CookingTime"); }
	FVector& ProjectileOriginField() { return *GetNativePointerField<FVector*>(this, "APrimalWeaponGrenade.ProjectileOrigin"); }
	FVector& ProjectileShootDirField() { return *GetNativePointerField<FVector*>(this, "APrimalWeaponGrenade.ProjectileShootDir"); }
	bool& bHiddenGrenadeFPVField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bHiddenGrenadeFPV"); }

	// Functions

	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "APrimalWeaponGrenade.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void ApplyWeaponConfig(FProjectileWeaponData * Data) { NativeCall<void, FProjectileWeaponData *>(this, "APrimalWeaponGrenade.ApplyWeaponConfig", Data); }
	void DoFireProjectile(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "APrimalWeaponGrenade.DoFireProjectile", Origin, ShootDir); }
	void DoFireProjectileCustom_Implementation(bool bExplodeInHand) { NativeCall<void, bool>(this, "APrimalWeaponGrenade.DoFireProjectileCustom_Implementation", bExplodeInHand); }
	void FireProjectile(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "APrimalWeaponGrenade.FireProjectile", Origin, ShootDir); }
	void FireProjectileEx(FVector Origin, FVector_NetQuantizeNormal ShootDir, float Speed, int RandomSeed) { NativeCall<void, FVector, FVector_NetQuantizeNormal, float, int>(this, "APrimalWeaponGrenade.FireProjectileEx", Origin, ShootDir, Speed, RandomSeed); }
	void FireWeapon() { NativeCall<void>(this, "APrimalWeaponGrenade.FireWeapon"); }
	void HideGrenade() { NativeCall<void>(this, "APrimalWeaponGrenade.HideGrenade"); }
	void HidePin() { NativeCall<void>(this, "APrimalWeaponGrenade.HidePin"); }
	void OnEquip() { NativeCall<void>(this, "APrimalWeaponGrenade.OnEquip"); }
	void PlayFireAnimation() { NativeCall<void>(this, "APrimalWeaponGrenade.PlayFireAnimation"); }
	float ServerClampProjectileSpeed(float inSpeed) { return NativeCall<float, float>(this, "APrimalWeaponGrenade.ServerClampProjectileSpeed", inSpeed); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalWeaponGrenade.StartFire", bFromGamepad); }
	void StopFire() { NativeCall<void>(this, "APrimalWeaponGrenade.StopFire"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWeaponGrenade.Tick", DeltaSeconds); }
	void UnHideGrenade() { NativeCall<void>(this, "APrimalWeaponGrenade.UnHideGrenade"); }
	void UnHidePin() { NativeCall<void>(this, "APrimalWeaponGrenade.UnHidePin"); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "APrimalWeaponGrenade.UpdateFirstPersonMeshes", bIsFirstPerson); }
	float BPGetProjectileSpeed() { return NativeCall<float>(this, "APrimalWeaponGrenade.BPGetProjectileSpeed"); }
	void DoFireProjectileCustom(bool bExplodeInHand) { NativeCall<void, bool>(this, "APrimalWeaponGrenade.DoFireProjectileCustom", bExplodeInHand); }
};

struct APrimalWeaponUncookGrenade : APrimalWeaponGrenade
{

	// Functions

	void ReloadWeapon() { NativeCall<void>(this, "APrimalWeaponUncookGrenade.ReloadWeapon"); }
	void UseAmmo(int UseAmmoAmountOverride) { NativeCall<void, int>(this, "APrimalWeaponUncookGrenade.UseAmmo", UseAmmoAmountOverride); }
};

