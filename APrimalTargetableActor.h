#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "FLifetimeProperty.h"
#include "FRadialDamageEvent.h"
#include "FDamageEvent.h"

struct APrimalTargetableActor : AActor
{
	char __padding[0x110L];
	UParticleSystem * HurtFXField() { return GetNativePointerField<UParticleSystem *>(this, "APrimalTargetableActor.HurtFX"); }
	TArray<FDamageTypeAdjuster>& DamageTypeAdjustersField() { return *GetNativePointerField<TArray<FDamageTypeAdjuster>*>(this, "APrimalTargetableActor.DamageTypeAdjusters"); }
	float& LowHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LowHealthPercentage"); }
	float& LifeSpanAfterDeathField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LifeSpanAfterDeath"); }
	USoundCue * DeathSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalTargetableActor.DeathSound"); }
	float& PassiveDamageHealthReplicationPercentIntervalField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.PassiveDamageHealthReplicationPercentInterval"); }
	float& DamageNotifyTeamAggroMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DamageNotifyTeamAggroMultiplier"); }
	float& DamageNotifyTeamAggroRangeField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DamageNotifyTeamAggroRange"); }
	float& DamageNotifyTeamAggroRangeFalloffField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DamageNotifyTeamAggroRangeFalloff"); }
	FVector& DestructibleMeshLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalTargetableActor.DestructibleMeshLocationOffset"); }
	FVector& DestructibleMeshScaleOverrideField() { return *GetNativePointerField<FVector*>(this, "APrimalTargetableActor.DestructibleMeshScaleOverride"); }
	FRotator& DestructibleMeshRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalTargetableActor.DestructibleMeshRotationOffset"); }
	FString& DescriptiveNameField() { return *GetNativePointerField<FString*>(this, "APrimalTargetableActor.DescriptiveName"); }
	TSubclassOf<ADestroyedMeshActor>& DestroyedMeshActorClassField() { return *GetNativePointerField<TSubclassOf<ADestroyedMeshActor>*>(this, "APrimalTargetableActor.DestroyedMeshActorClass"); }
	UDestructibleMesh * DestroyedMeshField() { return GetNativePointerField<UDestructibleMesh *>(this, "APrimalTargetableActor.DestroyedMesh"); }
	float& ReplicatedHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.ReplicatedHealth"); }
	float& HealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.Health"); }
	float& MaxHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.MaxHealth"); }
	float& DestructibleMeshDeathImpulseScaleField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.DestructibleMeshDeathImpulseScale"); }
	TArray<FBoneDamageAdjuster>& BoneDamageAdjustersField() { return *GetNativePointerField<TArray<FBoneDamageAdjuster>*>(this, "APrimalTargetableActor.BoneDamageAdjusters"); }
	float& LastReplicatedHealthValueField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastReplicatedHealthValue"); }
	UPrimalHarvestingComponent * MyHarvestingComponentField() { return GetNativePointerField<UPrimalHarvestingComponent *>(this, "APrimalTargetableActor.MyHarvestingComponent"); }
	TEnumAsByte<enum EShooterPhysMaterialType::Type>& TargetableDamageFXDefaultPhysMaterialField() { return *GetNativePointerField<TEnumAsByte<enum EShooterPhysMaterialType::Type>*>(this, "APrimalTargetableActor.TargetableDamageFXDefaultPhysMaterial"); }
	TSubclassOf<UPrimalStructureSettings>& StructureSettingsClassField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSettings>*>(this, "APrimalTargetableActor.StructureSettingsClass"); }
	UPrimalStructureSettings * MyStructureSettingsCDOField() { return GetNativePointerField<UPrimalStructureSettings *>(this, "APrimalTargetableActor.MyStructureSettingsCDO"); }
	float& LastHealthBeforeTakeDamageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastHealthBeforeTakeDamage"); }
	long double& NextAllowRepairTimeField() { return *GetNativePointerField<long double*>(this, "APrimalTargetableActor.NextAllowRepairTime"); }
	float& LastPreBlueprintAdjustmentActualDamageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastPreBlueprintAdjustmentActualDamage"); }
	float& LastReplicatedHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastReplicatedHealth"); }

	// Functions

	void AdjustDamage(float * Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, float *, const FDamageEvent *, AController *, AActor *>(this, "APrimalTargetableActor.AdjustDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool AllowRadialDamageWithoutVisiblityTrace() { return NativeCall<bool>(this, "APrimalTargetableActor.AllowRadialDamageWithoutVisiblityTrace"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalTargetableActor.BeginPlay"); }
	void Destroyed() { NativeCall<void>(this, "APrimalTargetableActor.Destroyed"); }
	bool Die(float KillingDamage, const FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, const FDamageEvent *, AController *, AActor *>(this, "APrimalTargetableActor.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalTargetableActor.DrawHUD", HUD); }
	void FellOutOfWorld(const UDamageType * dmgType) { NativeCall<void, const UDamageType *>(this, "APrimalTargetableActor.FellOutOfWorld", dmgType); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalTargetableActor.GetDescriptiveName", result); }
	UDestructibleMesh * GetDestroyedMesh() { return NativeCall<UDestructibleMesh *>(this, "APrimalTargetableActor.GetDestroyedMesh"); }
	void GetDestructionEffectTransform(FVector * OutEffectLoc, FRotator * OutEffectRot) { NativeCall<void, FVector *, FRotator *>(this, "APrimalTargetableActor.GetDestructionEffectTransform", OutEffectLoc, OutEffectRot); }
	float GetHealth() { return NativeCall<float>(this, "APrimalTargetableActor.GetHealth"); }
	float GetHealthPercentage() { return NativeCall<float>(this, "APrimalTargetableActor.GetHealthPercentage"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalTargetableActor.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetLowHealthPercentage() { return NativeCall<float>(this, "APrimalTargetableActor.GetLowHealthPercentage"); }
	float GetMaxHealth() { return NativeCall<float>(this, "APrimalTargetableActor.GetMaxHealth"); }
	FString * GetShortName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalTargetableActor.GetShortName", result); }
	EShooterPhysMaterialType::Type GetTargetableDamageFXDefaultPhysMaterial() { return NativeCall<EShooterPhysMaterialType::Type>(this, "APrimalTargetableActor.GetTargetableDamageFXDefaultPhysMaterial"); }
	void HarvestingDepleted(UPrimalHarvestingComponent * fromComponent) { NativeCall<void, UPrimalHarvestingComponent *>(this, "APrimalTargetableActor.HarvestingDepleted", fromComponent); }
	bool IsAlive() { return NativeCall<bool>(this, "APrimalTargetableActor.IsAlive"); }
	bool IsDead() { return NativeCall<bool>(this, "APrimalTargetableActor.IsDead"); }
	bool IsInvincible() { return NativeCall<bool>(this, "APrimalTargetableActor.IsInvincible"); }
	bool IsOfTribe(int ID) { return NativeCall<bool, int>(this, "APrimalTargetableActor.IsOfTribe", ID); }
	bool IsTargetableDead() { return NativeCall<bool>(this, "APrimalTargetableActor.IsTargetableDead"); }
	bool NetExecCommand(FName CommandName, const FNetExecParams * ExecParams) { return NativeCall<bool, FName, const FNetExecParams *>(this, "APrimalTargetableActor.NetExecCommand", CommandName, ExecParams); }
	void NetUpdatedHealth_Implementation(int NewHealth) { NativeCall<void, int>(this, "APrimalTargetableActor.NetUpdatedHealth_Implementation", NewHealth); }
	void OnRep_ReplicatedHealth() { NativeCall<void>(this, "APrimalTargetableActor.OnRep_ReplicatedHealth"); }
	void PlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalTargetableActor.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingGeneric_Implementation(float KillingDamage, FPointDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayDyingGeneric_Implementation", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingRadial_Implementation(float KillingDamage, FRadialDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayDyingRadial_Implementation", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayHitEffect(float DamageTaken, const FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsLocalPath) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *, bool>(this, "APrimalTargetableActor.PlayHitEffect", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath); }
	void PlayHitEffectPoint_Implementation(float DamageTaken, FPointDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayHitEffectPoint_Implementation", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectRadial_Implementation(float DamageTaken, FRadialDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayHitEffectRadial_Implementation", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalTargetableActor.PostInitializeComponents"); }
	void PreReplication(IRepChangedPropertyTracker * ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker *>(this, "APrimalTargetableActor.PreReplication", ChangedPropertyTracker); }
	float SetHealth(float newHealth) { return NativeCall<float, float>(this, "APrimalTargetableActor.SetHealth", newHealth); }
	void SetMaxHealth(float newMaxHealth) { NativeCall<void, float>(this, "APrimalTargetableActor.SetMaxHealth", newMaxHealth); }
	void Suicide() { NativeCall<void>(this, "APrimalTargetableActor.Suicide"); }
	float TakeDamage(float Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, const FDamageEvent *, AController *, AActor *>(this, "APrimalTargetableActor.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalTargetableActor.UpdatedHealth", bDoReplication); }
	void BPDied(float KillingDamage, const FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, AController *, AActor *>(this, "APrimalTargetableActor.BPDied", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void BPHitEffect(float DamageTaken, const FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsLocalPath, UPrimitiveComponent * HitComponent, FVector DamageLoc, FRotator HitNormal) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *, bool, UPrimitiveComponent *, FVector, FRotator>(this, "APrimalTargetableActor.BPHitEffect", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, HitComponent, DamageLoc, HitNormal); }
	bool BPSupressImpactEffects(float DamageTaken, const FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsLocalPath, UPrimitiveComponent * HitComponent) { return NativeCall<bool, float, const FDamageEvent *, APawn *, AActor *, bool, UPrimitiveComponent *>(this, "APrimalTargetableActor.BPSupressImpactEffects", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, HitComponent); }
	void OverrideDestroyedMeshTextures(UMeshComponent * meshComp) { NativeCall<void, UMeshComponent *>(this, "APrimalTargetableActor.OverrideDestroyedMeshTextures", meshComp); }
	void PlayDyingRadial(float KillingDamage, FRadialDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayDyingRadial", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayHitEffectGeneric(float DamageTaken, FDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayHitEffectGeneric", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectRadial(float DamageTaken, FRadialDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalTargetableActor.PlayHitEffectRadial", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
};

