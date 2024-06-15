#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AShooterWeapon_ChainSaw : AShooterWeapon
{
	char __padding[0x38L];
	TArray<FWeaponAnim>& ShootAnimListField() { return *GetNativePointerField<TArray<FWeaponAnim>*>(this, "AShooterWeapon_ChainSaw.ShootAnimList"); }
	TArray<FWeaponAnim>& ShootWithHitAnimListField() { return *GetNativePointerField<TArray<FWeaponAnim>*>(this, "AShooterWeapon_ChainSaw.ShootWithHitAnimList"); }
	USoundCue * IdleSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon_ChainSaw.IdleSound"); }
	UAudioComponent * IdleACField() { return GetNativePointerField<UAudioComponent *>(this, "AShooterWeapon_ChainSaw.IdleAC"); }
	bool& bPreviousLastShootHitStationaryField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChainSaw.bPreviousLastShootHitStationary"); }
	bool& bLastShootHitStationaryField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_ChainSaw.bLastShootHitStationary"); }

	// Functions

	void ClientSimulateChangeFireAnim_Implementation() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ClientSimulateChangeFireAnim_Implementation"); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.FireWeapon"); }
	void OnEquipFinished() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.OnEquipFinished"); }
	void PlayFireAnimation() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.PlayFireAnimation"); }
	void PlayUnequipAnimation() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.PlayUnequipAnimation"); }
	FWeaponAnim * SelectFireAnim(FWeaponAnim * result) { return NativeCall<FWeaponAnim *, FWeaponAnim *>(this, "AShooterWeapon_ChainSaw.SelectFireAnim", result); }
	void ServerHit_Implementation() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerHit_Implementation"); }
	void ServerReloadWeapon_Implementation() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerReloadWeapon_Implementation"); }
	void ServerStopFireAnim_Implementation() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerStopFireAnim_Implementation"); }
	void SetWeaponState(EWeaponState::Type NewState) { NativeCall<void, EWeaponState::Type>(this, "AShooterWeapon_ChainSaw.SetWeaponState", NewState); }
	void SimulateChangeFireAnim() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.SimulateChangeFireAnim"); }
	void SimulateWeaponFire() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.SimulateWeaponFire"); }
	void StopAltFire() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopAltFire"); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopFire"); }
	void StopFireAnim() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopFireAnim"); }
	void StopOwnerEffects() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopOwnerEffects"); }
	void StopSimulatingWeaponFire() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopSimulatingWeaponFire"); }
	void StartAltFire() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.StartAltFire"); }
	void ClientSimulateChangeFireAnim() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ClientSimulateChangeFireAnim"); }
	void ServerHit() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerHit"); }
	void ServerReloadWeapon() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerReloadWeapon"); }
	void ServerStopFireAnim() { NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerStopFireAnim"); }
};

