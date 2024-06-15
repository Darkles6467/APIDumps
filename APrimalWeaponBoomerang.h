#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon_Projectile.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct APrimalWeaponBow : AShooterWeapon_Projectile
{
	char __padding[0x80L];
	float& MinimumInitialSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.MinimumInitialSpeed"); }
	float& MaximumInitialSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.MaximumInitialSpeed"); }
	float& PullingTimeForMaximumSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.PullingTimeForMaximumSpeed"); }
	float& DamageFactorForSlowArrowsField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.DamageFactorForSlowArrows"); }
	float& DamageFactorForFastArrowsField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.DamageFactorForFastArrows"); }
	float& MinimumPullingTimeToFireField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.MinimumPullingTimeToFire"); }
	TSubclassOf<UCameraShake>& MaxPullCameraShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "APrimalWeaponBow.MaxPullCameraShake"); }
	FName& ArrowBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowBoneName"); }
	FWeaponAnim& PullStringAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "APrimalWeaponBow.PullStringAnim"); }
	FName& ArrowOnWeaponAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowOnWeaponAttachPoint3P"); }
	FName& ArrowAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowAttachPoint3P"); }
	FName& ArrowAttachPoint1PField() { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowAttachPoint1P"); }
	float& PullingTimeField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.PullingTime"); }
	float& ProjectileSpeedField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.ProjectileSpeed"); }
	bool& bHiddenArrowFPVField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponBow.bHiddenArrowFPV"); }
	bool& bHiddenArrowTPVField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponBow.bHiddenArrowTPV"); }
	bool& bStartedCameraShakeField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponBow.bStartedCameraShake"); }

	// Functions

	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "APrimalWeaponBow.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void ApplyWeaponConfig(FProjectileWeaponData * Data) { NativeCall<void, FProjectileWeaponData *>(this, "APrimalWeaponBow.ApplyWeaponConfig", Data); }
	void AttachArrow3PToBow() { NativeCall<void>(this, "APrimalWeaponBow.AttachArrow3PToBow"); }
	void AttachOtherMeshes() { NativeCall<void>(this, "APrimalWeaponBow.AttachOtherMeshes"); }
	void BPSimulatedResetSetPullingTime() { NativeCall<void>(this, "APrimalWeaponBow.BPSimulatedResetSetPullingTime"); }
	bool CanReload() { return NativeCall<bool>(this, "APrimalWeaponBow.CanReload"); }
	bool CanRun() { return NativeCall<bool>(this, "APrimalWeaponBow.CanRun"); }
	void CancelPullString() { NativeCall<void>(this, "APrimalWeaponBow.CancelPullString"); }
	void Destroyed() { NativeCall<void>(this, "APrimalWeaponBow.Destroyed"); }
	void DetachOtherMeshes() { NativeCall<void>(this, "APrimalWeaponBow.DetachOtherMeshes"); }
	void DoFireProjectile(FVector Origin, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "APrimalWeaponBow.DoFireProjectile", Origin, ShootDir); }
	void DoFireProjectileFP() { NativeCall<void>(this, "APrimalWeaponBow.DoFireProjectileFP"); }
	void DoMeleeAttack() { NativeCall<void>(this, "APrimalWeaponBow.DoMeleeAttack"); }
	void FireProjectileEx(FVector Origin, FVector_NetQuantizeNormal ShootDir, float Speed, int RandomSeed) { NativeCall<void, FVector, FVector_NetQuantizeNormal, float, int>(this, "APrimalWeaponBow.FireProjectileEx", Origin, ShootDir, Speed, RandomSeed); }
	void FireWeapon() { NativeCall<void>(this, "APrimalWeaponBow.FireWeapon"); }
	bool ForcesTPVCameraOffset_Implementation() { return NativeCall<bool>(this, "APrimalWeaponBow.ForcesTPVCameraOffset_Implementation"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalWeaponBow.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void HideArrow() { NativeCall<void>(this, "APrimalWeaponBow.HideArrow"); }
	void OnEquip() { NativeCall<void>(this, "APrimalWeaponBow.OnEquip"); }
	void PlayFireAnimation() { NativeCall<void>(this, "APrimalWeaponBow.PlayFireAnimation"); }
	float PlayReloadAnimation() { return NativeCall<float>(this, "APrimalWeaponBow.PlayReloadAnimation"); }
	void PullString() { NativeCall<void>(this, "APrimalWeaponBow.PullString"); }
	float ServerClampProjectileSpeed(float inSpeed) { return NativeCall<float, float>(this, "APrimalWeaponBow.ServerClampProjectileSpeed", inSpeed); }
	void ServerSetPullString_Implementation(bool bIsPulling) { NativeCall<void, bool>(this, "APrimalWeaponBow.ServerSetPullString_Implementation", bIsPulling); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalWeaponBow.StartFire", bFromGamepad); }
	void StartUnequip_Implementation() { NativeCall<void>(this, "APrimalWeaponBow.StartUnequip_Implementation"); }
	void StopFire() { NativeCall<void>(this, "APrimalWeaponBow.StopFire"); }
	void StopOwnerEffects() { NativeCall<void>(this, "APrimalWeaponBow.StopOwnerEffects"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWeaponBow.Tick", DeltaSeconds); }
	void UnHideArrow() { NativeCall<void>(this, "APrimalWeaponBow.UnHideArrow"); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "APrimalWeaponBow.UpdateFirstPersonMeshes", bIsFirstPerson); }
	void UpdateTPVBowAnimation() { NativeCall<void>(this, "APrimalWeaponBow.UpdateTPVBowAnimation"); }
	bool UseAlternateAimOffsetAnim() { return NativeCall<bool>(this, "APrimalWeaponBow.UseAlternateAimOffsetAnim"); }
	bool BPCanStartFire() { return NativeCall<bool>(this, "APrimalWeaponBow.BPCanStartFire"); }
	void ServerSetPullString(bool bIsPulling) { NativeCall<void, bool>(this, "APrimalWeaponBow.ServerSetPullString", bIsPulling); }
};

struct APrimalWeaponBoomerang : APrimalWeaponBow
{
	char __padding[0x8L];
	float& chanceToBreakField() { return *GetNativePointerField<float*>(this, "APrimalWeaponBoomerang.chanceToBreak"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalWeaponBoomerang.BeginPlay"); }
	bool CanMeleeAttack() { return NativeCall<bool>(this, "APrimalWeaponBoomerang.CanMeleeAttack"); }
	bool CanReload() { return NativeCall<bool>(this, "APrimalWeaponBoomerang.CanReload"); }
	void CheckForBoomerangDesync() { NativeCall<void>(this, "APrimalWeaponBoomerang.CheckForBoomerangDesync"); }
	void ForceBoomerangSync() { NativeCall<void>(this, "APrimalWeaponBoomerang.ForceBoomerangSync"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalWeaponBoomerang.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool IsValidBoomerangAirborn() { return NativeCall<bool>(this, "APrimalWeaponBoomerang.IsValidBoomerangAirborn"); }
	void OnBoomerangLaunch() { NativeCall<void>(this, "APrimalWeaponBoomerang.OnBoomerangLaunch"); }
	void OnBoomerangReturn() { NativeCall<void>(this, "APrimalWeaponBoomerang.OnBoomerangReturn"); }
	void OnEquip() { NativeCall<void>(this, "APrimalWeaponBoomerang.OnEquip"); }
	void OnRep_ClientHideBoomerang() { NativeCall<void>(this, "APrimalWeaponBoomerang.OnRep_ClientHideBoomerang"); }
	void RefreshBoomerangMeshVisibility() { NativeCall<void>(this, "APrimalWeaponBoomerang.RefreshBoomerangMeshVisibility"); }
	void UnHideArrow() { NativeCall<void>(this, "APrimalWeaponBoomerang.UnHideArrow"); }
};

