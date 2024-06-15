#pragma once

#include "BaseDeclarations.h"
#include "UDamageType.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FDamageEvent.h"

struct UShooterDamageType : UDamageType
{
	char __padding[0xd8L];
	TSubclassOf<AShooterImpactEffect>& HitTargetableActorImpactEffectsField() { return *GetNativePointerField<TSubclassOf<AShooterImpactEffect>*>(this, "UShooterDamageType.HitTargetableActorImpactEffects"); }
	float& DamageTorpidityIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UShooterDamageType.DamageTorpidityIncreaseMultiplier"); }
	FCanvasIcon& KillIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "UShooterDamageType.KillIcon"); }
	UForceFeedbackEffect * HitForceFeedbackField() { return GetNativePointerField<UForceFeedbackEffect *>(this, "UShooterDamageType.HitForceFeedback"); }
	UForceFeedbackEffect * KilledForceFeedbackField() { return GetNativePointerField<UForceFeedbackEffect *>(this, "UShooterDamageType.KilledForceFeedback"); }
	TArray<FDamagePrimalCharacterStatusValueModifier>& DamageCharacterStatusValueModifiersField() { return *GetNativePointerField<TArray<FDamagePrimalCharacterStatusValueModifier>*>(this, "UShooterDamageType.DamageCharacterStatusValueModifiers"); }
	float& DamageInstigatorPercentageField() { return *GetNativePointerField<float*>(this, "UShooterDamageType.DamageInstigatorPercentage"); }
	float& UseSpecialDamageIntervalField() { return *GetNativePointerField<float*>(this, "UShooterDamageType.UseSpecialDamageInterval"); }
	float& WildDinoForcedAggroDurationField() { return *GetNativePointerField<float*>(this, "UShooterDamageType.WildDinoForcedAggroDuration"); }
	float& MassScaleDamageImpulseExponentField() { return *GetNativePointerField<float*>(this, "UShooterDamageType.MassScaleDamageImpulseExponent"); }
	TArray<FOverrideDamageHarvestingEntry>& OverrideDamageHarvestEntriesField() { return *GetNativePointerField<TArray<FOverrideDamageHarvestingEntry>*>(this, "UShooterDamageType.OverrideDamageHarvestEntries"); }
	TArray<FTargetClassDamageScaler>& TargetClassDamageScalersField() { return *GetNativePointerField<TArray<FTargetClassDamageScaler>*>(this, "UShooterDamageType.TargetClassDamageScalers"); }

	// Functions

	float BPAdjustAggro(APrimalDinoAIController * DamagedCharacterController, APrimalCharacter * DamagedCharacter, float DesiredAggroValue, float IncomingDamage, FDamageEvent TheDamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, APrimalDinoAIController *, APrimalCharacter *, float, float, FDamageEvent, AController *, AActor *>(this, "UShooterDamageType.BPAdjustAggro", DamagedCharacterController, DamagedCharacter, DesiredAggroValue, IncomingDamage, TheDamageEvent, EventInstigator, DamageCauser); }
	float BPAdjustDamage(AActor * Victim, float IncomingDamage, FDamageEvent TheDamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, AActor *, float, FDamageEvent, AController *, AActor *>(this, "UShooterDamageType.BPAdjustDamage", Victim, IncomingDamage, TheDamageEvent, EventInstigator, DamageCauser); }
	float BPAdjustHarvestingDamage(AActor * Victim, float IncomingDamage, FDamageEvent TheDamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, AActor *, float, FDamageEvent, AController *, AActor *>(this, "UShooterDamageType.BPAdjustHarvestingDamage", Victim, IncomingDamage, TheDamageEvent, EventInstigator, DamageCauser); }
};

