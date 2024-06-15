#pragma once

#include "BaseDeclarations.h"
#include "APrimalEmitterSpawnable.h"
#include "UDamageType.h"
#include "FColor.h"
#include "FHUDElement.h"
#include "FLifetimeProperty.h"
#include "UCameraShake.h"
#include "FBoneModifier.h"
#include "APrimalBuff.h"

struct APrimalBuff : APrimalEmitterSpawnable
{
	char __padding[0x460L];
	float& DeactivationLifespanField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DeactivationLifespan"); }
	FName& InstigatorAttachmentSocketField() { return *GetNativePointerField<FName*>(this, "APrimalBuff.InstigatorAttachmentSocket"); }
	FName& InstigatorAttachmentSocket_PlayerOverrideField() { return *GetNativePointerField<FName*>(this, "APrimalBuff.InstigatorAttachmentSocket_PlayerOverride"); }
	float& RemoteForcedFleeDurationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.RemoteForcedFleeDuration"); }
	FVector& AoETraceToTargetsStartOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff.AoETraceToTargetsStartOffset"); }
	float& SlowInstigatorFallingAddZVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SlowInstigatorFallingAddZVelocity"); }
	float& SlowInstigatorFallingDampenZVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SlowInstigatorFallingDampenZVelocity"); }
	float& DeactivateAfterTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DeactivateAfterTime"); }
	float& WeaponRecoilMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.WeaponRecoilMultiplier"); }
	float& ReceiveDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ReceiveDamageMultiplier"); }
	float& MeleeDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.MeleeDamageMultiplier"); }
	float& DepleteInstigatorItemDurabilityPerSecondField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DepleteInstigatorItemDurabilityPerSecond"); }
	FieldArray<float, 12> ValuesToAddPerSecondField() { return {this, "APrimalBuff.ValuesToAddPerSecond"}; }
	FStatusValueModifierDescription& BuffDescriptionField() { return *GetNativePointerField<FStatusValueModifierDescription*>(this, "APrimalBuff.BuffDescription"); }
	float& CharacterAdd_DefaultHyperthermicInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAdd_DefaultHyperthermicInsulation"); }
	float& CharacterAdd_DefaultHypothermicInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAdd_DefaultHypothermicInsulation"); }
	float& CharacterMultiplier_ExtraWaterConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_ExtraWaterConsumptionMultiplier"); }
	float& CharacterMultiplier_ExtraFoodConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_ExtraFoodConsumptionMultiplier"); }
	float& CharacterMultiplier_SubmergedOxygenDecreaseSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_SubmergedOxygenDecreaseSpeed"); }
	float& ViewMinExposureMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ViewMinExposureMultiplier"); }
	float& ViewMaxExposureMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ViewMaxExposureMultiplier"); }
	float& XPtoAddField() { return *GetNativePointerField<float*>(this, "APrimalBuff.XPtoAdd"); }
	float& XPtoAddRateField() { return *GetNativePointerField<float*>(this, "APrimalBuff.XPtoAddRate"); }
	int& DinoColorizationPriorityField() { return *GetNativePointerField<int*>(this, "APrimalBuff.DinoColorizationPriority"); }
	float& DinoColorizationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff.DinoColorizationInterpSpeed"); }
	TArray<FItemMultiplier>& OverrideInventoryItemClassWeightMultipliersField() { return *GetNativePointerField<TArray<FItemMultiplier>*>(this, "APrimalBuff.OverrideInventoryItemClassWeightMultipliers"); }
	FieldArray<FLinearColor, 6> DesiredDinoColorsField() { return {this, "APrimalBuff.DesiredDinoColors"}; }
	float& SubmergedMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SubmergedMaxSpeedModifier"); }
	float& UnsubmergedMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.UnsubmergedMaxSpeedModifier"); }
	float& SubmergedMaxAccelerationModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SubmergedMaxAccelerationModifier"); }
	float& UnsubmergedMaxAccelerationModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.UnsubmergedMaxAccelerationModifier"); }
	float& SubmergedRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.SubmergedRotationRateModifier"); }
	float& UnsubmergedRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.UnsubmergedRotationRateModifier"); }
	float& FrictionModifierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.FrictionModifier"); }
	TArray<FDamagePrimalCharacterStatusValueModifier>& CharacterStatusValueModifiersField() { return *GetNativePointerField<TArray<FDamagePrimalCharacterStatusValueModifier>*>(this, "APrimalBuff.CharacterStatusValueModifiers"); }
	long double& BuffStartTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.BuffStartTime"); }
	TWeakObjectPtr<AShooterPlayerController>& ForcedOnSpectatorPlayerControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "APrimalBuff.ForcedOnSpectatorPlayerController"); }
	bool& bForcedOnSpectatorPlayerControllerField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bForcedOnSpectatorPlayerController"); }
	TArray<float>& PreventActorClassesTargetingRangesField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalBuff.PreventActorClassesTargetingRanges"); }
	bool& bHasRelatedMissionField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bHasRelatedMission"); }
	float& PreventIfMovementMassGreaterThanField() { return *GetNativePointerField<float*>(this, "APrimalBuff.PreventIfMovementMassGreaterThan"); }
	float& AOEBuffRangeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffRange"); }
	float& CharacterAOEBuffDamageField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAOEBuffDamage"); }
	float& CharacterAOEBuffResistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAOEBuffResistance"); }
	float& Maximum2DVelocityForStaminaRecoveryField() { return *GetNativePointerField<float*>(this, "APrimalBuff.Maximum2DVelocityForStaminaRecovery"); }
	long double& LastItemDurabilityDepletionTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastItemDurabilityDepletionTime"); }
	float& XPEarningMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.XPEarningMultiplier"); }
	bool& bUseBPSetupForInstigatorField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPSetupForInstigator"); }
	bool& bUseBPDeactivatedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPDeactivated"); }
	bool& bUseBPOverrideBuffToGiveOnDeactivationField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPOverrideBuffToGiveOnDeactivation"); }
	bool& bUseBPCustomAllowAddBuffField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPCustomAllowAddBuff"); }
	bool& bUseBPInformDamageCauserOfBuffAddedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPInformDamageCauserOfBuffAdded"); }
	FVector& staticPathingDestinationField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff.staticPathingDestination"); }
	long double& TickingDeactivationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.TickingDeactivationTime"); }
	TArray<FMaxStatScaler>& MaxStatScalersField() { return *GetNativePointerField<TArray<FMaxStatScaler>*>(this, "APrimalBuff.MaxStatScalers"); }
	bool& bPersistentBuffSurvivesLevelUpField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bPersistentBuffSurvivesLevelUp"); }
	float& AoEApplyDamageField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AoEApplyDamage"); }
	float& AoEApplyDamageIntervalField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AoEApplyDamageInterval"); }
	int& ForceNetworkSpatializationBuffMaxLimitNumField() { return *GetNativePointerField<int*>(this, "APrimalBuff.ForceNetworkSpatializationBuffMaxLimitNum"); }
	float& ForceNetworkSpatializationBuffMaxLimitRangeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.ForceNetworkSpatializationBuffMaxLimitRange"); }
	float& InsulationRangeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.InsulationRange"); }
	float& HyperThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.HyperThermiaInsulation"); }
	float& HypoThermiaInsulationField() { return *GetNativePointerField<float*>(this, "APrimalBuff.HypoThermiaInsulation"); }
	FVector& AoEBuffLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff.AoEBuffLocOffset"); }
	bool& bUseBPExcludeAoEActorField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPExcludeAoEActor"); }
	bool& bOverrideBuffDescriptionField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOverrideBuffDescription"); }
	bool& bOverrideBuffTypeField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOverrideBuffType"); }
	bool& bOnlyTickIfPlayerCharacterField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOnlyTickIfPlayerCharacter"); }
	bool& bOnlyTickWhenPossessedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOnlyTickWhenPossessed"); }
	bool& bDestroyWhenUnpossessedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDestroyWhenUnpossessed"); }
	long double& LastAoEApplyDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastAoEApplyDamageTime"); }
	float& OnlyForInstigatorSoundFadeInTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.OnlyForInstigatorSoundFadeInTime"); }
	bool& bUseBuffTickServerField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBuffTickServer"); }
	bool& bUseBuffTickClientField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBuffTickClient"); }
	float& BuffTickServerMaxTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickServerMaxTime"); }
	float& BuffTickServerMinTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickServerMinTime"); }
	float& BuffTickClientMaxTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickClientMaxTime"); }
	float& BuffTickClientMinTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickClientMinTime"); }
	bool& bUseRemoteClientTickField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseRemoteClientTick"); }
	float& BuffTickRemoteClientMaxTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickRemoteClientMaxTime"); }
	float& BuffTickRemoteClientMinTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickRemoteClientMinTime"); }
	bool& bContinueTickingServerAfterDeactivateField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bContinueTickingServerAfterDeactivate"); }
	bool& bContinueTickingClientAfterDeactivateField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bContinueTickingClientAfterDeactivate"); }
	long double& LastBuffTickTimeServerField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastBuffTickTimeServer"); }
	long double& LastBuffTickTimeClientField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.LastBuffTickTimeClient"); }
	long double& NextBuffTickTimeServerField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.NextBuffTickTimeServer"); }
	long double& NextBuffTickTimeClientField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.NextBuffTickTimeClient"); }
	bool& bWasStasisedField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bWasStasised"); }
	int& AddBuffMaxNumStacksField() { return *GetNativePointerField<int*>(this, "APrimalBuff.AddBuffMaxNumStacks"); }
	bool& bDeactivatedSoundOnlyLocalField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDeactivatedSoundOnlyLocal"); }
	bool& bDisableBloomField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDisableBloom"); }
	bool& bBPModifyCharacterFOVField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bBPModifyCharacterFOV"); }
	bool& bDisableLightShaftsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDisableLightShafts"); }
	float& PostProcessInterpSpeedDownField() { return *GetNativePointerField<float*>(this, "APrimalBuff.PostProcessInterpSpeedDown"); }
	float& PostProcessInterpSpeedUpField() { return *GetNativePointerField<float*>(this, "APrimalBuff.PostProcessInterpSpeedUp"); }
	float& TPVCameraSpeedInterpolationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.TPVCameraSpeedInterpolationMultiplier"); }
	bool& bIsCarryBuffField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bIsCarryBuff"); }
	TArray<FPostProcessMaterialAdjuster>& PostprocessMaterialAdjustersField() { return *GetNativePointerField<TArray<FPostProcessMaterialAdjuster>*>(this, "APrimalBuff.PostprocessMaterialAdjusters"); }
	long double& TimeForNextAOECheckField() { return *GetNativePointerField<long double*>(this, "APrimalBuff.TimeForNextAOECheck"); }
	float& AOEBuffIntervalMinField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffIntervalMin"); }
	float& AOEBuffIntervalMaxField() { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffIntervalMax"); }
	float& MaximumVelocityZForSlowingFallField() { return *GetNativePointerField<float*>(this, "APrimalBuff.MaximumVelocityZForSlowingFall"); }
	int& FNameIntField() { return *GetNativePointerField<int*>(this, "APrimalBuff.FNameInt"); }
	bool& bAddTPVCameraOffsetField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bAddTPVCameraOffset"); }
	bool& bOverrideTPVCameraOffsetField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOverrideTPVCameraOffset"); }
	FVector& TPVCameraOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff.TPVCameraOffset"); }
	bool& bOverrideTPVCameraOffsetMultiplierField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOverrideTPVCameraOffsetMultiplier"); }
	FVector& TPVCameraOffsetMultiplierField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff.TPVCameraOffsetMultiplier"); }
	bool& bUseCenteredTPVCameraField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseCenteredTPVCamera"); }
	bool& bUseBlueprintAnimNotificationsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBlueprintAnimNotifications"); }
	float& CharacterMultiplier_DefaultExtraDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_DefaultExtraDamageMultiplier"); }
	float& StaminaDrainMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff.StaminaDrainMultiplier"); }
	bool& bUseBPGetPlayerFootStepSoundField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPGetPlayerFootStepSound"); }
	TArray<FName>& DisabledWeaponTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalBuff.DisabledWeaponTags"); }
	bool& bUseBPGetCrosshairColorField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPGetCrosshairColor"); }
	bool& bUseBPModifyArmorValueField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPModifyArmorValue"); }
	bool& bShowMammalIncubationOptionsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bShowMammalIncubationOptions"); }
	bool& bAlreadyRequestedRelatedMissionDataField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bAlreadyRequestedRelatedMissionData"); }
	bool& bRelatedMissionWasInvalidField() { return *GetNativePointerField<bool*>(this, "APrimalBuff.bRelatedMissionWasInvalid"); }

	// Functions

	float BuffAdjustDamage_Implementation(float TemperatureIn, ABiomeZoneVolume * biomeZoneVolume, const FVector * AtLocation, APrimalCharacter * forPrimalCharacter) { return NativeCall<float, float, ABiomeZoneVolume *, const FVector *, APrimalCharacter *>(this, "APrimalBuff.BuffAdjustDamage_Implementation", TemperatureIn, biomeZoneVolume, AtLocation, forPrimalCharacter); }
	bool AOEBuffCanAffect(APrimalCharacter * forChar) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalBuff.AOEBuffCanAffect", forChar); }
	void AddBuffLifetime(const float AdditionalLifetime) { NativeCall<void, const float>(this, "APrimalBuff.AddBuffLifetime", AdditionalLifetime); }
	void AddDamageStatusValueModifier(APrimalCharacter * addToCharacter, EPrimalCharacterStatusValue::Type ValueType, bool bSpeedToAddInSeconds, bool bContinueOnUnchangedValue, bool bResetExistingModifierDescriptionIndex, bool bSetValue, bool bSetAdditionalValue, float LimitExistingModifierDescriptionToMaxAmount, float damageMultiplierAmountToAdd, float speedToAdd, int StatusValueModifierDescriptionIndex, bool bUsePercentualDamage, bool bMakeUntameable, float percentualDamage, TSubclassOf<UDamageType> ScaleValueByCharacterDamageType) { NativeCall<void, APrimalCharacter *, EPrimalCharacterStatusValue::Type, bool, bool, bool, bool, bool, float, float, float, int, bool, bool, float, TSubclassOf<UDamageType>>(this, "APrimalBuff.AddDamageStatusValueModifier", addToCharacter, ValueType, bSpeedToAddInSeconds, bContinueOnUnchangedValue, bResetExistingModifierDescriptionIndex, bSetValue, bSetAdditionalValue, LimitExistingModifierDescriptionToMaxAmount, damageMultiplierAmountToAdd, speedToAdd, StatusValueModifierDescriptionIndex, bUsePercentualDamage, bMakeUntameable, percentualDamage, ScaleValueByCharacterDamageType); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "APrimalBuff.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, float, const UAnimNotifyState *>(this, "APrimalBuff.AnimNotifyCustomState_Begin", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotifyState *>(this, "APrimalBuff.AnimNotifyCustomState_End", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void BPDeactivate() { NativeCall<void>(this, "APrimalBuff.BPDeactivate"); }
	FColor * BPGetDinoNameColorOverride_Implementation(FColor * result, AShooterHUD * HUD, FColor ColorToOverride) { return NativeCall<FColor *, FColor *, AShooterHUD *, FColor>(this, "APrimalBuff.BPGetDinoNameColorOverride_Implementation", result, HUD, ColorToOverride); }
	void BeginPlay() { NativeCall<void>(this, "APrimalBuff.BeginPlay"); }
	bool BuffOverrideInventoryAccessInput_Implementation(AController * InController, bool bInputPressed) { return NativeCall<bool, AController *, bool>(this, "APrimalBuff.BuffOverrideInventoryAccessInput_Implementation", InController, bInputPressed); }
	void ClientReceiveRelatedMissionData_Implementation(AMissionType * InMission, bool InHasRelatedMission) { NativeCall<void, AMissionType *, bool>(this, "APrimalBuff.ClientReceiveRelatedMissionData_Implementation", InMission, InHasRelatedMission); }
	void Deactivate() { NativeCall<void>(this, "APrimalBuff.Deactivate"); }
	void Destroyed() { NativeCall<void>(this, "APrimalBuff.Destroyed"); }
	void DinoRefreshColorization(const TArray<FLinearColor> * DinoColors) { NativeCall<void, const TArray<FLinearColor> *>(this, "APrimalBuff.DinoRefreshColorization", DinoColors); }
	void DrawBuffFloatingHUD_Implementation(int BuffIndex, AShooterHUD * HUD, float CenterX, float CenterY, float DrawScale) { NativeCall<void, int, AShooterHUD *, float, float, float>(this, "APrimalBuff.DrawBuffFloatingHUD_Implementation", BuffIndex, HUD, CenterX, CenterY, DrawScale); }
	bool ExcludeAoEActor(AActor * ActorToConsider) { return NativeCall<bool, AActor *>(this, "APrimalBuff.ExcludeAoEActor", ActorToConsider); }
	bool ExcludePostProcessBlendableMaterial(const UMaterialInterface * BlendableMaterialInterface) { return NativeCall<bool, const UMaterialInterface *>(this, "APrimalBuff.ExcludePostProcessBlendableMaterial", BlendableMaterialInterface); }
	bool ExtendBuffTime(float AmountOfAdditionalTime) { return NativeCall<bool, float>(this, "APrimalBuff.ExtendBuffTime", AmountOfAdditionalTime); }
	float GetBuffTickClientDeltaTime() { return NativeCall<float>(this, "APrimalBuff.GetBuffTickClientDeltaTime"); }
	float GetBuffTickServerDeltaTime() { return NativeCall<float>(this, "APrimalBuff.GetBuffTickServerDeltaTime"); }
	int GetBuffType_Implementation() { return NativeCall<int>(this, "APrimalBuff.GetBuffType_Implementation"); }
	long double GetDeactivationTime() { return NativeCall<long double>(this, "APrimalBuff.GetDeactivationTime"); }
	FString * GetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalBuff.GetDebugInfoString", result); }
	FRotator * GetForcedBuffAimOverride_Implementation(FRotator * result, bool bIsWeaponAim) { return NativeCall<FRotator *, FRotator *, bool>(this, "APrimalBuff.GetForcedBuffAimOverride_Implementation", result, bIsWeaponAim); }
	float GetGravityZScale(float CurrentScale) { return NativeCall<float, float>(this, "APrimalBuff.GetGravityZScale", CurrentScale); }
	void GetHUDElements(APlayerController * ForPC, TArray<FHUDElement> * OutHUDElements) { NativeCall<void, APlayerController *, TArray<FHUDElement> *>(this, "APrimalBuff.GetHUDElements", ForPC, OutHUDElements); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalBuff.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetRemainingTime() { return NativeCall<float>(this, "APrimalBuff.GetRemainingTime"); }
	FString * GetUniqueName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalBuff.GetUniqueName", result); }
	float GetValueToAddPerSecond(TEnumAsByte<enum EPrimalCharacterStatusValue::Type> StatusValueType) { return NativeCall<float, TEnumAsByte<enum EPrimalCharacterStatusValue::Type>>(this, "APrimalBuff.GetValueToAddPerSecond", StatusValueType); }
	bool HideBuffFromHUD_Implementation() { return NativeCall<bool>(this, "APrimalBuff.HideBuffFromHUD_Implementation"); }
	void InstigatorJumped() { NativeCall<void>(this, "APrimalBuff.InstigatorJumped"); }
	bool IsNetRelevantFor(APlayerController * RealViewer, AActor * Viewer, const FVector * SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, const FVector *>(this, "APrimalBuff.IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	bool IsOwningClient() { return NativeCall<bool>(this, "APrimalBuff.IsOwningClient"); }
	bool IsValidUnStasisCaster() { return NativeCall<bool>(this, "APrimalBuff.IsValidUnStasisCaster"); }
	void Multi_SyncBuffLifetime_Implementation(const float NewDeactivateAfterTime) { NativeCall<void, const float>(this, "APrimalBuff.Multi_SyncBuffLifetime_Implementation", NewDeactivateAfterTime); }
	void NetDeactivate_Implementation() { NativeCall<void>(this, "APrimalBuff.NetDeactivate_Implementation"); }
	void NetResetBuffStart_Implementation() { NativeCall<void>(this, "APrimalBuff.NetResetBuffStart_Implementation"); }
	void NetSyncBuffLifetime() { NativeCall<void>(this, "APrimalBuff.NetSyncBuffLifetime"); }
	void NotifyDamage_Implementation(float DamageAmount, TSubclassOf<UDamageType> DamageClass, AController * EventInstigator, AActor * TheDamageCauser) { NativeCall<void, float, TSubclassOf<UDamageType>, AController *, AActor *>(this, "APrimalBuff.NotifyDamage_Implementation", DamageAmount, DamageClass, EventInstigator, TheDamageCauser); }
	void OnBuffLifetimeUpdated() { NativeCall<void>(this, "APrimalBuff.OnBuffLifetimeUpdated"); }
	void OnCapsuleHitCallback(AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult * Hit) { NativeCall<void, AActor *, UPrimitiveComponent *, FVector, const FHitResult *>(this, "APrimalBuff.OnCapsuleHitCallback", OtherActor, OtherComp, NormalImpulse, Hit); }
	void OnInputEvent(APrimalCharacter * ForPrimalCharacter, EPrimalCharacterInputType::Type inputType) { NativeCall<void, APrimalCharacter *, EPrimalCharacterInputType::Type>(this, "APrimalBuff.OnInputEvent", ForPrimalCharacter, inputType); }
	void OnOwnerTeleported() { NativeCall<void>(this, "APrimalBuff.OnOwnerTeleported"); }
	void OverrideCharacterFlyingVelocity(FVector * InitialVelocity, const FVector * Gravity, float DeltaTime) { NativeCall<void, FVector *, const FVector *, float>(this, "APrimalBuff.OverrideCharacterFlyingVelocity", InitialVelocity, Gravity, DeltaTime); }
	void OverrideCharacterNewFallVelocity(FVector * InitialVelocity, const FVector * Gravity, float DeltaTime) { NativeCall<void, FVector *, const FVector *, float>(this, "APrimalBuff.OverrideCharacterNewFallVelocity", InitialVelocity, Gravity, DeltaTime); }
	void OverrideCharacterSwimmingVelocity(FVector * InitialVelocity, const FVector * Gravity, const float * FluidFriction, const float * NetBuoyancy, float DeltaTime) { NativeCall<void, FVector *, const FVector *, const float *, const float *, float>(this, "APrimalBuff.OverrideCharacterSwimmingVelocity", InitialVelocity, Gravity, FluidFriction, NetBuoyancy, DeltaTime); }
	void OverrideCharacterWalkingVelocity(FVector * InitialVelocity, const float * Friction, float DeltaTime) { NativeCall<void, FVector *, const float *, float>(this, "APrimalBuff.OverrideCharacterWalkingVelocity", InitialVelocity, Friction, DeltaTime); }
	void PostProcessModifyBlendableMaterial(const UMaterialInterface * BlendableMaterialInterface, UMaterialInstanceDynamic * MID) { NativeCall<void, const UMaterialInterface *, UMaterialInstanceDynamic *>(this, "APrimalBuff.PostProcessModifyBlendableMaterial", BlendableMaterialInterface, MID); }
	bool PreventActorTargeting_Implementation(AActor * ByActor) { return NativeCall<bool, AActor *>(this, "APrimalBuff.PreventActorTargeting_Implementation", ByActor); }
	bool PreventCharacterLanding(const FVector ImpactPoint, const FVector ImpactAccel, FVector * Velocity) { return NativeCall<bool, const FVector, const FVector, FVector *>(this, "APrimalBuff.PreventCharacterLanding", ImpactPoint, ImpactAccel, Velocity); }
	bool PreventFlight() { return NativeCall<bool>(this, "APrimalBuff.PreventFlight"); }
	bool PreventInstigatorAttack(int AttackIndex) { return NativeCall<bool, int>(this, "APrimalBuff.PreventInstigatorAttack", AttackIndex); }
	bool PreventInstigatorMovementMode(EMovementMode NewMovementMode, char NewCustomMode) { return NativeCall<bool, EMovementMode, char>(this, "APrimalBuff.PreventInstigatorMovementMode", NewMovementMode, NewCustomMode); }
	bool PreventRunning() { return NativeCall<bool>(this, "APrimalBuff.PreventRunning"); }
	void ProcessStaticPathing(bool triggerRunning) { NativeCall<void, bool>(this, "APrimalBuff.ProcessStaticPathing", triggerRunning); }
	bool ReduceBuffTime(float AmountOfTimeToReduce) { return NativeCall<bool, float>(this, "APrimalBuff.ReduceBuffTime", AmountOfTimeToReduce); }
	bool ResetBuffStart() { return NativeCall<bool>(this, "APrimalBuff.ResetBuffStart"); }
	void ResetClientBuffTick(float MinTime, float MaxTime) { NativeCall<void, float, float>(this, "APrimalBuff.ResetClientBuffTick", MinTime, MaxTime); }
	void ResetServerBuffTick(float MinTime, float MaxTime) { NativeCall<void, float, float>(this, "APrimalBuff.ResetServerBuffTick", MinTime, MaxTime); }
	void ServerRequestRelatedMissionData_Implementation() { NativeCall<void>(this, "APrimalBuff.ServerRequestRelatedMissionData_Implementation"); }
	void SetValueToAddPerSecond(TEnumAsByte<enum EPrimalCharacterStatusValue::Type> StatusValueType, float Value) { NativeCall<void, TEnumAsByte<enum EPrimalCharacterStatusValue::Type>, float>(this, "APrimalBuff.SetValueToAddPerSecond", StatusValueType, Value); }
	void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff.SetupForInstigator"); }
	bool ShouldForceOwnerDedicatedMovementTickPerFrame() { return NativeCall<bool>(this, "APrimalBuff.ShouldForceOwnerDedicatedMovementTickPerFrame"); }
	void Stasis() { NativeCall<void>(this, "APrimalBuff.Stasis"); }
	bool TemplateAllowActorSpawn(UWorld * World, const FVector * AtLocation, const FRotator * AtRotation, const FActorSpawnParameters * SpawnParameters) { return NativeCall<bool, UWorld *, const FVector *, const FRotator *, const FActorSpawnParameters *>(this, "APrimalBuff.TemplateAllowActorSpawn", World, AtLocation, AtRotation, SpawnParameters); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff.Tick", DeltaSeconds); }
	void Unstasis() { NativeCall<void>(this, "APrimalBuff.Unstasis"); }
	void UpdateBuffLifetime(const float NewLifetime, const bool bRestartBuffLifetime) { NativeCall<void, const float, const bool>(this, "APrimalBuff.UpdateBuffLifetime", NewLifetime, bRestartBuffLifetime); }
	FVector * UpdateStaticPathingDestination(FVector * result, FVector locOverride, float randomOffsetMultiplier, bool useRandomNegativeXDir, bool orientRandOffsetByRotation, FRotator randOffsetByRotation, float GroundCheckSpreadOverride) { return NativeCall<FVector *, FVector *, FVector, float, bool, bool, FRotator, float>(this, "APrimalBuff.UpdateStaticPathingDestination", result, locOverride, randomOffsetMultiplier, useRandomNegativeXDir, orientRandOffsetByRotation, randOffsetByRotation, GroundCheckSpreadOverride); }
	float GetHUDProgressBarPercent_Implementation() { return NativeCall<float>(this, "APrimalBuff.GetHUDProgressBarPercent_Implementation"); }
	bool AllowPostProcessEffect() { return NativeCall<bool>(this, "APrimalBuff.AllowPostProcessEffect"); }
	void BPActivated(AActor * ForInstigator) { NativeCall<void, AActor *>(this, "APrimalBuff.BPActivated", ForInstigator); }
	float BPAdjustDamage_Ex(float Damage, const FHitResult * HitInfo, const FVector * ImpulseDir, AController * EventInstigator, AActor * InDamageCauser, TSubclassOf<UDamageType> TheDamgeType) { return NativeCall<float, float, const FHitResult *, const FVector *, AController *, AActor *, TSubclassOf<UDamageType>>(this, "APrimalBuff.BPAdjustDamage_Ex", Damage, HitInfo, ImpulseDir, EventInstigator, InDamageCauser, TheDamgeType); }
	float BPAdjustRadialDamage(float currentDamage, const FVector * Origin, const FRadialDamageEvent * DamageEvent) { return NativeCall<float, float, const FVector *, const FRadialDamageEvent *>(this, "APrimalBuff.BPAdjustRadialDamage", currentDamage, Origin, DamageEvent); }
	float BPAdjustStatusValueModification(UPrimalCharacterStatusComponent * ForComponent, EPrimalCharacterStatusValue::Type valueType, float InAmount, TSubclassOf<UDamageType> DamageTypeClass, bool bManualModification) { return NativeCall<float, UPrimalCharacterStatusComponent *, EPrimalCharacterStatusValue::Type, float, TSubclassOf<UDamageType>, bool>(this, "APrimalBuff.BPAdjustStatusValueModification", ForComponent, valueType, InAmount, DamageTypeClass, bManualModification); }
	void BPAnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "APrimalBuff.BPAnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	float BPBPGetCameraShakeScalar(TSubclassOf<UCameraShake> currentShake, const float currentScale) { return NativeCall<float, TSubclassOf<UCameraShake>, const float>(this, "APrimalBuff.BPBPGetCameraShakeScalar", currentShake, currentScale); }
	bool BPBuffPreventUploading() { return NativeCall<bool>(this, "APrimalBuff.BPBuffPreventUploading"); }
	bool BPCanBeCarried(APrimalCharacter * ByCarrier) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalBuff.BPCanBeCarried", ByCarrier); }
	bool BPCheckPreventInput(EPrimalCharacterInputType::Type inputType) { return NativeCall<bool, EPrimalCharacterInputType::Type>(this, "APrimalBuff.BPCheckPreventInput", inputType); }
	bool BPCustomAllowAddBuff(APrimalCharacter * ForCharacter, AActor * DamageCauser) { return NativeCall<bool, APrimalCharacter *, AActor *>(this, "APrimalBuff.BPCustomAllowAddBuff", ForCharacter, DamageCauser); }
	void BPDeactivated(AActor * ForInstigator) { NativeCall<void, AActor *>(this, "APrimalBuff.BPDeactivated", ForInstigator); }
	void BPDinoRefreshColorization(const TArray<FLinearColor> * DinoColors, TArray<FLinearColor> * OverrideColors) { NativeCall<void, const TArray<FLinearColor> *, TArray<FLinearColor> *>(this, "APrimalBuff.BPDinoRefreshColorization", DinoColors, OverrideColors); }
	void BPDrawBuffStatusHUD(AShooterHUD * HUD, float XPos, float YPos, float ScaleMult) { NativeCall<void, AShooterHUD *, float, float, float>(this, "APrimalBuff.BPDrawBuffStatusHUD", HUD, XPos, YPos, ScaleMult); }
	bool BPExcludeAoEActor(AActor * ActorToConsider) { return NativeCall<bool, AActor *>(this, "APrimalBuff.BPExcludeAoEActor", ActorToConsider); }
	int BPForceDinoNameTargetingTeamOverride(AShooterHUD * HUD, int TargetingTeamToCheck) { return NativeCall<int, AShooterHUD *, int>(this, "APrimalBuff.BPForceDinoNameTargetingTeamOverride", HUD, TargetingTeamToCheck); }
	float BPGetBabyImprintingSpeedMultiplier() { return NativeCall<float>(this, "APrimalBuff.BPGetBabyImprintingSpeedMultiplier"); }
	FColor * BPGetCrosshairColor(FColor * result) { return NativeCall<FColor *, FColor *>(this, "APrimalBuff.BPGetCrosshairColor", result); }
	FString * BPGetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalBuff.BPGetDebugInfoString", result); }
	FColor * BPGetDinoNameColorOverride(FColor * result, AShooterHUD * HUD, FColor ColorToOverride) { return NativeCall<FColor *, FColor *, AShooterHUD *, FColor>(this, "APrimalBuff.BPGetDinoNameColorOverride", result, HUD, ColorToOverride); }
	float BPGetGravityZScale(float CurrentScale) { return NativeCall<float, float>(this, "APrimalBuff.BPGetGravityZScale", CurrentScale); }
	void BPGetHUDElements(APlayerController * ForPC, TArray<FHUDElement> * OutElements) { NativeCall<void, APlayerController *, TArray<FHUDElement> *>(this, "APrimalBuff.BPGetHUDElements", ForPC, OutElements); }
	float BPGetMoveAnimRate() { return NativeCall<float>(this, "APrimalBuff.BPGetMoveAnimRate"); }
	USoundCue * BPGetPlayerFootStepSound() { return NativeCall<USoundCue *>(this, "APrimalBuff.BPGetPlayerFootStepSound"); }
	void BPHandleOnStartAltFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStartAltFire", bFromGamepad); }
	void BPHandleOnStartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStartFire", bFromGamepad); }
	void BPHandleOnStopAltFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStopAltFire", bFromGamepad); }
	void BPHandleOnStopFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStopFire", bFromGamepad); }
	void BPInitializedCharacterAnimScriptInstance() { NativeCall<void>(this, "APrimalBuff.BPInitializedCharacterAnimScriptInstance"); }
	void BPInstigatorDied() { NativeCall<void>(this, "APrimalBuff.BPInstigatorDied"); }
	void BPInstigatorLocalPossessed(AShooterPlayerController * ByController) { NativeCall<void, AShooterPlayerController *>(this, "APrimalBuff.BPInstigatorLocalPossessed", ByController); }
	void BPInstigatorPossessed(AController * ByController) { NativeCall<void, AController *>(this, "APrimalBuff.BPInstigatorPossessed", ByController); }
	void BPInstigatorReceivedKillingDamage() { NativeCall<void>(this, "APrimalBuff.BPInstigatorReceivedKillingDamage"); }
	void BPInstigatorSleeped(bool bIsSleeped) { NativeCall<void, bool>(this, "APrimalBuff.BPInstigatorSleeped", bIsSleeped); }
	void BPInstigatorUnpossessed() { NativeCall<void>(this, "APrimalBuff.BPInstigatorUnpossessed"); }
	bool BPInterceptUseAction() { return NativeCall<bool>(this, "APrimalBuff.BPInterceptUseAction"); }
	bool BPInterceptWeaponToggle() { return NativeCall<bool>(this, "APrimalBuff.BPInterceptWeaponToggle"); }
	bool BPIsCharacterHardAttached() { return NativeCall<bool>(this, "APrimalBuff.BPIsCharacterHardAttached"); }
	float BPModifyArmorValue(UPrimalItem * ForItem, float BaseArmorValue) { return NativeCall<float, UPrimalItem *, float>(this, "APrimalBuff.BPModifyArmorValue", ForItem, BaseArmorValue); }
	TArray<FBoneModifier> * BPModifyPlayerBoneModifiers(TArray<FBoneModifier> * result, const TArray<FBoneModifier> * InBoneModifiers) { return NativeCall<TArray<FBoneModifier> *, TArray<FBoneModifier> *, const TArray<FBoneModifier> *>(this, "APrimalBuff.BPModifyPlayerBoneModifiers", result, InBoneModifiers); }
	void BPNotifyExperienceGained(float ActualExpGained, float ExpectedExpGain, EXPType::Type ExpTypeGained) { NativeCall<void, float, float, EXPType::Type>(this, "APrimalBuff.BPNotifyExperienceGained", ActualExpGained, ExpectedExpGain, ExpTypeGained); }
	void BPNotifyOtherBuffActivated(APrimalBuff * OtherBuff) { NativeCall<void, APrimalBuff *>(this, "APrimalBuff.BPNotifyOtherBuffActivated", OtherBuff); }
	void BPNotifyOtherBuffDeactivated(APrimalBuff * OtherBuff) { NativeCall<void, APrimalBuff *>(this, "APrimalBuff.BPNotifyOtherBuffDeactivated", OtherBuff); }
	void BPNotifyPreventDismounting(APrimalDinoCharacter * FromDino) { NativeCall<void, APrimalDinoCharacter *>(this, "APrimalBuff.BPNotifyPreventDismounting", FromDino); }
	void BPOnInputEvent(EPrimalCharacterInputType::Type inputType) { NativeCall<void, EPrimalCharacterInputType::Type>(this, "APrimalBuff.BPOnInputEvent", inputType); }
	void BPOnInstigatorCapsuleComponentHit(AActor * OtherActor, UPrimitiveComponent * OtherComp, const FVector * NormalImpulse, const FHitResult * Hit) { NativeCall<void, AActor *, UPrimitiveComponent *, const FVector *, const FHitResult *>(this, "APrimalBuff.BPOnInstigatorCapsuleComponentHit", OtherActor, OtherComp, NormalImpulse, Hit); }
	void BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, char PreviousCustomMode, EMovementMode NewMovementMode, char NewCustomMode) { NativeCall<void, EMovementMode, char, EMovementMode, char>(this, "APrimalBuff.BPOnInstigatorMovementModeChangedNotify", PrevMovementMode, PreviousCustomMode, NewMovementMode, NewCustomMode); }
	void BPOnOwnerMassTeleportEvent(const EMassTeleportState::Type EventState, const APrimalCharacter * TeleportInitiatedByChar) { NativeCall<void, const EMassTeleportState::Type, const APrimalCharacter *>(this, "APrimalBuff.BPOnOwnerMassTeleportEvent", EventState, TeleportInitiatedByChar); }
	void BPOnPreventedFiringDisabledWeapon(AShooterWeapon * Weapon, FName PreventingTag) { NativeCall<void, AShooterWeapon *, FName>(this, "APrimalBuff.BPOnPreventedFiringDisabledWeapon", Weapon, PreventingTag); }
	void BPOverrideCameraViewTarget(FName CurrentCameraMode, FVector DesiredCameraLocation, FRotator DesiredCameraRotation, float DesiredFOV, bool * bOverrideCameraLocation, FVector * CameraLocation, bool * bOverrideCameraRotation, FRotator * CameraRotation, bool * bOverrideCameraFOV, float * CameraFOV) { NativeCall<void, FName, FVector, FRotator, float, bool *, FVector *, bool *, FRotator *, bool *, float *>(this, "APrimalBuff.BPOverrideCameraViewTarget", CurrentCameraMode, DesiredCameraLocation, DesiredCameraRotation, DesiredFOV, bOverrideCameraLocation, CameraLocation, bOverrideCameraRotation, CameraRotation, bOverrideCameraFOV, CameraFOV); }
	bool BPOverrideIsNetRelevantFor(APlayerController * RealViewer, AActor * Viewer, const FVector * SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, const FVector *>(this, "APrimalBuff.BPOverrideIsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	float BPOverrideTargetingDesire(AActor * ForTarget, float ForTargetingDesireValue) { return NativeCall<float, AActor *, float>(this, "APrimalBuff.BPOverrideTargetingDesire", ForTarget, ForTargetingDesireValue); }
	FVector * BPOverrideWeaponBob(FVector * result, const FVector * InWeaponBob) { return NativeCall<FVector *, FVector *, const FVector *>(this, "APrimalBuff.BPOverrideWeaponBob", result, InWeaponBob); }
	void BPPreSerializeForInstigator(bool bBeginningSerialize) { NativeCall<void, bool>(this, "APrimalBuff.BPPreSerializeForInstigator", bBeginningSerialize); }
	void BPPreSetupForInstigator(AActor * ForInstigator) { NativeCall<void, AActor *>(this, "APrimalBuff.BPPreSetupForInstigator", ForInstigator); }
	bool BPPreventAddingOtherBuff(TSubclassOf<APrimalBuff> anotherBuffClass) { return NativeCall<bool, TSubclassOf<APrimalBuff>>(this, "APrimalBuff.BPPreventAddingOtherBuff", anotherBuffClass); }
	bool BPPreventCharacterLanding(const FVector ImpactPoint, const FVector ImpactAccel, const FVector ImpactVelocity, FVector * NewVelocity) { return NativeCall<bool, const FVector, const FVector, const FVector, FVector *>(this, "APrimalBuff.BPPreventCharacterLanding", ImpactPoint, ImpactAccel, ImpactVelocity, NewVelocity); }
	bool BPPreventCharacterStatusValueModifiers(APrimalCharacter * ForInstigator) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalBuff.BPPreventCharacterStatusValueModifiers", ForInstigator); }
	bool BPPreventFirstPerson() { return NativeCall<bool>(this, "APrimalBuff.BPPreventFirstPerson"); }
	bool BPPreventInstigatorAttack(int AttackIndex) { return NativeCall<bool, int>(this, "APrimalBuff.BPPreventInstigatorAttack", AttackIndex); }
	bool BPPreventInstigatorMovementMode(EMovementMode NewMovementMode, char NewCustomMode) { return NativeCall<bool, EMovementMode, char>(this, "APrimalBuff.BPPreventInstigatorMovementMode", NewMovementMode, NewCustomMode); }
	bool BPPreventNotifySound(USoundBase * SoundIn) { return NativeCall<bool, USoundBase *>(this, "APrimalBuff.BPPreventNotifySound", SoundIn); }
	bool BPPreventOnStartJump() { return NativeCall<bool>(this, "APrimalBuff.BPPreventOnStartJump"); }
	bool BPPreventRidingInstigator(APrimalCharacter * ForPawn) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalBuff.BPPreventRidingInstigator", ForPawn); }
	bool BPPreventRunning() { return NativeCall<bool>(this, "APrimalBuff.BPPreventRunning"); }
	bool BPPreventThrowingItem(UPrimalItem * ForItem) { return NativeCall<bool, UPrimalItem *>(this, "APrimalBuff.BPPreventThrowingItem", ForItem); }
	bool BPPreventflight() { return NativeCall<bool>(this, "APrimalBuff.BPPreventflight"); }
	void BPReactivateWithDamageCauser(AActor * ForInstigator, AActor * ForDamageCauser) { NativeCall<void, AActor *, AActor *>(this, "APrimalBuff.BPReactivateWithDamageCauser", ForInstigator, ForDamageCauser); }
	void BPResetBuffStart() { NativeCall<void>(this, "APrimalBuff.BPResetBuffStart"); }
	void BPSetupForInstigator(AActor * ForInstigator) { NativeCall<void, AActor *>(this, "APrimalBuff.BPSetupForInstigator", ForInstigator); }
	bool BPShouldForceOwnerDedicatedMovementTickPerFrame() { return NativeCall<bool>(this, "APrimalBuff.BPShouldForceOwnerDedicatedMovementTickPerFrame"); }
	void BPStasis() { NativeCall<void>(this, "APrimalBuff.BPStasis"); }
	float BP_ModifyCharacterFOV(float inFOV) { return NativeCall<float, float>(this, "APrimalBuff.BP_ModifyCharacterFOV", inFOV); }
	void BP_OnBuffLifetimeUpdated() { NativeCall<void>(this, "APrimalBuff.BP_OnBuffLifetimeUpdated"); }
	void BP_OnOwnerDealtDamage(AActor * DamagedActor, float DamageAmount, const FDamageEvent * DamageEvent) { NativeCall<void, AActor *, float, const FDamageEvent *>(this, "APrimalBuff.BP_OnOwnerDealtDamage", DamagedActor, DamageAmount, DamageEvent); }
	void BP_OnOwnerTeleported() { NativeCall<void>(this, "APrimalBuff.BP_OnOwnerTeleported"); }
	FVector * BP_OverrideCharacterFlyingVelocity(FVector * result, const FVector * InitialVelocity, const FVector * Gravity, float DeltaTime) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float>(this, "APrimalBuff.BP_OverrideCharacterFlyingVelocity", result, InitialVelocity, Gravity, DeltaTime); }
	FVector * BP_OverrideCharacterSwimmingVelocity(FVector * result, const FVector * InitialVelocity, const FVector * Gravity, const float * FluidFriction, const float * NetBuoyancy, float DeltaTime) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, const float *, const float *, float>(this, "APrimalBuff.BP_OverrideCharacterSwimmingVelocity", result, InitialVelocity, Gravity, FluidFriction, NetBuoyancy, DeltaTime); }
	FVector * BP_OverrideCharacterWalkingVelocity(FVector * result, const FVector * InitialVelocity, const float * Friction, float DeltaTime) { return NativeCall<FVector *, FVector *, const FVector *, const float *, float>(this, "APrimalBuff.BP_OverrideCharacterWalkingVelocity", result, InitialVelocity, Friction, DeltaTime); }
	float BP_OverrideMoveForwardInput(float CurrentInput) { return NativeCall<float, float>(this, "APrimalBuff.BP_OverrideMoveForwardInput", CurrentInput); }
	float BP_OverrideMoveRightInput(float CurrentInput) { return NativeCall<float, float>(this, "APrimalBuff.BP_OverrideMoveRightInput", CurrentInput); }
	float BP_OverrideTerminalVelocity() { return NativeCall<float>(this, "APrimalBuff.BP_OverrideTerminalVelocity"); }
	float BuffAdjustDamage(float Damage, const FHitResult * HitInfo, AController * EventInstigator, AActor * DamageCauser, TSubclassOf<UDamageType> TheDamgeType) { return NativeCall<float, float, const FHitResult *, AController *, AActor *, TSubclassOf<UDamageType>>(this, "APrimalBuff.BuffAdjustDamage", Damage, HitInfo, EventInstigator, DamageCauser, TheDamgeType); }
	bool BuffOverrideFinalWanderLocation(FVector * outVec) { return NativeCall<bool, FVector *>(this, "APrimalBuff.BuffOverrideFinalWanderLocation", outVec); }
	bool BuffOverrideInventoryAccessInput(AController * InController, bool bInputPressed) { return NativeCall<bool, AController *, bool>(this, "APrimalBuff.BuffOverrideInventoryAccessInput", InController, bInputPressed); }
	void BuffPostAdjustDamage(float Damage, const FHitResult * HitInfo, AController * EventInstigator, AActor * DamageCauser, TSubclassOf<UDamageType> TheDamgeType) { NativeCall<void, float, const FHitResult *, AController *, AActor *, TSubclassOf<UDamageType>>(this, "APrimalBuff.BuffPostAdjustDamage", Damage, HitInfo, EventInstigator, DamageCauser, TheDamgeType); }
	void BuffTickClient(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff.BuffTickClient", DeltaTime); }
	void BuffTickServer(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff.BuffTickServer", DeltaTime); }
	void ClientReceiveRelatedMissionData(AMissionType * InMission, bool InHasRelatedMission) { NativeCall<void, AMissionType *, bool>(this, "APrimalBuff.ClientReceiveRelatedMissionData", InMission, InHasRelatedMission); }
	void DinoInstigatorClearedRider() { NativeCall<void>(this, "APrimalBuff.DinoInstigatorClearedRider"); }
	void DinoInstigatorReceivedRider(AShooterCharacter * Rider) { NativeCall<void, AShooterCharacter *>(this, "APrimalBuff.DinoInstigatorReceivedRider", Rider); }
	void DrawBuffFloatingHUD(int BuffIndex, AShooterHUD * HUD, float CenterX, float CenterY, float DrawScale) { NativeCall<void, int, AShooterHUD *, float, float, float>(this, "APrimalBuff.DrawBuffFloatingHUD", BuffIndex, HUD, CenterX, CenterY, DrawScale); }
	FStatusValueModifierDescription * GetBuffDescription(FStatusValueModifierDescription * result) { return NativeCall<FStatusValueModifierDescription *, FStatusValueModifierDescription *>(this, "APrimalBuff.GetBuffDescription", result); }
	float GetBuffPostprocessIntensity() { return NativeCall<float>(this, "APrimalBuff.GetBuffPostprocessIntensity"); }
	int GetBuffType() { return NativeCall<int>(this, "APrimalBuff.GetBuffType"); }
	TArray<APrimalDinoCharacter *> * GetEnabledGestationMonitoringTargets(TArray<APrimalDinoCharacter *> * result) { return NativeCall<TArray<APrimalDinoCharacter *> *, TArray<APrimalDinoCharacter *> *>(this, "APrimalBuff.GetEnabledGestationMonitoringTargets", result); }
	FRotator * GetForcedBuffAimOverride(FRotator * result, bool bIsWeaponAim) { return NativeCall<FRotator *, FRotator *, bool>(this, "APrimalBuff.GetForcedBuffAimOverride", result, bIsWeaponAim); }
	float GetHUDProgressBarPercent() { return NativeCall<float>(this, "APrimalBuff.GetHUDProgressBarPercent"); }
	float GetOverrideWaterJumpVelocity(float OutOfWaterZ) { return NativeCall<float, float>(this, "APrimalBuff.GetOverrideWaterJumpVelocity", OutOfWaterZ); }
	bool HideBuffFromHUD() { return NativeCall<bool>(this, "APrimalBuff.HideBuffFromHUD"); }
	void InstigatorDie() { NativeCall<void>(this, "APrimalBuff.InstigatorDie"); }
	bool InterceptInstigatorPlayerEmoteAnim(UAnimMontage * EmoteAnim) { return NativeCall<bool, UAnimMontage *>(this, "APrimalBuff.InterceptInstigatorPlayerEmoteAnim", EmoteAnim); }
	void Multi_SyncBuffLifetime(const float NewDeactivateAfterTime) { NativeCall<void, const float>(this, "APrimalBuff.Multi_SyncBuffLifetime", NewDeactivateAfterTime); }
	void NetDeactivate() { NativeCall<void>(this, "APrimalBuff.NetDeactivate"); }
	void NetResetBuffStart() { NativeCall<void>(this, "APrimalBuff.NetResetBuffStart"); }
	void NotifyBumpedByPawn(APrimalCharacter * BumpedBy) { NativeCall<void, APrimalCharacter *>(this, "APrimalBuff.NotifyBumpedByPawn", BumpedBy); }
	void NotifyBumpedPawn(APrimalCharacter * BumpedPawn) { NativeCall<void, APrimalCharacter *>(this, "APrimalBuff.NotifyBumpedPawn", BumpedPawn); }
	void NotifyDamage(float DamageAmount, TSubclassOf<UDamageType> DamageClass, AController * EventInstigator, AActor * TheDamageCauser) { NativeCall<void, float, TSubclassOf<UDamageType>, AController *, AActor *>(this, "APrimalBuff.NotifyDamage", DamageAmount, DamageClass, EventInstigator, TheDamageCauser); }
	bool PreventActorTargeting(AActor * ByActor) { return NativeCall<bool, AActor *>(this, "APrimalBuff.PreventActorTargeting", ByActor); }
	bool PreventBlockingWithShield() { return NativeCall<bool>(this, "APrimalBuff.PreventBlockingWithShield"); }
	bool PreventJump() { return NativeCall<bool>(this, "APrimalBuff.PreventJump"); }
	void ServerRequestRelatedMissionData() { NativeCall<void>(this, "APrimalBuff.ServerRequestRelatedMissionData"); }
	void SetBuffCauser(AActor * CausedBy) { NativeCall<void, AActor *>(this, "APrimalBuff.SetBuffCauser", CausedBy); }
	void SetGestationMonitoringTarget(APrimalDinoCharacter * ForTarget, bool bEnable) { NativeCall<void, APrimalDinoCharacter *, bool>(this, "APrimalBuff.SetGestationMonitoringTarget", ForTarget, bEnable); }
	void UpdateBuffPersistentData() { NativeCall<void>(this, "APrimalBuff.UpdateBuffPersistentData"); }
};

