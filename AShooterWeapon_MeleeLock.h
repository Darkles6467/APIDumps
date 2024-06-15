#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon_Melee.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UDamageType.h"
#include "FLifetimeProperty.h"

struct AShooterWeapon_MeleeLock : AShooterWeapon_Melee
{
	char __padding[0x90L];
	float& LockValueField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockValue"); }
	float& LockVFXValueField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockVFXValue"); }
	long double& LastAttackTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon_MeleeLock.LastAttackTime"); }
	long double& LastHitTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon_MeleeLock.LastHitTime"); }
	bool& HitThisAttackField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_MeleeLock.HitThisAttack"); }
	float& LockDecayValueField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockDecayValue"); }
	float& LockHitIncrementField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockHitIncrement"); }
	float& LockMissDecrementField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockMissDecrement"); }
	TEnumAsByte<enum ESimpleCurve::Type>& AnimationRateCurveField() { return *GetNativePointerField<TEnumAsByte<enum ESimpleCurve::Type>*>(this, "AShooterWeapon_MeleeLock.AnimationRateCurve"); }
	float& MinAnimationRateField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MinAnimationRate"); }
	float& MaxAnimationRateField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxAnimationRate"); }
	TEnumAsByte<enum ESimpleCurve::Type>& DamageCurveField() { return *GetNativePointerField<TEnumAsByte<enum ESimpleCurve::Type>*>(this, "AShooterWeapon_MeleeLock.DamageCurve"); }
	float& MinDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MinDamageMultiplier"); }
	float& MaxDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxDamageMultiplier"); }
	float& LockTurnRateField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockTurnRate"); }
	float& MinPullDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MinPullDistance"); }
	float& MaxPullDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxPullDistance"); }
	float& MaxTargetDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxTargetDistance"); }
	float& TargetAngleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.TargetAngle"); }
	float& MaxLockTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxLockTime"); }
	float& AttackMoveSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.AttackMoveSpeed"); }
	float& AttackAirImpulseField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.AttackAirImpulse"); }
	float& AttackMoveDurationField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.AttackMoveDuration"); }
	float& MaxPowerThresholdField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxPowerThreshold"); }
	float& MaxLockAngleCosField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxLockAngleCos"); }
	float& GetPullRangeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.GetPullRange"); }
	float& LastSentLockValueField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LastSentLockValue"); }
	bool& bSteppingEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_MeleeLock.bSteppingEnabled"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.BeginPlay"); }
	void DealDamage(const FHitResult * Impact, const FVector * ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, const FHitResult *, const FVector *, int, TSubclassOf<UDamageType>, float>(this, "AShooterWeapon_MeleeLock.DealDamage", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	void Destroyed() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.Destroyed"); }
	void DoMeleeAttack() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.DoMeleeAttack"); }
	void EndMeleeAttack() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.EndMeleeAttack"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AShooterWeapon_MeleeLock.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetWeaponAttackPlayRate() { return NativeCall<float>(this, "AShooterWeapon_MeleeLock.GetWeaponAttackPlayRate"); }
	void OnRep_LockValue() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.OnRep_LockValue"); }
	void PreMeleeAttackCheck() { NativeCall<void>(this, "AShooterWeapon_MeleeLock.PreMeleeAttackCheck"); }
	void SetMeleeHitActor(APrimalCharacter * HitActor) { NativeCall<void, APrimalCharacter *>(this, "AShooterWeapon_MeleeLock.SetMeleeHitActor", HitActor); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_MeleeLock.Tick", DeltaSeconds); }
};

