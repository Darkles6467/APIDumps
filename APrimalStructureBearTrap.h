#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"

struct APrimalStructureBearTrap : APrimalStructure
{
	char __padding[0xa8L];
	USoundCue * TrapTriggerSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalStructureBearTrap.TrapTriggerSound"); }
	float& TrapMinPawnMassField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapMinPawnMass"); }
	float& TrapMaxPawnMassField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapMaxPawnMass"); }
	float& TrapDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapDamageAmount"); }
	float& PeriodicalTrapDamageTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageTime"); }
	float& PeriodicalTrapDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageAmount"); }
	float& IgnoreTriggerAfterSpawnTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.IgnoreTriggerAfterSpawnTime"); }
	TArray<FName>& IgnoreDinosWithCustomTagField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructureBearTrap.IgnoreDinosWithCustomTag"); }
	TArray<FName>& ForceImmobilizeDinosWithCustomTagField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructureBearTrap.ForceImmobilizeDinosWithCustomTag"); }
	float& HealthDecreasePerSecPlayersField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSecPlayers"); }
	float& HealthDecreasePerSecWildField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSecWild"); }
	bool& bImmuneToNormalDamageField() { return *GetNativePointerField<bool*>(this, "APrimalStructureBearTrap.bImmuneToNormalDamage"); }
	char& CurrentTrapStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureBearTrap.CurrentTrapState"); }
	char& ClientPrevTrapStateField() { return *GetNativePointerField<char*>(this, "APrimalStructureBearTrap.ClientPrevTrapState"); }
	bool& bClosedTrapField() { return *GetNativePointerField<bool*>(this, "APrimalStructureBearTrap.bClosedTrap"); }
	float& HealthDecreasePerSecField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSec"); }
	long double& DestroyTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBearTrap.DestroyTime"); }
	float& DestroyAfterTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.DestroyAfterTime"); }
	bool& bUseOnlyOnNonAlliedField() { return *GetNativePointerField<bool*>(this, "APrimalStructureBearTrap.bUseOnlyOnNonAllied"); }
	TArray<TSubclassOf<UShooterDamageType>>& DamagedOnlyByField() { return *GetNativePointerField<TArray<TSubclassOf<UShooterDamageType>>*>(this, "APrimalStructureBearTrap.DamagedOnlyBy"); }
	UParticleSystem * OnDestroyFXField() { return GetNativePointerField<UParticleSystem *>(this, "APrimalStructureBearTrap.OnDestroyFX"); }

	// Functions

	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureBearTrap.AllowPickupForItem", ForPC); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureBearTrap.BeginPlay"); }
	void DecreaseDamageTimer() { NativeCall<void>(this, "APrimalStructureBearTrap.DecreaseDamageTimer"); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructureBearTrap.Destroyed"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureBearTrap.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureBearTrap.GetMultiUseEntries", ForPC, MultiUseEntries); }
	void GotoTrapState(char TrapState) { NativeCall<void, char>(this, "APrimalStructureBearTrap.GotoTrapState", TrapState); }
	void HideAnimatedSK() { NativeCall<void>(this, "APrimalStructureBearTrap.HideAnimatedSK"); }
	bool IsTrapPrepared(float AnimSetupTime) { return NativeCall<bool, float>(this, "APrimalStructureBearTrap.IsTrapPrepared", AnimSetupTime); }
	void NetGotoTrapState_Implementation(char TrapState) { NativeCall<void, char>(this, "APrimalStructureBearTrap.NetGotoTrapState_Implementation", TrapState); }
	void OnRep_CurrentTrapState() { NativeCall<void>(this, "APrimalStructureBearTrap.OnRep_CurrentTrapState"); }
	void PeriodicalTrapDamageTimer() { NativeCall<void>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageTimer"); }
	void PlacedStructure(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureBearTrap.PlacedStructure", PC); }
	void ShowAnimatedSK() { NativeCall<void>(this, "APrimalStructureBearTrap.ShowAnimatedSK"); }
	float TakeDamage(float Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, const FDamageEvent *, AController *, AActor *>(this, "APrimalStructureBearTrap.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void TriggerTouched(AActor * Other, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult * SweepResult) { NativeCall<void, AActor *, UPrimitiveComponent *, int, bool, const FHitResult *>(this, "APrimalStructureBearTrap.TriggerTouched", Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureBearTrap.TryMultiUse", ForPC, UseIndex); }
	void BPNotifyImmobilizedCharacterIsDeadOrInConscious(bool IsDead, bool IsConscious) { NativeCall<void, bool, bool>(this, "APrimalStructureBearTrap.BPNotifyImmobilizedCharacterIsDeadOrInConscious", IsDead, IsConscious); }
	void NetGotoTrapState(char TrapState) { NativeCall<void, char>(this, "APrimalStructureBearTrap.NetGotoTrapState", TrapState); }
};

