#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UDamageType.h"
#include "FLifetimeProperty.h"
#include "FHitResult.h"

struct AShooterWeapon : AActor
{
	char __padding[0x918L];
	float& EquipTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.EquipTime"); }
	UAnimBlueprintGeneratedClass * OverridePawnTPVAnimBlueprintField() { return GetNativePointerField<UAnimBlueprintGeneratedClass *>(this, "AShooterWeapon.OverridePawnTPVAnimBlueprint"); }
	UAnimMontage * OverrideProneInAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterWeapon.OverrideProneInAnim"); }
	UAnimMontage * OverrideProneOutAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterWeapon.OverrideProneOutAnim"); }
	UAnimMontage * OverrideJumpAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterWeapon.OverrideJumpAnim"); }
	UAnimMontage * OverrideLandedAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterWeapon.OverrideLandedAnim"); }
	TArray<UAnimSequence *>& OverrideRiderAnimSequenceFromField() { return *GetNativePointerField<TArray<UAnimSequence *>*>(this, "AShooterWeapon.OverrideRiderAnimSequenceFrom"); }
	TArray<UAnimSequence *>& OverrideRiderAnimSequenceToField() { return *GetNativePointerField<TArray<UAnimSequence *>*>(this, "AShooterWeapon.OverrideRiderAnimSequenceTo"); }
	FCanvasIcon& PrimaryIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "AShooterWeapon.PrimaryIcon"); }
	FCanvasIcon& SecondaryIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "AShooterWeapon.SecondaryIcon"); }
	FCanvasIcon& PrimaryClipIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "AShooterWeapon.PrimaryClipIcon"); }
	FCanvasIcon& SecondaryClipIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "AShooterWeapon.SecondaryClipIcon"); }
	float& ItemDurabilityToConsumePerMeleeHitField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.ItemDurabilityToConsumePerMeleeHit"); }
	float& AmmoIconsCountField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AmmoIconsCount"); }
	float& TargetingTooltipCheckRangeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TargetingTooltipCheckRange"); }
	int& PrimaryClipIconOffsetField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.PrimaryClipIconOffset"); }
	int& SecondaryClipIconOffsetField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.SecondaryClipIconOffset"); }
	TSubclassOf<UTargetingInfoToolTipWidget>& TargetingInfoToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UTargetingInfoToolTipWidget>*>(this, "AShooterWeapon.TargetingInfoToolTipWidget"); }
	FVector2D& TargetingInfoTooltipPaddingField() { return *GetNativePointerField<FVector2D*>(this, "AShooterWeapon.TargetingInfoTooltipPadding"); }
	FVector2D& TargetingInfoTooltipScaleField() { return *GetNativePointerField<FVector2D*>(this, "AShooterWeapon.TargetingInfoTooltipScale"); }
	bool& bOnlyPassiveDurabilityWhenAccessoryActiveField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bOnlyPassiveDurabilityWhenAccessoryActive"); }
	bool& bDisableShooterOnElectricStormField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bDisableShooterOnElectricStorm"); }
	FName& OverrideAttachPointField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.OverrideAttachPoint"); }
	FVector& FPVRelativeLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVRelativeLocation"); }
	FRotator& FPVRelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVRelativeRotation"); }
	FVector& FPVRelativeLocation_TargetingField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVRelativeLocation_Targeting"); }
	FRotator& FPVRelativeRotation_TargetingField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVRelativeRotation_Targeting"); }
	float& FPVEnterTargetingInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVEnterTargetingInterpSpeed"); }
	float& FPVExitTargetingInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVExitTargetingInterpSpeed"); }
	float& EndDoMeleeSwingTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.EndDoMeleeSwingTime"); }
	FRotator& FPVLookAtMaximumOffsetField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtMaximumOffset"); }
	FRotator& FPVLookAtSpeedBaseField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtSpeedBase"); }
	FRotator& FPVLookAtInterpSpeedField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtInterpSpeed"); }
	FRotator& FPVLookAtMaximumOffset_TargetingField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtMaximumOffset_Targeting"); }
	FRotator& FPVLookAtSpeedBase_TargetingField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtSpeedBase_Targeting"); }
	FRotator& FPVLookAtInterpSpeed_TargetingField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtInterpSpeed_Targeting"); }
	FVector& FPVImmobilizedLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVImmobilizedLocationOffset"); }
	FRotator& FPVImmobilizedRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVImmobilizedRotationOffset"); }
	float& FPVImmobilizedInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVImmobilizedInterpSpeed"); }
	bool& bUseBlueprintAnimNotificationsField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseBlueprintAnimNotifications"); }
	TArray<FName>& MeleeSwingSocketsField() { return *GetNativePointerField<TArray<FName>*>(this, "AShooterWeapon.MeleeSwingSockets"); }
	float& AllowMeleeTimeBeforeAnimationEndField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AllowMeleeTimeBeforeAnimationEnd"); }
	bool& bCanBeUsedAsEquipmentField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bCanBeUsedAsEquipment"); }
	FItemNetInfo& AssociatedItemNetInfoField() { return *GetNativePointerField<FItemNetInfo*>(this, "AShooterWeapon.AssociatedItemNetInfo"); }
	FWeaponData& WeaponConfigField() { return *GetNativePointerField<FWeaponData*>(this, "AShooterWeapon.WeaponConfig"); }
	ACameraActor * AnimatedCameraField() { return GetNativePointerField<ACameraActor *>(this, "AShooterWeapon.AnimatedCamera"); }
	long double& NextAllowedMeleeTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.NextAllowedMeleeTime"); }
	TArray<FVector>& LastSocketPositionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "AShooterWeapon.LastSocketPositions"); }
	long double& LastFPVRenderTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.LastFPVRenderTime"); }
	FRotator& LastCameraRotationField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.LastCameraRotation"); }
	FRotator& FPVAdditionalLookRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVAdditionalLookRotOffset"); }
	FVector& FPVLastLocOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVLastLocOffset"); }
	FVector& FPVLastVROffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVLastVROffset"); }
	FVector& FPVRelativeLocationOffscreenOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVRelativeLocationOffscreenOffset"); }
	FRotator& FPVLastRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLastRotOffset"); }
	AShooterCharacter * MyPawnField() { return GetNativePointerField<AShooterCharacter *>(this, "AShooterWeapon.MyPawn"); }
	UAudioComponent * FireACField() { return GetNativePointerField<UAudioComponent *>(this, "AShooterWeapon.FireAC"); }
	FName& MuzzleAttachPointField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.MuzzleAttachPoint"); }
	UParticleSystem * MuzzleFXField() { return GetNativePointerField<UParticleSystem *>(this, "AShooterWeapon.MuzzleFX"); }
	UParticleSystem * MuzzleFX_FPVField() { return GetNativePointerField<UParticleSystem *>(this, "AShooterWeapon.MuzzleFX_FPV"); }
	UParticleSystem * AltMuzzleFXField() { return GetNativePointerField<UParticleSystem *>(this, "AShooterWeapon.AltMuzzleFX"); }
	UParticleSystem * AltMuzzleFX_FPVField() { return GetNativePointerField<UParticleSystem *>(this, "AShooterWeapon.AltMuzzleFX_FPV"); }
	TSubclassOf<UCameraShake>& FireCameraShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "AShooterWeapon.FireCameraShake"); }
	TSubclassOf<UCameraShake>& ReloadCameraShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "AShooterWeapon.ReloadCameraShake"); }
	TSubclassOf<UCameraShake>& MeleeCameraShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "AShooterWeapon.MeleeCameraShake"); }
	UForceFeedbackEffect * FireForceFeedbackField() { return GetNativePointerField<UForceFeedbackEffect *>(this, "AShooterWeapon.FireForceFeedback"); }
	USoundCue * FireSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon.FireSound"); }
	USoundCue * AltFireSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon.AltFireSound"); }
	USoundCue * FireFinishSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon.FireFinishSound"); }
	USoundCue * OutOfAmmoSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon.OutOfAmmoSound"); }
	int& MeleeDamageAmountField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.MeleeDamageAmount"); }
	float& TheMeleeSwingRadiusField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TheMeleeSwingRadius"); }
	float& MeleeDamageImpulseField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeDamageImpulse"); }
	FWeaponAnim& ReloadAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.ReloadAnim"); }
	FWeaponAnim& PartialReloadAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.PartialReloadAnim"); }
	UAnimMontage * WeaponMesh3PReloadAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterWeapon.WeaponMesh3PReloadAnim"); }
	FWeaponAnim& HarvestAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.HarvestAnim"); }
	FWeaponAnim& WeaponBreakAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.WeaponBreakAnim"); }
	USoundCue * EquipSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon.EquipSound"); }
	FWeaponAnim& EquipAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.EquipAnim"); }
	FWeaponAnim& EquipNoAmmoClipAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.EquipNoAmmoClipAnim"); }
	FWeaponAnim& UnequipAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.UnequipAnim"); }
	FWeaponAnim& UnequipNoAmmoClipAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.UnequipNoAmmoClipAnim"); }
	UAnimMontage * WeaponMesh3PFireAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterWeapon.WeaponMesh3PFireAnim"); }
	FWeaponAnim& FireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.FireAnim"); }
	FWeaponAnim& MeleeAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.MeleeAnim"); }
	FWeaponAnim& MeleeNoAmmoClipAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.MeleeNoAmmoClipAnim"); }
	TArray<FWeaponAnim>& MeleeAnimListField() { return *GetNativePointerField<TArray<FWeaponAnim>*>(this, "AShooterWeapon.MeleeAnimList"); }
	TArray<FWeaponAnim>& MeleeWithHitAnimListField() { return *GetNativePointerField<TArray<FWeaponAnim>*>(this, "AShooterWeapon.MeleeWithHitAnimList"); }
	FWeaponAnim& ShieldHitAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.ShieldHitAnim"); }
	float& FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeed"); }
	float& FPVMoveOffscreenWhenTurningMinMoveWeaponSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMinMoveWeaponSpeed"); }
	float& FPVMoveOffscreenWhenTurningMinViewRotSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMinViewRotSpeed"); }
	float& FPVMoveOffscreenWhenTurningMaxViewRotSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMaxViewRotSpeed"); }
	float& FPVMoveOffscreenIdleRestoreIntervalField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenIdleRestoreInterval"); }
	float& FPVMoveOffscreenIdleRestoreSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenIdleRestoreSpeed"); }
	float& FPVMoveOffscreenWhenTurningMaxOffsetField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMaxOffset"); }
	long double& FPVStoppedTurningTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.FPVStoppedTurningTime"); }
	FWeaponAnim& TargetingFireAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.TargetingFireAnim"); }
	float& ItemDestructionUnequipWeaponDelayField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.ItemDestructionUnequipWeaponDelay"); }
	float& WeaponUnequipDelayField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.WeaponUnequipDelay"); }
	FWeaponAnim& TargetingReloadAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.TargetingReloadAnim"); }
	EWeaponState::Type& CurrentStateField() { return *GetNativePointerField<EWeaponState::Type*>(this, "AShooterWeapon.CurrentState"); }
	long double& LastFireTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.LastFireTime"); }
	int& CurrentAmmoField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.CurrentAmmo"); }
	int& CurrentAmmoInClipField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.CurrentAmmoInClip"); }
	bool& bReplicateCurrentAmmoInClipToNonOwnersField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bReplicateCurrentAmmoInClipToNonOwners"); }
	bool& bUseBPAdjustAmmoPerShotField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseBPAdjustAmmoPerShot"); }
	FName& FPVAccessoryToggleComponentField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.FPVAccessoryToggleComponent"); }
	FName& TPVAccessoryToggleComponentField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.TPVAccessoryToggleComponent"); }
	float& TimeToAutoReloadField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TimeToAutoReload"); }
	int& FiredLastNoAmmoShotField() { return *GetNativePointerField<int*>(this, "AShooterWeapon.FiredLastNoAmmoShot"); }
	long double& LastNotifyShotTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.LastNotifyShotTime"); }
	FVector& VRTargetingModelOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.VRTargetingModelOffset"); }
	FVector& VRTargetingAimOriginOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.VRTargetingAimOriginOffset"); }
	float& ScopeCrosshairSizeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.ScopeCrosshairSize"); }
	FName& ScopeCrosshairColorParameterField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon.ScopeCrosshairColorParameter"); }
	float& MinItemDurabilityPercentageForShotField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MinItemDurabilityPercentageForShot"); }
	float& OverrideTargetingFOVField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.OverrideTargetingFOV"); }
	float& TargetingDelayTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TargetingDelayTime"); }
	float& TargetingFOVInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TargetingFOVInterpSpeed"); }
	float& AimDriftYawAngleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftYawAngle"); }
	float& AimDriftPitchAngleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftPitchAngle"); }
	float& AimDriftYawFrequencyField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftYawFrequency"); }
	float& AimDriftPitchFrequencyField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftPitchFrequency"); }
	UAnimMontage * AlternateInventoryEquipAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterWeapon.AlternateInventoryEquipAnim"); }
	FWeaponAnim& OpenInventoryAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.OpenInventoryAnim"); }
	float& MeleeHitRandomChanceToDestroyItemField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeHitRandomChanceToDestroyItem"); }
	float& GlobalFireCameraShakeScaleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.GlobalFireCameraShakeScale"); }
	float& DurabilityCostToEquipField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.DurabilityCostToEquip"); }
	float& PassiveDurabilityCostPerIntervalField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.PassiveDurabilityCostPerInterval"); }
	float& PassiveDurabilityCostIntervalField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.PassiveDurabilityCostInterval"); }
	float& GlobalFireCameraShakeScaleTargetingField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.GlobalFireCameraShakeScaleTargeting"); }
	float& MeleeCameraShakeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeCameraShakeSpeedScale"); }
	float& ReloadCameraShakeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.ReloadCameraShakeSpeedScale"); }
	float& MeleeConsumesStaminaField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeConsumesStamina"); }
	TSubclassOf<UCameraShake>& MeleeHitTargetCameraShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "AShooterWeapon.MeleeHitTargetCameraShake"); }
	TSubclassOf<UCameraShake>& MeleeHitTargetCameraShakeMobileField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "AShooterWeapon.MeleeHitTargetCameraShakeMobile"); }
	float& HypoThermiaInsulationField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.HypoThermiaInsulation"); }
	float& HyperThermiaInsulationField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.HyperThermiaInsulation"); }
	float& InsulationRangeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.InsulationRange"); }
	long double& LastDurabilityConsumptionTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.LastDurabilityConsumptionTime"); }
	bool& bLastMeleeHitField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bLastMeleeHit"); }
	bool& bLastMeleeHitStationaryField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bLastMeleeHitStationary"); }
	bool& bClientAlreadyReloadedField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bClientAlreadyReloaded"); }
	float& AutoReloadTimerField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.AutoReloadTimer"); }
	bool& bConsumedDurabilityForThisMeleeHitField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bConsumedDurabilityForThisMeleeHit"); }
	USoundCue * TargetingSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon.TargetingSound"); }
	USoundCue * UntargetingSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon.UntargetingSound"); }
	float& FPVMeleeTraceFXRangeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMeleeTraceFXRange"); }
	TSubclassOf<UShooterDamageType>& MeleeAttackUsableHarvestDamageTypeField() { return *GetNativePointerField<TSubclassOf<UShooterDamageType>*>(this, "AShooterWeapon.MeleeAttackUsableHarvestDamageType"); }
	float& MeleeAttackHarvetUsableComponentsRadiusField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeAttackHarvetUsableComponentsRadius"); }
	float& MeleeAttackUsableHarvestDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeAttackUsableHarvestDamageMultiplier"); }
	FieldArray<bool, 6> bColorizeRegionsField() { return {this, "AShooterWeapon.bColorizeRegions"}; }
	UAnimMontage * TPVForcePlayAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterWeapon.TPVForcePlayAnim"); }
	bool& bPreventOpeningInventoryField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bPreventOpeningInventory"); }
	bool& bAllowUseOnSeatingStructureField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bAllowUseOnSeatingStructure"); }
	bool& bOnlyUseOnSeatingStructureField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bOnlyUseOnSeatingStructure"); }
	bool& bBPDoClientCheckCanFireField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bBPDoClientCheckCanFire"); }
	bool& bRestrictTPVCameraYawField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bRestrictTPVCameraYaw"); }
	float& TPVCameraYawRangeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.TPVCameraYawRange"); }
	bool& bFoceSimulatedTickField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bFoceSimulatedTick"); }
	bool& bWasLastFireFromGamePadField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bWasLastFireFromGamePad"); }
	bool& bDisableWeaponCrosshairField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bDisableWeaponCrosshair"); }
	UStaticMesh * DyePreviewMeshOverrideSMField() { return GetNativePointerField<UStaticMesh *>(this, "AShooterWeapon.DyePreviewMeshOverrideSM"); }
	bool& bBPOverrideAspectRatioField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bBPOverrideAspectRatio"); }
	bool& bBPOverrideFPVMasterPoseComponentField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bBPOverrideFPVMasterPoseComponent"); }
	bool& bForceAllowMountedWeaponryField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceAllowMountedWeaponry"); }
	float& FireCameraShakeSpreadScaleExponentField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleExponent"); }
	float& FireCameraShakeSpreadScaleExponentLessThanField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleExponentLessThan"); }
	float& FireCameraShakeSpreadScaleMultiplierLessThanField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleMultiplierLessThan"); }
	float& FireCameraShakeSpreadScaleMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleMultiplier"); }
	bool& bUseFireCameraShakeScaleField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseFireCameraShakeScale"); }
	bool& bForceTickWithNoControllerField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceTickWithNoController"); }
	FInstantWeaponData& InstantConfigField() { return *GetNativePointerField<FInstantWeaponData*>(this, "AShooterWeapon.InstantConfig"); }
	float& CurrentFiringSpreadField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.CurrentFiringSpread"); }
	UAnimSequence * OverrideTPVShieldAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterWeapon.OverrideTPVShieldAnimation"); }
	bool& bAllowTargetingDuringMeleeSwingField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bAllowTargetingDuringMeleeSwing"); }
	FVector& FPVMuzzleLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVMuzzleLocationOffset"); }
	FVector& TPVMuzzleLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.TPVMuzzleLocationOffset"); }
	bool& bForceTPV_EquippedWhileRidingField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceTPV_EquippedWhileRiding"); }
	bool& bCutsEnemyGrapplingCableField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bCutsEnemyGrapplingCable"); }
	FVector& FPVInventoryReequipOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVInventoryReequipOffset"); }
	long double& LocalInventoryViewingSkippedEquipAnimTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon.LocalInventoryViewingSkippedEquipAnimTime"); }
	float& DraggingOffsetInterpField() { return *GetNativePointerField<float*>(this, "AShooterWeapon.DraggingOffsetInterp"); }
	bool& bForceTPVCameraOffsetField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceTPVCameraOffset"); }
	bool& bUseBPSpawnMeleeEffectsField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseBPSpawnMeleeEffects"); }
	FWeaponAnim& StartBurstAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.StartBurstAnim"); }
	FWeaponAnim& FinishBurstAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon.FinishBurstAnim"); }
	bool& bBlockCameraAnimFPVField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bBlockCameraAnimFPV"); }

	// Functions

	bool IsPlayingCameraAnimFPV() { return NativeCall<bool>(this, "AShooterWeapon.IsPlayingCameraAnimFPV"); }
	void ZoomIn() { NativeCall<void>(this, "AShooterWeapon.ZoomIn"); }
	void ZoomOut() { NativeCall<void>(this, "AShooterWeapon.ZoomOut"); }
	bool UseAlternateAimOffsetAnim() { return NativeCall<bool>(this, "AShooterWeapon.UseAlternateAimOffsetAnim"); }
	bool AddToMeleeSwingHurtList(AActor * AnActor) { return NativeCall<bool, AActor *>(this, "AShooterWeapon.AddToMeleeSwingHurtList", AnActor); }
	bool AllowFiring() { return NativeCall<bool>(this, "AShooterWeapon.AllowFiring"); }
	bool AllowedToFire(bool bForceAllowSubmergedFiring) { return NativeCall<bool, bool>(this, "AShooterWeapon.AllowedToFire", bForceAllowSubmergedFiring); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "AShooterWeapon.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, float, const UAnimNotifyState *>(this, "AShooterWeapon.AnimNotifyCustomState_Begin", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotifyState *>(this, "AShooterWeapon.AnimNotifyCustomState_End", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AnimNotifyCustomState_Tick(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, float, const UAnimNotifyState *>(this, "AShooterWeapon.AnimNotifyCustomState_Tick", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	void ApplyCharacterSnapshot(UPrimalItem * SnapshotItem, AActor * To) { NativeCall<void, UPrimalItem *, AActor *>(this, "AShooterWeapon.ApplyCharacterSnapshot", SnapshotItem, To); }
	void ApplyPrimalItemSettingsToWeapon(bool bShallowUpdate) { NativeCall<void, bool>(this, "AShooterWeapon.ApplyPrimalItemSettingsToWeapon", bShallowUpdate); }
	void AttachMeshToPawn() { NativeCall<void>(this, "AShooterWeapon.AttachMeshToPawn"); }
	void BPRequestReload() { NativeCall<void>(this, "AShooterWeapon.BPRequestReload"); }
	void BeginPlay() { NativeCall<void>(this, "AShooterWeapon.BeginPlay"); }
	bool CanFire(bool bForceAllowSubmergedFiring) { return NativeCall<bool, bool>(this, "AShooterWeapon.CanFire", bForceAllowSubmergedFiring); }
	bool CanMeleeAttack() { return NativeCall<bool>(this, "AShooterWeapon.CanMeleeAttack"); }
	bool CanReload() { return NativeCall<bool>(this, "AShooterWeapon.CanReload"); }
	bool CanRun() { return NativeCall<bool>(this, "AShooterWeapon.CanRun"); }
	bool CanTarget() { return NativeCall<bool>(this, "AShooterWeapon.CanTarget"); }
	bool CanToggleAccessory() { return NativeCall<bool>(this, "AShooterWeapon.CanToggleAccessory"); }
	void CheckForMeleeAttack() { NativeCall<void>(this, "AShooterWeapon.CheckForMeleeAttack"); }
	void CheckItemAssocation() { NativeCall<void>(this, "AShooterWeapon.CheckItemAssocation"); }
	void ClearClientReload() { NativeCall<void>(this, "AShooterWeapon.ClearClientReload"); }
	void ClientPlayShieldHitAnim_Implementation() { NativeCall<void>(this, "AShooterWeapon.ClientPlayShieldHitAnim_Implementation"); }
	void ClientSetClipAmmo_Implementation(int newClipAmmo, bool bOnlyUpdateItem) { NativeCall<void, int, bool>(this, "AShooterWeapon.ClientSetClipAmmo_Implementation", newClipAmmo, bOnlyUpdateItem); }
	void ClientSimulateWeaponFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ClientSimulateWeaponFire_Implementation"); }
	void ClientSpawnMeleeEffects_Implementation(FVector Impact, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "AShooterWeapon.ClientSpawnMeleeEffects_Implementation", Impact, ShootDir); }
	void ClientStartMuzzleFX_Implementation() { NativeCall<void>(this, "AShooterWeapon.ClientStartMuzzleFX_Implementation"); }
	void ClientStartReload_Implementation() { NativeCall<void>(this, "AShooterWeapon.ClientStartReload_Implementation"); }
	void ClientStopSimulatingWeaponFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ClientStopSimulatingWeaponFire_Implementation"); }
	void ConsumeAmmoItem(int Quantity) { NativeCall<void, int>(this, "AShooterWeapon.ConsumeAmmoItem", Quantity); }
	void CosumeMeleeHitDurability(float DurabilityConsumptionMultiplier) { NativeCall<void, float>(this, "AShooterWeapon.CosumeMeleeHitDurability", DurabilityConsumptionMultiplier); }
	void DealDamage(const FHitResult * Impact, const FVector * ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { NativeCall<void, const FHitResult *, const FVector *, int, TSubclassOf<UDamageType>, float>(this, "AShooterWeapon.DealDamage", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	void Destroyed() { NativeCall<void>(this, "AShooterWeapon.Destroyed"); }
	void DetachMeshFromPawn() { NativeCall<void>(this, "AShooterWeapon.DetachMeshFromPawn"); }
	void DetermineWeaponState() { NativeCall<void>(this, "AShooterWeapon.DetermineWeaponState"); }
	void DoHandleFiring() { NativeCall<void>(this, "AShooterWeapon.DoHandleFiring"); }
	void DoMeleeAttack() { NativeCall<void>(this, "AShooterWeapon.DoMeleeAttack"); }
	void DoReregisterAllComponents() { NativeCall<void>(this, "AShooterWeapon.DoReregisterAllComponents"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "AShooterWeapon.DrawHUD", HUD); }
	void EndDoMeleeSwing() { NativeCall<void>(this, "AShooterWeapon.EndDoMeleeSwing"); }
	void EndMeleeSwing() { NativeCall<void>(this, "AShooterWeapon.EndMeleeSwing"); }
	void FireWeapon() { NativeCall<void>(this, "AShooterWeapon.FireWeapon"); }
	bool ForceFirstPerson() { return NativeCall<bool>(this, "AShooterWeapon.ForceFirstPerson"); }
	void ForceMeshUpdate(bool bIsFirstPerson) { NativeCall<void, bool>(this, "AShooterWeapon.ForceMeshUpdate", bIsFirstPerson); }
	bool ForceTPVTargetingAnimation() { return NativeCall<bool>(this, "AShooterWeapon.ForceTPVTargetingAnimation"); }
	void ForceUpdateClientAmmo() { NativeCall<void>(this, "AShooterWeapon.ForceUpdateClientAmmo"); }
	bool ForcesTPVCameraOffset_Implementation() { return NativeCall<bool>(this, "AShooterWeapon.ForcesTPVCameraOffset_Implementation"); }
	FVector * GetAdjustedAim(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterWeapon.GetAdjustedAim", result); }
	FVector * GetCameraDamageStartLocation(FVector * result, const FVector * AimDir) { return NativeCall<FVector *, FVector *, const FVector *>(this, "AShooterWeapon.GetCameraDamageStartLocation", result, AimDir); }
	float GetConsumeDurabilityPerShot() { return NativeCall<float>(this, "AShooterWeapon.GetConsumeDurabilityPerShot"); }
	int GetCurrentAmmo() { return NativeCall<int>(this, "AShooterWeapon.GetCurrentAmmo"); }
	int GetCurrentAmmoInClip() { return NativeCall<int>(this, "AShooterWeapon.GetCurrentAmmoInClip"); }
	EWeaponState::Type GetCurrentState() { return NativeCall<EWeaponState::Type>(this, "AShooterWeapon.GetCurrentState"); }
	FString * GetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterWeapon.GetDebugInfoString", result); }
	float GetFireCameraShakeScale() { return NativeCall<float>(this, "AShooterWeapon.GetFireCameraShakeScale"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AShooterWeapon.GetLifetimeReplicatedProps", OutLifetimeProps); }
	FVector * GetMuzzleDirection(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterWeapon.GetMuzzleDirection", result); }
	FVector * GetMuzzleLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterWeapon.GetMuzzleLocation", result); }
	AShooterCharacter * GetPawnOwner() { return NativeCall<AShooterCharacter *>(this, "AShooterWeapon.GetPawnOwner"); }
	FVector * GetShootingCameraLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterWeapon.GetShootingCameraLocation", result); }
	float GetWeaponDamageMultiplier() { return NativeCall<float>(this, "AShooterWeapon.GetWeaponDamageMultiplier"); }
	void HandleFiring(bool bSentFromClient) { NativeCall<void, bool>(this, "AShooterWeapon.HandleFiring", bSentFromClient); }
	bool HasInfiniteAmmo() { return NativeCall<bool>(this, "AShooterWeapon.HasInfiniteAmmo"); }
	bool IsFiring() { return NativeCall<bool>(this, "AShooterWeapon.IsFiring"); }
	bool IsFirstPersonMeshVisible() { return NativeCall<bool>(this, "AShooterWeapon.IsFirstPersonMeshVisible"); }
	bool IsInMeleeAttack() { return NativeCall<bool>(this, "AShooterWeapon.IsInMeleeAttack"); }
	bool IsLocallyOwned() { return NativeCall<bool>(this, "AShooterWeapon.IsLocallyOwned"); }
	bool IsOwningClient() { return NativeCall<bool>(this, "AShooterWeapon.IsOwningClient"); }
	bool IsPlayingWeaponAnimMontage(const FWeaponAnim * WeaponAnim, float TimeFromEndToConsiderFinished) { return NativeCall<bool, const FWeaponAnim *, float>(this, "AShooterWeapon.IsPlayingWeaponAnimMontage", WeaponAnim, TimeFromEndToConsiderFinished); }
	bool IsSimulated() { return NativeCall<bool>(this, "AShooterWeapon.IsSimulated"); }
	bool IsValidUnStasisCaster() { return NativeCall<bool>(this, "AShooterWeapon.IsValidUnStasisCaster"); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "AShooterWeapon.LoadedFromSaveGame"); }
	void LocalPossessed() { NativeCall<void>(this, "AShooterWeapon.LocalPossessed"); }
	void OnBurstFinished() { NativeCall<void>(this, "AShooterWeapon.OnBurstFinished"); }
	void OnBurstStarted() { NativeCall<void>(this, "AShooterWeapon.OnBurstStarted"); }
	void OnCameraUpdate(const FVector * CameraLocation, const FRotator * CameraRotation, const FVector * WeaponBob) { NativeCall<void, const FVector *, const FRotator *, const FVector *>(this, "AShooterWeapon.OnCameraUpdate", CameraLocation, CameraRotation, WeaponBob); }
	void OnEquip() { NativeCall<void>(this, "AShooterWeapon.OnEquip"); }
	void OnEquipFinished() { NativeCall<void>(this, "AShooterWeapon.OnEquipFinished"); }
	void OnRep_AccessoryToggle() { NativeCall<void>(this, "AShooterWeapon.OnRep_AccessoryToggle"); }
	void OnRep_CurrentAmmoInClip() { NativeCall<void>(this, "AShooterWeapon.OnRep_CurrentAmmoInClip"); }
	void OnRep_MyPawn() { NativeCall<void>(this, "AShooterWeapon.OnRep_MyPawn"); }
	void OnRep_NetLoopedWeaponFire() { NativeCall<void>(this, "AShooterWeapon.OnRep_NetLoopedWeaponFire"); }
	void OnStartTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "AShooterWeapon.OnStartTargeting", bFromGamepadLeft); }
	void OnStopTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "AShooterWeapon.OnStopTargeting", bFromGamepadLeft); }
	void OwnerDied() { NativeCall<void>(this, "AShooterWeapon.OwnerDied"); }
	float PlayCameraAnimationFPV(UAnimMontage * Animation1P) { return NativeCall<float, UAnimMontage *>(this, "AShooterWeapon.PlayCameraAnimationFPV", Animation1P); }
	void PlayFireAnimation() { NativeCall<void>(this, "AShooterWeapon.PlayFireAnimation"); }
	float PlayReloadAnimation() { return NativeCall<float>(this, "AShooterWeapon.PlayReloadAnimation"); }
	void PlayUnequipAnimation() { NativeCall<void>(this, "AShooterWeapon.PlayUnequipAnimation"); }
	void PlayUseHarvestAnimation_Implementation() { NativeCall<void>(this, "AShooterWeapon.PlayUseHarvestAnimation_Implementation"); }
	float PlayWeaponAnimation(const FWeaponAnim * Animation, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { return NativeCall<float, const FWeaponAnim *, bool, bool, bool, bool, bool, bool>(this, "AShooterWeapon.PlayWeaponAnimation", Animation, bPlayBothFirstAndThirdPerson, bReplicate, bReplicateToInstigator, bPauseOnFinish1P, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	float PlayWeaponAnimationEx(const FWeaponAnim * Animation, float InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { return NativeCall<float, const FWeaponAnim *, float, bool, bool, bool, bool, bool, bool>(this, "AShooterWeapon.PlayWeaponAnimationEx", Animation, InPlayRate, bPlayBothFirstAndThirdPerson, bReplicate, bReplicateToInstigator, bPauseOnFinish1P, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	void PlayWeaponBreakAnimation_Implementation() { NativeCall<void>(this, "AShooterWeapon.PlayWeaponBreakAnimation_Implementation"); }
	UAudioComponent * PlayWeaponSound(USoundCue * Sound) { return NativeCall<UAudioComponent *, USoundCue *>(this, "AShooterWeapon.PlayWeaponSound", Sound); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterWeapon.PostInitializeComponents"); }
	bool PreventSwitchingWeapon() { return NativeCall<bool>(this, "AShooterWeapon.PreventSwitchingWeapon"); }
	void RefreshAmmoItemQuantity() { NativeCall<void>(this, "AShooterWeapon.RefreshAmmoItemQuantity"); }
	void RefreshToggleAccessory() { NativeCall<void>(this, "AShooterWeapon.RefreshToggleAccessory"); }
	void ReloadWeapon() { NativeCall<void>(this, "AShooterWeapon.ReloadWeapon"); }
	FWeaponAnim * SelectMeleeAttackAnim(FWeaponAnim * result) { return NativeCall<FWeaponAnim *, FWeaponAnim *>(this, "AShooterWeapon.SelectMeleeAttackAnim", result); }
	void ServerSetColorizeRegion_Implementation(int theRegion, bool bValToUse) { NativeCall<void, int, bool>(this, "AShooterWeapon.ServerSetColorizeRegion_Implementation", theRegion, bValToUse); }
	void ServerStartAltFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStartAltFire_Implementation"); }
	void ServerStartFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStartFire_Implementation"); }
	void ServerStartReload_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStartReload_Implementation"); }
	void ServerStartSecondaryAction_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStartSecondaryAction_Implementation"); }
	void ServerStopAltFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStopAltFire_Implementation"); }
	void ServerStopFire_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStopFire_Implementation"); }
	void ServerStopSecondaryAction_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerStopSecondaryAction_Implementation"); }
	void ServerToggleAccessory_Implementation() { NativeCall<void>(this, "AShooterWeapon.ServerToggleAccessory_Implementation"); }
	void SetAccessoryEnabled(bool bEnabled) { NativeCall<void, bool>(this, "AShooterWeapon.SetAccessoryEnabled", bEnabled); }
	void SetAmmoInClip(int newAmmo) { NativeCall<void, int>(this, "AShooterWeapon.SetAmmoInClip", newAmmo); }
	void SetAutoReload() { NativeCall<void>(this, "AShooterWeapon.SetAutoReload"); }
	void SetOwningPawn(AShooterCharacter * NewOwner) { NativeCall<void, AShooterCharacter *>(this, "AShooterWeapon.SetOwningPawn", NewOwner); }
	void SetWeaponState(EWeaponState::Type NewState) { NativeCall<void, EWeaponState::Type>(this, "AShooterWeapon.SetWeaponState", NewState); }
	bool ShouldDealDamage(AActor * TestActor) { return NativeCall<bool, AActor *>(this, "AShooterWeapon.ShouldDealDamage", TestActor); }
	void SimulateWeaponFire() { NativeCall<void>(this, "AShooterWeapon.SimulateWeaponFire"); }
	void SlowAccuracyReset() { NativeCall<void>(this, "AShooterWeapon.SlowAccuracyReset"); }
	void StartAltFire() { NativeCall<void>(this, "AShooterWeapon.StartAltFire"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon.StartFire", bFromGamepad); }
	void StartMeleeSwing() { NativeCall<void>(this, "AShooterWeapon.StartMeleeSwing"); }
	void StartMuzzleFX() { NativeCall<void>(this, "AShooterWeapon.StartMuzzleFX"); }
	void StartReload(bool bFromReplication) { NativeCall<void, bool>(this, "AShooterWeapon.StartReload", bFromReplication); }
	void StartSecondaryAction() { NativeCall<void>(this, "AShooterWeapon.StartSecondaryAction"); }
	void StartUnequip_Implementation() { NativeCall<void>(this, "AShooterWeapon.StartUnequip_Implementation"); }
	void StopAltFire() { NativeCall<void>(this, "AShooterWeapon.StopAltFire"); }
	void StopCameraAnimationFPV(bool bLeaveHUDHidden) { NativeCall<void, bool>(this, "AShooterWeapon.StopCameraAnimationFPV", bLeaveHUDHidden); }
	void StopCheckForMeleeAttack() { NativeCall<void>(this, "AShooterWeapon.StopCheckForMeleeAttack"); }
	void StopFire() { NativeCall<void>(this, "AShooterWeapon.StopFire"); }
	void StopMuzzleFX() { NativeCall<void>(this, "AShooterWeapon.StopMuzzleFX"); }
	void StopReloadAnimation() { NativeCall<void>(this, "AShooterWeapon.StopReloadAnimation"); }
	void StopSecondaryAction() { NativeCall<void>(this, "AShooterWeapon.StopSecondaryAction"); }
	void StopSimulatingWeaponFire() { NativeCall<void>(this, "AShooterWeapon.StopSimulatingWeaponFire"); }
	void StopWeaponAnimation(const FWeaponAnim * Animation, bool bReplicate, bool bReplicateToInstigator) { NativeCall<void, const FWeaponAnim *, bool, bool>(this, "AShooterWeapon.StopWeaponAnimation", Animation, bReplicate, bReplicateToInstigator); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon.Tick", DeltaSeconds); }
	void TickMeleeSwing(float DeltaTime) { NativeCall<void, float>(this, "AShooterWeapon.TickMeleeSwing", DeltaTime); }
	void ToggleAccessory() { NativeCall<void>(this, "AShooterWeapon.ToggleAccessory"); }
	bool TryFireWeapon() { return NativeCall<bool>(this, "AShooterWeapon.TryFireWeapon"); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "AShooterWeapon.UpdateFirstPersonMeshes", bIsFirstPerson); }
	void UseAmmo(int UseAmmoAmountOverride) { NativeCall<void, int>(this, "AShooterWeapon.UseAmmo", UseAmmoAmountOverride); }
	bool UsesAmmo() { return NativeCall<bool>(this, "AShooterWeapon.UsesAmmo"); }
	bool ValidateFire() { return NativeCall<bool>(this, "AShooterWeapon.ValidateFire"); }
	FHitResult * WeaponTrace(FHitResult * result, const FVector * StartTrace, const FVector * EndTrace) { return NativeCall<FHitResult *, FHitResult *, const FVector *, const FVector *>(this, "AShooterWeapon.WeaponTrace", result, StartTrace, EndTrace); }
	void WeaponTraceHits(TArray<FHitResult> * HitResults, const FVector * StartTrace, const FVector * EndTrace) { NativeCall<void, TArray<FHitResult> *, const FVector *, const FVector *>(this, "AShooterWeapon.WeaponTraceHits", HitResults, StartTrace, EndTrace); }
	int GetStandingAnimation_Implementation(FName Tag, AShooterCharacter * PlayerPawn) { return NativeCall<int, FName, AShooterCharacter *>(this, "AShooterWeapon.GetStandingAnimation_Implementation", Tag, PlayerPawn); }
	bool AllowTargeting() { return NativeCall<bool>(this, "AShooterWeapon.AllowTargeting"); }
	bool AllowUnequip() { return NativeCall<bool>(this, "AShooterWeapon.AllowUnequip"); }
	int BPAdjustAmmoPerShot() { return NativeCall<int>(this, "AShooterWeapon.BPAdjustAmmoPerShot"); }
	bool BPAllowNativeFireWeapon() { return NativeCall<bool>(this, "AShooterWeapon.BPAllowNativeFireWeapon"); }
	void BPAppliedPrimalItemToWeapon() { NativeCall<void>(this, "AShooterWeapon.BPAppliedPrimalItemToWeapon"); }
	bool BPCanEquip(AShooterCharacter * ByCharacter) { return NativeCall<bool, AShooterCharacter *>(this, "AShooterWeapon.BPCanEquip", ByCharacter); }
	bool BPCanMeleeAttack() { return NativeCall<bool>(this, "AShooterWeapon.BPCanMeleeAttack"); }
	bool BPCanToggleAccessory() { return NativeCall<bool>(this, "AShooterWeapon.BPCanToggleAccessory"); }
	bool BPConstrainAspectRatio(float * OutAspectRatio) { return NativeCall<bool, float *>(this, "AShooterWeapon.BPConstrainAspectRatio", OutAspectRatio); }
	void BPDrawHud(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "AShooterWeapon.BPDrawHud", HUD); }
	void BPFireWeapon() { NativeCall<void>(this, "AShooterWeapon.BPFireWeapon"); }
	void BPFiredWeapon() { NativeCall<void>(this, "AShooterWeapon.BPFiredWeapon"); }
	bool BPForceTPVTargetingAnimation() { return NativeCall<bool>(this, "AShooterWeapon.BPForceTPVTargetingAnimation"); }
	FString * BPGetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterWeapon.BPGetDebugInfoString", result); }
	UAnimSequence * BPGetSeatingAnimation() { return NativeCall<UAnimSequence *>(this, "AShooterWeapon.BPGetSeatingAnimation"); }
	FWeaponAnim * BPGetSelectedMeleeAttackAnim(FWeaponAnim * result) { return NativeCall<FWeaponAnim *, FWeaponAnim *>(this, "AShooterWeapon.BPGetSelectedMeleeAttackAnim", result); }
	FVector * BPGetTPVCameraOffset(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterWeapon.BPGetTPVCameraOffset", result); }
	FText * BPGetTargetingTooltipInfoLabel(FText * result) { return NativeCall<FText *, FText *>(this, "AShooterWeapon.BPGetTargetingTooltipInfoLabel", result); }
	void BPGlobalFireWeapon() { NativeCall<void>(this, "AShooterWeapon.BPGlobalFireWeapon"); }
	void BPHandleMeleeAttack() { NativeCall<void>(this, "AShooterWeapon.BPHandleMeleeAttack"); }
	void BPLostController() { NativeCall<void>(this, "AShooterWeapon.BPLostController"); }
	void BPMeleeAttackStarted() { NativeCall<void>(this, "AShooterWeapon.BPMeleeAttackStarted"); }
	float BPModifyFOV(float inFOV) { return NativeCall<float, float>(this, "AShooterWeapon.BPModifyFOV", inFOV); }
	void BPOnBurstFinished() { NativeCall<void>(this, "AShooterWeapon.BPOnBurstFinished"); }
	void BPOnBurstStarted() { NativeCall<void>(this, "AShooterWeapon.BPOnBurstStarted"); }
	void BPOnScoped() { NativeCall<void>(this, "AShooterWeapon.BPOnScoped"); }
	void BPOnStartTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "AShooterWeapon.BPOnStartTargeting", bFromGamepadLeft); }
	void BPOnStopTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "AShooterWeapon.BPOnStopTargeting", bFromGamepadLeft); }
	void BPOnWeaponAnimPlayedNotify(const FWeaponAnim * Animation, float InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { NativeCall<void, const FWeaponAnim *, float, bool, bool, bool, bool, bool, bool>(this, "AShooterWeapon.BPOnWeaponAnimPlayedNotify", Animation, InPlayRate, bPlayBothFirstAndThirdPerson, bReplicate, bReplicateToInstigator, bPauseOnFinish1P, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	FVector * BPOverrideAimDirection(FVector * result, const FVector * DesiredAimDirection) { return NativeCall<FVector *, FVector *, const FVector *>(this, "AShooterWeapon.BPOverrideAimDirection", result, DesiredAimDirection); }
	FRotator * BPOverrideRootRotationOffset(FRotator * result, FRotator InRootRotation) { return NativeCall<FRotator *, FRotator *, FRotator>(this, "AShooterWeapon.BPOverrideRootRotationOffset", result, InRootRotation); }
	void BPPostSpawnMuzzleEffect(UParticleSystemComponent * NewMuzzlePSC) { NativeCall<void, UParticleSystemComponent *>(this, "AShooterWeapon.BPPostSpawnMuzzleEffect", NewMuzzlePSC); }
	bool BPPreventSwitchingWeapon() { return NativeCall<bool>(this, "AShooterWeapon.BPPreventSwitchingWeapon"); }
	bool BPRemainEquipped() { return NativeCall<bool>(this, "AShooterWeapon.BPRemainEquipped"); }
	bool BPShouldDealDamage(AActor * TestActor) { return NativeCall<bool, AActor *>(this, "AShooterWeapon.BPShouldDealDamage", TestActor); }
	void BPSpawnMeleeEffects(FVector Impact, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "AShooterWeapon.BPSpawnMeleeEffects", Impact, ShootDir); }
	void BPStartEquippedNotify() { NativeCall<void>(this, "AShooterWeapon.BPStartEquippedNotify"); }
	void BPStopMeleeAttack() { NativeCall<void>(this, "AShooterWeapon.BPStopMeleeAttack"); }
	void BPToggleAccessory() { NativeCall<void>(this, "AShooterWeapon.BPToggleAccessory"); }
	void BPToggleAccessoryFailed() { NativeCall<void>(this, "AShooterWeapon.BPToggleAccessoryFailed"); }
	bool BPTryFireWeapon() { return NativeCall<bool>(this, "AShooterWeapon.BPTryFireWeapon"); }
	bool BPWeaponCanFire() { return NativeCall<bool>(this, "AShooterWeapon.BPWeaponCanFire"); }
	int BPWeaponDealDamage(const FHitResult * Impact, const FVector * ShootDir, int DamageAmount, TSubclassOf<UDamageType> DamageType, float Impulse) { return NativeCall<int, const FHitResult *, const FVector *, int, TSubclassOf<UDamageType>, float>(this, "AShooterWeapon.BPWeaponDealDamage", Impact, ShootDir, DamageAmount, DamageType, Impulse); }
	void BPWeaponZoom(bool bZoomingIn) { NativeCall<void, bool>(this, "AShooterWeapon.BPWeaponZoom", bZoomingIn); }
	void BP_OnReloadNotify() { NativeCall<void>(this, "AShooterWeapon.BP_OnReloadNotify"); }
	void ClientPlayShieldHitAnim() { NativeCall<void>(this, "AShooterWeapon.ClientPlayShieldHitAnim"); }
	void ClientSetClipAmmo(int newClipAmmo, bool bOnlyUpdateItem) { NativeCall<void, int, bool>(this, "AShooterWeapon.ClientSetClipAmmo", newClipAmmo, bOnlyUpdateItem); }
	void ClientSimulateWeaponFire() { NativeCall<void>(this, "AShooterWeapon.ClientSimulateWeaponFire"); }
	void ClientSpawnMeleeEffects(FVector Impact, FVector ShootDir) { NativeCall<void, FVector, FVector>(this, "AShooterWeapon.ClientSpawnMeleeEffects", Impact, ShootDir); }
	void ClientStartMuzzleFX() { NativeCall<void>(this, "AShooterWeapon.ClientStartMuzzleFX"); }
	void ClientStartReload() { NativeCall<void>(this, "AShooterWeapon.ClientStartReload"); }
	void ClientStopSimulatingWeaponFire() { NativeCall<void>(this, "AShooterWeapon.ClientStopSimulatingWeaponFire"); }
	bool ForceDisableCameraOverrides() { return NativeCall<bool>(this, "AShooterWeapon.ForceDisableCameraOverrides"); }
	bool ForcesTPVCameraOffset() { return NativeCall<bool>(this, "AShooterWeapon.ForcesTPVCameraOffset"); }
	UAnimSequence * GetStandingAnimation(float * OutBlendInTime, float * OutBlendOutTime) { return NativeCall<UAnimSequence *, float *, float *>(this, "AShooterWeapon.GetStandingAnimation", OutBlendInTime, OutBlendOutTime); }
	void OnAttachedToPawn() { NativeCall<void>(this, "AShooterWeapon.OnAttachedToPawn"); }
	void OnInstigatorPlayDyingEvent() { NativeCall<void>(this, "AShooterWeapon.OnInstigatorPlayDyingEvent"); }
	void PlayUseHarvestAnimation() { NativeCall<void>(this, "AShooterWeapon.PlayUseHarvestAnimation"); }
	void PlayWeaponBreakAnimation() { NativeCall<void>(this, "AShooterWeapon.PlayWeaponBreakAnimation"); }
	void ServerSetColorizeRegion(int theRegion, bool bValToUse) { NativeCall<void, int, bool>(this, "AShooterWeapon.ServerSetColorizeRegion", theRegion, bValToUse); }
	void ServerStartAltFire() { NativeCall<void>(this, "AShooterWeapon.ServerStartAltFire"); }
	void ServerStartFire() { NativeCall<void>(this, "AShooterWeapon.ServerStartFire"); }
	void ServerStartReload() { NativeCall<void>(this, "AShooterWeapon.ServerStartReload"); }
	void ServerStartSecondaryAction() { NativeCall<void>(this, "AShooterWeapon.ServerStartSecondaryAction"); }
	void ServerStopAltFire() { NativeCall<void>(this, "AShooterWeapon.ServerStopAltFire"); }
	void ServerStopFire() { NativeCall<void>(this, "AShooterWeapon.ServerStopFire"); }
	void ServerToggleAccessory() { NativeCall<void>(this, "AShooterWeapon.ServerToggleAccessory"); }
	void StartSecondaryActionEvent() { NativeCall<void>(this, "AShooterWeapon.StartSecondaryActionEvent"); }
	void StartUnequip() { NativeCall<void>(this, "AShooterWeapon.StartUnequip"); }
	void StartUnequipEvent() { NativeCall<void>(this, "AShooterWeapon.StartUnequipEvent"); }
	void StopSecondaryActionEvent() { NativeCall<void>(this, "AShooterWeapon.StopSecondaryActionEvent"); }
};

