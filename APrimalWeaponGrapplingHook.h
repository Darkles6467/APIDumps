#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon_Projectile.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrimalWeaponGrapplingHook : AShooterWeapon_Projectile
{
	char __padding[0x30L];
	bool& bDetachGrapHookOnUnequipField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrapplingHook.bDetachGrapHookOnUnequip"); }
	bool& bPreventReelingField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrapplingHook.bPreventReeling"); }
	bool& bPullingRopeField() { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrapplingHook.bPullingRope"); }
	long double& LastTimeWithGrapHookField() { return *GetNativePointerField<long double*>(this, "APrimalWeaponGrapplingHook.LastTimeWithGrapHook"); }
	USoundCue * ReelInSoundCueField() { return GetNativePointerField<USoundCue *>(this, "APrimalWeaponGrapplingHook.ReelInSoundCue"); }
	USoundCue * ReelOutSoundCueField() { return GetNativePointerField<USoundCue *>(this, "APrimalWeaponGrapplingHook.ReelOutSoundCue"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.BeginPlay"); }
	bool CanFire(bool bForceAllowSubmergedFiring) { return NativeCall<bool, bool>(this, "APrimalWeaponGrapplingHook.CanFire", bForceAllowSubmergedFiring); }
	bool CanReload() { return NativeCall<bool>(this, "APrimalWeaponGrapplingHook.CanReload"); }
	bool CanTarget() { return NativeCall<bool>(this, "APrimalWeaponGrapplingHook.CanTarget"); }
	void Destroyed() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.Destroyed"); }
	void OnEquip() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.OnEquip"); }
	float PlayReloadAnimation() { return NativeCall<float>(this, "APrimalWeaponGrapplingHook.PlayReloadAnimation"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalWeaponGrapplingHook.StartFire", bFromGamepad); }
	void StartSecondaryAction() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.StartSecondaryAction"); }
	void StartUnequip_Implementation() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.StartUnequip_Implementation"); }
	void StopFire() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.StopFire"); }
	void StopSecondaryAction() { NativeCall<void>(this, "APrimalWeaponGrapplingHook.StopSecondaryAction"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalWeaponGrapplingHook.Tick", DeltaSeconds); }
};

