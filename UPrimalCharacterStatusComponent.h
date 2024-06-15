#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UDamageType.h"
#include "FLifetimeProperty.h"
#include "FStatValuePair.h"

struct UPrimalCharacterStatusComponent : UActorComponent
{
	char __padding[0xfb8L];
	FieldArray<float, 12> MaxStatusValuesField() { return {this, "UPrimalCharacterStatusComponent.MaxStatusValues"}; }
	FieldArray<float, 12> BaseLevelMaxStatusValuesField() { return {this, "UPrimalCharacterStatusComponent.BaseLevelMaxStatusValues"}; }
	FieldArray<char, 12> NumberOfLevelUpPointsAppliedField() { return {this, "UPrimalCharacterStatusComponent.NumberOfLevelUpPointsApplied"}; }
	FieldArray<char, 12> NumberOfLevelUpPointsAppliedTamedField() { return {this, "UPrimalCharacterStatusComponent.NumberOfLevelUpPointsAppliedTamed"}; }
	float& TamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamedIneffectivenessModifier"); }
	float& MovingStaminaRecoveryRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MovingStaminaRecoveryRateMultiplier"); }
	FieldArray<float, 12> RecoveryRateStatusValueField() { return {this, "UPrimalCharacterStatusComponent.RecoveryRateStatusValue"}; }
	FieldArray<float, 12> TimeToRecoverAfterDepletionStatusValueField() { return {this, "UPrimalCharacterStatusComponent.TimeToRecoverAfterDepletionStatusValue"}; }
	FieldArray<float, 12> TimeToRecoverAfterDecreaseStatusValueField() { return {this, "UPrimalCharacterStatusComponent.TimeToRecoverAfterDecreaseStatusValue"}; }
	FieldArray<float, 12> AmountMaxGainedPerLevelUpValueField() { return {this, "UPrimalCharacterStatusComponent.AmountMaxGainedPerLevelUpValue"}; }
	FieldArray<float, 12> AmountMaxGainedPerLevelUpValueTamedField() { return {this, "UPrimalCharacterStatusComponent.AmountMaxGainedPerLevelUpValueTamed"}; }
	FieldArray<char, 12> MaxGainedPerLevelUpValueIsPercentField() { return {this, "UPrimalCharacterStatusComponent.MaxGainedPerLevelUpValueIsPercent"}; }
	FieldArray<char, 12> RecoveryRateIsPercentField() { return {this, "UPrimalCharacterStatusComponent.RecoveryRateIsPercent"}; }
	FieldArray<float, 12> TamingMaxStatMultipliersField() { return {this, "UPrimalCharacterStatusComponent.TamingMaxStatMultipliers"}; }
	FieldArray<float, 12> TamingMaxStatAdditionsField() { return {this, "UPrimalCharacterStatusComponent.TamingMaxStatAdditions"}; }
	FieldArray<float, 12> MaxLevelUpMultiplierField() { return {this, "UPrimalCharacterStatusComponent.MaxLevelUpMultiplier"}; }
	float& TamedLandDinoSwimSpeedLevelUpEffectivenessField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamedLandDinoSwimSpeedLevelUpEffectiveness"); }
	float& TamingIneffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamingIneffectivenessMultiplier"); }
	float& DinoRiderWeightMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DinoRiderWeightMultiplier"); }
	FieldArray<char, 12> CanLevelUpValueField() { return {this, "UPrimalCharacterStatusComponent.CanLevelUpValue"}; }
	FieldArray<char, 12> DontUseValueField() { return {this, "UPrimalCharacterStatusComponent.DontUseValue"}; }
	FieldArray<FPrimalCharacterStatusStateThresholds, 12> StatusStateThresholdsField() { return {this, "UPrimalCharacterStatusComponent.StatusStateThresholds"}; }
	float& ExperienceAutomaticConsciousIncreaseSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExperienceAutomaticConsciousIncreaseSpeed"); }
	float& CheatMaxWeightField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CheatMaxWeight"); }
	int& CharacterStatusComponentPriorityField() { return *GetNativePointerField<int*>(this, "UPrimalCharacterStatusComponent.CharacterStatusComponentPriority"); }
	float& SuffocationHealthPercentDecreaseSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SuffocationHealthPercentDecreaseSpeed"); }
	float& UnsubmergedOxygenIncreaseSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.UnsubmergedOxygenIncreaseSpeed"); }
	float& SubmergedOxygenDecreaseSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SubmergedOxygenDecreaseSpeed"); }
	float& RunningStaminaConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.RunningStaminaConsumptionRate"); }
	float& WalkingStaminaConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WalkingStaminaConsumptionRate"); }
	float& SwimmingOrFlyingStaminaConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SwimmingOrFlyingStaminaConsumptionRate"); }
	float& JumpStaminaConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.JumpStaminaConsumption"); }
	float& WindedSpeedModifierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WindedSpeedModifier"); }
	float& WindedSpeedModifierSwimmingOrFlyingField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WindedSpeedModifierSwimmingOrFlying"); }
	float& InjuredSpeedModifierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InjuredSpeedModifier"); }
	float& HypothermicHealthDecreaseRateBaseField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermicHealthDecreaseRateBase"); }
	float& HypothermicHealthDecreaseRatePerDegreeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermicHealthDecreaseRatePerDegree"); }
	float& HyperthermicHealthDecreaseRateBaseField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermicHealthDecreaseRateBase"); }
	float& HyperthermicHealthDecreaseRatePerDegreeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermicHealthDecreaseRatePerDegree"); }
	float& XPEarnedPerStaminaConsumedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.XPEarnedPerStaminaConsumed"); }
	float& KillXPMultiplierPerCharacterLevelField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.KillXPMultiplierPerCharacterLevel"); }
	float& ShareXPWithTribeRangeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ShareXPWithTribeRange"); }
	int& BaseCharacterLevelField() { return *GetNativePointerField<int*>(this, "UPrimalCharacterStatusComponent.BaseCharacterLevel"); }
	unsigned __int16& ExtraCharacterLevelField() { return *GetNativePointerField<unsigned __int16*>(this, "UPrimalCharacterStatusComponent.ExtraCharacterLevel"); }
	float& ExperiencePointsField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExperiencePoints"); }
	float& ReplicatedExperiencePointsField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ReplicatedExperiencePoints"); }
	TEnumAsByte<enum ELevelExperienceRampType::Type>& LevelExperienceRampTypeField() { return *GetNativePointerField<TEnumAsByte<enum ELevelExperienceRampType::Type>*>(this, "UPrimalCharacterStatusComponent.LevelExperienceRampType"); }
	float& MaxExperiencePointsField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MaxExperiencePoints"); }
	float& BaseFoodConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BaseFoodConsumptionRate"); }
	float& BaseWaterConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BaseWaterConsumptionRate"); }
	float& FortitudeTorpidityDecreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.FortitudeTorpidityDecreaseMultiplier"); }
	float& FortitudeTorpidityIncreaseResistanceField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.FortitudeTorpidityIncreaseResistance"); }
	float& SubmergedWaterIncreaseRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SubmergedWaterIncreaseRate"); }
	float& CrouchedWaterFoodConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CrouchedWaterFoodConsumptionMultiplier"); }
	float& ProneWaterFoodConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ProneWaterFoodConsumptionMultiplier"); }
	float& StaminaRecoveryDecreaseFoodMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaRecoveryDecreaseFoodMultiplier"); }
	float& StaminaRecoveryDecreaseWaterMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaRecoveryDecreaseWaterMultiplier"); }
	float& HealthRecoveryDecreaseFoodMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HealthRecoveryDecreaseFoodMultiplier"); }
	float& BabyDinoConsumingFoodRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyDinoConsumingFoodRateMultiplier"); }
	float& DinoTamedAdultConsumingFoodRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DinoTamedAdultConsumingFoodRateMultiplier"); }
	float& BabyGestationConsumingFoodRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyGestationConsumingFoodRateMultiplier"); }
	float& BabyDinoStarvationHealthDecreaseRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyDinoStarvationHealthDecreaseRateMultiplier"); }
	float& BabyMaxHealthPercentField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyMaxHealthPercent"); }
	float& CrouchedStaminaConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CrouchedStaminaConsumptionMultiplier"); }
	float& ProneStaminaConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ProneStaminaConsumptionMultiplier"); }
	float& StarvationHealthConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StarvationHealthConsumptionRate"); }
	float& DehyrdationHealthConsumptionRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehyrdationHealthConsumptionRate"); }
	float& StaminaConsumptionDecreaseWaterMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaConsumptionDecreaseWaterMultiplier"); }
	float& StaminaConsumptionDecreaseFoodMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaConsumptionDecreaseFoodMultiplier"); }
	float& HypothermiaDecreaseFoodMultiplierBaseField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermiaDecreaseFoodMultiplierBase"); }
	float& HypothermiaDecreaseFoodMultiplierPerDegreeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermiaDecreaseFoodMultiplierPerDegree"); }
	float& HyperthermiaDecreaseWaterMultiplierBaseField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermiaDecreaseWaterMultiplierBase"); }
	float& HyperthermiaDecreaseWaterMultiplierPerDegreeField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermiaDecreaseWaterMultiplierPerDegree"); }
	float& HyperthermiaTemperatureThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermiaTemperatureThreshold"); }
	float& HypothermiaTemperatureThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermiaTemperatureThreshold"); }
	float& TorporExitPercentThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TorporExitPercentThreshold"); }
	float& KnockedOutTorpidityRecoveryRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.KnockedOutTorpidityRecoveryRateMultiplier"); }
	float& DehydrationTorpidityMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehydrationTorpidityMultiplier"); }
	float& StarvationTorpidityMultuplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StarvationTorpidityMultuplier"); }
	float& StarvationTorpidityIncreaseRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StarvationTorpidityIncreaseRate"); }
	float& DehyrdationTorpidityIncreaseRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehyrdationTorpidityIncreaseRate"); }
	float& InjuredTorpidityIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InjuredTorpidityIncreaseMultiplier"); }
	float& WeightSpeedDecreasePowerField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightSpeedDecreasePower"); }
	float& WeightJumpDecreasePowerField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightJumpDecreasePower"); }
	float& PoopItemMinFoodConsumptionIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.PoopItemMinFoodConsumptionInterval"); }
	float& PoopItemMaxFoodConsumptionIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.PoopItemMaxFoodConsumptionInterval"); }
	float& TheMaxTorporIncreasePerBaseLevelField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TheMaxTorporIncreasePerBaseLevel"); }
	float& CurrentStatusValuesReplicationIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CurrentStatusValuesReplicationInterval"); }
	float& InsulationHyperthermiaOffsetExponentField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHyperthermiaOffsetExponent"); }
	float& InsulationHyperthermiaOffsetScalerField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHyperthermiaOffsetScaler"); }
	float& InsulationHypothermiaOffsetExponentField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHypothermiaOffsetExponent"); }
	float& InsulationHypothermiaOffsetScalerField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHypothermiaOffsetScaler"); }
	float& HypoCharacterInsulationValueField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypoCharacterInsulationValue"); }
	float& HyperCharacterInsulationValueField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperCharacterInsulationValue"); }
	float& PoopItemFoodConsumptionCacheField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.PoopItemFoodConsumptionCache"); }
	float& LastHypothermalCharacterInsulationValueField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.LastHypothermalCharacterInsulationValue"); }
	float& LastHyperthermalCharacterInsulationValueField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.LastHyperthermalCharacterInsulationValue"); }
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& MaxStatusValueToAutoUpdateField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "UPrimalCharacterStatusComponent.MaxStatusValueToAutoUpdate"); }
	float& GenericXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.GenericXPMultiplier"); }
	float& CraftEarnXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CraftEarnXPMultiplier"); }
	float& MinInventoryWeightField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MinInventoryWeight"); }
	float& KillEarnXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.KillEarnXPMultiplier"); }
	float& GenericEarnXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.GenericEarnXPMultiplier"); }
	float& SpecialEarnXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SpecialEarnXPMultiplier"); }
	float& HarvestEarnXPMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HarvestEarnXPMultiplier"); }
	float& DefaultHyperthermicInsulationField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DefaultHyperthermicInsulation"); }
	float& DefaultHypothermicInsulationField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DefaultHypothermicInsulation"); }
	float& MaxTamingEffectivenessBaseLevelMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MaxTamingEffectivenessBaseLevelMultiplier"); }
	FString& FoodStatusNameOverrideField() { return *GetNativePointerField<FString*>(this, "UPrimalCharacterStatusComponent.FoodStatusNameOverride"); }
	TArray<FPrimalCharacterStatusValueModifier>& StatusValueModifiersField() { return *GetNativePointerField<TArray<FPrimalCharacterStatusValueModifier>*>(this, "UPrimalCharacterStatusComponent.StatusValueModifiers"); }
	TArray<unsigned char>& StatusValueModifierDescriptionIndicesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalCharacterStatusComponent.StatusValueModifierDescriptionIndices"); }
	FieldArray<float, 12> CurrentStatusValuesField() { return {this, "UPrimalCharacterStatusComponent.CurrentStatusValues"}; }
	FieldArray<float, 12> AdditionalStatusValuesField() { return {this, "UPrimalCharacterStatusComponent.AdditionalStatusValues"}; }
	FieldArray<float, 12> ReplicatedCurrentStatusValuesField() { return {this, "UPrimalCharacterStatusComponent.ReplicatedCurrentStatusValues"}; }
	FieldArray<float, 12> ReplicatedGlobalMaxStatusValuesField() { return {this, "UPrimalCharacterStatusComponent.ReplicatedGlobalMaxStatusValues"}; }
	FieldArray<float, 12> ReplicatedBaseLevelMaxStatusValuesField() { return {this, "UPrimalCharacterStatusComponent.ReplicatedBaseLevelMaxStatusValues"}; }
	FieldArray<float, 12> ReplicatedGlobalCurrentStatusValuesField() { return {this, "UPrimalCharacterStatusComponent.ReplicatedGlobalCurrentStatusValues"}; }
	FieldArray<char, 12> CurrentStatusStatesField() { return {this, "UPrimalCharacterStatusComponent.CurrentStatusStates"}; }
	FieldArray<long double, 12> LastDecreasedStatusValuesTimesField() { return {this, "UPrimalCharacterStatusComponent.LastDecreasedStatusValuesTimes"}; }
	FieldArray<long double, 12> LastIncreasedStatusValuesTimesField() { return {this, "UPrimalCharacterStatusComponent.LastIncreasedStatusValuesTimes"}; }
	FieldArray<long double, 12> LastMaxedStatusValuesTimesField() { return {this, "UPrimalCharacterStatusComponent.LastMaxedStatusValuesTimes"}; }
	FieldArray<long double, 12> LastDepletedStatusValuesTimesField() { return {this, "UPrimalCharacterStatusComponent.LastDepletedStatusValuesTimes"}; }
	float& StaminaRecoveryExtraResourceDecreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaRecoveryExtraResourceDecreaseMultiplier"); }
	float& DehydrationStaminaRecoveryRateField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehydrationStaminaRecoveryRate"); }
	float& WaterConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WaterConsumptionMultiplier"); }
	float& FoodConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.FoodConsumptionMultiplier"); }
	float& ExtraOxygenSpeedStatMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraOxygenSpeedStatMultiplier"); }
	float& ExtraTamedHealthMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraTamedHealthMultiplier"); }
	float& WakingTameFoodConsumptionRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WakingTameFoodConsumptionRateMultiplier"); }
	float& SwimmingStaminaRecoveryRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SwimmingStaminaRecoveryRateMultiplier"); }
	float& ExtraWaterConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraWaterConsumptionMultiplier"); }
	float& ExtraFoodConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraFoodConsumptionMultiplier"); }
	float& DefaultMaxOxygenField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DefaultMaxOxygen"); }
	long double& LastReplicatedCurrentStatusValuesTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalCharacterStatusComponent.LastReplicatedCurrentStatusValuesTime"); }
	float& OriginalMaxTorporField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.OriginalMaxTorpor"); }
	float& MountedDinoDinoWeightMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MountedDinoDinoWeightMultiplier"); }
	float& ExtraWildDinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraWildDinoDamageMultiplier"); }
	float& ExtraTamedDinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraTamedDinoDamageMultiplier"); }
	float& WeightMultiplierWhenCarriedOrBasedField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightMultiplierWhenCarriedOrBased"); }
	float& WeightMultiplierForCarriedPassengersField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightMultiplierForCarriedPassengers"); }
	float& WeightMultiplierForPlatformPassengersInventoryField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightMultiplierForPlatformPassengersInventory"); }
	FieldArray<float, 12> DinoMaxStatAddMultiplierImprintingField() { return {this, "UPrimalCharacterStatusComponent.DinoMaxStatAddMultiplierImprinting"}; }
	float& DinoImprintingQualityField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DinoImprintingQuality"); }
	float& TamedBaseHealthMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamedBaseHealthMultiplier"); }
	float& ExtraBabyDinoConsumingFoodRateMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraBabyDinoConsumingFoodRateMultiplier"); }
	TArray<FString>& StatusValueNameOverridesField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalCharacterStatusComponent.StatusValueNameOverrides"); }
	bool& bForceAllowStatusModifierSortingWhenTamedField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterStatusComponent.bForceAllowStatusModifierSortingWhenTamed"); }
	bool& bInWeightLockField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterStatusComponent.bInWeightLock"); }
	long double& LastReplicatedXPTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalCharacterStatusComponent.LastReplicatedXPTime"); }
	bool& bHasUnlockedMaxPlayerLevelAchievementThisSessionField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterStatusComponent.bHasUnlockedMaxPlayerLevelAchievementThisSession"); }
	bool& bHasUnlockedMaxDinoLevelAchievementThisSessionField() { return *GetNativePointerField<bool*>(this, "UPrimalCharacterStatusComponent.bHasUnlockedMaxDinoLevelAchievementThisSession"); }
	TArray<FHUDStatusEntry>& HUDStatusValueModifierDescriptionsField() { return *GetNativePointerField<TArray<FHUDStatusEntry>*>(this, "UPrimalCharacterStatusComponent.HUDStatusValueModifierDescriptions"); }
	FieldArray<FHUDStatusEntry, 14> HUDStatusStatesField() { return {this, "UPrimalCharacterStatusComponent.HUDStatusStates"}; }

	// Functions

	void AddExperience(float HowMuch, bool bShareWithTribe, EXPType::Type XPType) { NativeCall<void, float, bool, EXPType::Type>(this, "UPrimalCharacterStatusComponent.AddExperience", HowMuch, bShareWithTribe, XPType); }
	void AddStatusValueModifier(EPrimalCharacterStatusValue::Type ValueType, float Amount, float Speed, bool bContinueOnUnchangedValue, bool bSetValue, int StatusValueModifierDescriptionIndex, bool bResetExistingModifierDescriptionIndex, float LimitExistingModifierDescriptionToMaxAmount, bool bSetAdditionalValue, EPrimalCharacterStatusValue::Type StopAtValueNearMax, bool bMakeUntameable, TSubclassOf<UDamageType> ScaleValueByCharacterDamageType, AActor * Instigator) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, float, bool, bool, int, bool, float, bool, EPrimalCharacterStatusValue::Type, bool, TSubclassOf<UDamageType>, AActor *>(this, "UPrimalCharacterStatusComponent.AddStatusValueModifier", ValueType, Amount, Speed, bContinueOnUnchangedValue, bSetValue, StatusValueModifierDescriptionIndex, bResetExistingModifierDescriptionIndex, LimitExistingModifierDescriptionToMaxAmount, bSetAdditionalValue, StopAtValueNearMax, bMakeUntameable, ScaleValueByCharacterDamageType, Instigator); }
	void AdjustStatusValueModification(EPrimalCharacterStatusValue::Type valueType, float * Amount, TSubclassOf<UDamageType> DamageTypeClass, bool bManualModification) { NativeCall<void, EPrimalCharacterStatusValue::Type, float *, TSubclassOf<UDamageType>, bool>(this, "UPrimalCharacterStatusComponent.AdjustStatusValueModification", valueType, Amount, DamageTypeClass, bManualModification); }
	bool AllowTaming() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.AllowTaming"); }
	void ApplyStatusValueModifiers(float DeltaTime) { NativeCall<void, float>(this, "UPrimalCharacterStatusComponent.ApplyStatusValueModifiers", DeltaTime); }
	void ApplyTamingStatModifiers(float TameIneffectivenessModifier) { NativeCall<void, float>(this, "UPrimalCharacterStatusComponent.ApplyTamingStatModifiers", TameIneffectivenessModifier); }
	void BPDirectSetCurrentStatusValue(EPrimalCharacterStatusValue::Type valueType, float newValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float>(this, "UPrimalCharacterStatusComponent.BPDirectSetCurrentStatusValue", valueType, newValue); }
	void BPDirectSetMaxStatusValue(EPrimalCharacterStatusValue::Type valueType, float newValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float>(this, "UPrimalCharacterStatusComponent.BPDirectSetMaxStatusValue", valueType, newValue); }
	float BPGetCurrentStatusValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.BPGetCurrentStatusValue", valueType); }
	float BPGetMaxStatusValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.BPGetMaxStatusValue", valueType); }
	float BPGetPercentStatusValue(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.BPGetPercentStatusValue", valueType); }
	void BPSetRecoveryRateStatusValue(EPrimalCharacterStatusValue::Type valueType, float newValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float>(this, "UPrimalCharacterStatusComponent.BPSetRecoveryRateStatusValue", valueType, newValue); }
	bool CanGainLevel() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.CanGainLevel"); }
	bool CanLevelUp(EPrimalCharacterStatusValue::Type LevelUpValueType, bool bCheckExperience) { return NativeCall<bool, EPrimalCharacterStatusValue::Type, bool>(this, "UPrimalCharacterStatusComponent.CanLevelUp", LevelUpValueType, bCheckExperience); }
	void ChangedStatusState(EPrimalCharacterStatusState::Type valueType, bool bEnteredState) { NativeCall<void, EPrimalCharacterStatusState::Type, bool>(this, "UPrimalCharacterStatusComponent.ChangedStatusState", valueType, bEnteredState); }
	void CharacterUpdatedInventory(bool bEquippedOrUneqippedItem) { NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.CharacterUpdatedInventory", bEquippedOrUneqippedItem); }
	void ClearAllLevelUpPoints(bool bTamedPoints) { NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.ClearAllLevelUpPoints", bTamedPoints); }
	void ClientSyncMaxStatusValues_Implementation(const TArray<float> * NetMaxStatusValues, const TArray<float> * NetBaseMaxStatusValues) { NativeCall<void, const TArray<float> *, const TArray<float> *>(this, "UPrimalCharacterStatusComponent.ClientSyncMaxStatusValues_Implementation", NetMaxStatusValues, NetBaseMaxStatusValues); }
	static EPrimalCharacterStatusValue::Type ConvertIntToCharacterStatusEnum(int InInteger) { return NativeCall<EPrimalCharacterStatusValue::Type, int>(nullptr, "UPrimalCharacterStatusComponent.ConvertIntToCharacterStatusEnum", InInteger); }
	void CopyPrimalStatusComponentValues(const UPrimalCharacterStatusComponent * src) { NativeCall<void, const UPrimalCharacterStatusComponent *>(this, "UPrimalCharacterStatusComponent.CopyPrimalStatusComponentValues", src); }
	void DrawLocalPlayerHUD(AShooterHUD * HUD, float ScaleMult, bool bFromBottomRight) { NativeCall<void, AShooterHUD *, float, bool>(this, "UPrimalCharacterStatusComponent.DrawLocalPlayerHUD", HUD, ScaleMult, bFromBottomRight); }
	void DrawLocalPlayerHUDDescriptions(AShooterHUD * HUD, long double TheTimeSeconds, float ScaleMult, bool bDrawBottomRight) { NativeCall<void, AShooterHUD *, long double, float, bool>(this, "UPrimalCharacterStatusComponent.DrawLocalPlayerHUDDescriptions", HUD, TheTimeSeconds, ScaleMult, bDrawBottomRight); }
	int GetBaseLevelFromLevelUpPoints(bool bIncludePlayerAddedLevels) { return NativeCall<int, bool>(this, "UPrimalCharacterStatusComponent.GetBaseLevelFromLevelUpPoints", bIncludePlayerAddedLevels); }
	int GetCharacterLevel() { return NativeCall<int>(this, "UPrimalCharacterStatusComponent.GetCharacterLevel"); }
	float GetCraftingSpeedModifier() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetCraftingSpeedModifier"); }
	FString * GetDebugString(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalCharacterStatusComponent.GetDebugString", result); }
	void GetDinoFoodConsumptionRateMultiplier(float * Amount) { NativeCall<void, float *>(this, "UPrimalCharacterStatusComponent.GetDinoFoodConsumptionRateMultiplier", Amount); }
	float GetExperiencePercent() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetExperiencePercent"); }
	float GetExperienceRequiredForNextLevelUp() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetExperienceRequiredForNextLevelUp"); }
	float GetExperienceRequiredForPreviousLevelUp() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetExperienceRequiredForPreviousLevelUp"); }
	int GetExtraCharacterLevel() { return NativeCall<int>(this, "UPrimalCharacterStatusComponent.GetExtraCharacterLevel"); }
	float GetJumpZModifier() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetJumpZModifier"); }
	int GetLevelUpPoints(EPrimalCharacterStatusValue::Type valueType, bool bTamedPoints) { return NativeCall<int, EPrimalCharacterStatusValue::Type, bool>(this, "UPrimalCharacterStatusComponent.GetLevelUpPoints", valueType, bTamedPoints); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UPrimalCharacterStatusComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetMeleeDamageModifier() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetMeleeDamageModifier"); }
	float GetMovementSpeedModifier() { return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetMovementSpeedModifier"); }
	int GetNumLevelUpsAvailable() { return NativeCall<int>(this, "UPrimalCharacterStatusComponent.GetNumLevelUpsAvailable"); }
	float GetRawStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.GetRawStatusValueRecoveryRate", valueType); }
	FString * GetStatusMaxValueString(FString * result, EPrimalCharacterStatusValue::Type ValueType, bool bValueOnly) { return NativeCall<FString *, FString *, EPrimalCharacterStatusValue::Type, bool>(this, "UPrimalCharacterStatusComponent.GetStatusMaxValueString", result, ValueType, bValueOnly); }
	FString * GetStatusNameString(FString * result, EPrimalCharacterStatusValue::Type ValueType) { return NativeCall<FString *, FString *, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.GetStatusNameString", result, ValueType); }
	float GetStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type valueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.GetStatusValueRecoveryRate", valueType); }
	FString * GetStatusValueString(FString * result, EPrimalCharacterStatusValue::Type ValueType, bool bValueOnly) { return NativeCall<FString *, FString *, EPrimalCharacterStatusValue::Type, bool>(this, "UPrimalCharacterStatusComponent.GetStatusValueString", result, ValueType, bValueOnly); }
	float GetTotalStatusModifierDescriptionIndex(int StatusValueModifierDescriptionIndex) { return NativeCall<float, int>(this, "UPrimalCharacterStatusComponent.GetTotalStatusModifierDescriptionIndex", StatusValueModifierDescriptionIndex); }
	bool HasExperienceForLevelUp() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.HasExperienceForLevelUp"); }
	void InitializeComponent() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.InitializeComponent"); }
	bool IsAlignedWithTeam(int TargetingTeam) { return NativeCall<bool, int>(this, "UPrimalCharacterStatusComponent.IsAlignedWithTeam", TargetingTeam); }
	bool IsAtMaxExperience() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.IsAtMaxExperience"); }
	bool IsAtMaxLevel() { return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.IsAtMaxLevel"); }
	bool IsInStatusState(EPrimalCharacterStatusState::Type StateType) { return NativeCall<bool, EPrimalCharacterStatusState::Type>(this, "UPrimalCharacterStatusComponent.IsInStatusState", StateType); }
	float ModifyCurrentStatusValue(EPrimalCharacterStatusValue::Type valueType, float Amount, bool bPercentOfMax, bool bPercentOfCurrent, bool bManualModification, bool bSetValue, TSubclassOf<UDamageType> DamageTypeClass, bool bDamageDontKill, bool bForceSetValue) { return NativeCall<float, EPrimalCharacterStatusValue::Type, float, bool, bool, bool, bool, TSubclassOf<UDamageType>, bool, bool>(this, "UPrimalCharacterStatusComponent.ModifyCurrentStatusValue", valueType, Amount, bPercentOfMax, bPercentOfCurrent, bManualModification, bSetValue, DamageTypeClass, bDamageDontKill, bForceSetValue); }
	void NetSyncMaxStatusValues_Implementation(const TArray<float> * NetMaxStatusValues, const TArray<float> * NetBaseMaxStatusValues) { NativeCall<void, const TArray<float> *, const TArray<float> *>(this, "UPrimalCharacterStatusComponent.NetSyncMaxStatusValues_Implementation", NetMaxStatusValues, NetBaseMaxStatusValues); }
	void OnJumped() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnJumped"); }
	void OnRep_CurrentStatusValues() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_CurrentStatusValues"); }
	void OnRep_GlobalBaseLevelMaxStatusValues() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_GlobalBaseLevelMaxStatusValues"); }
	void OnRep_GlobalCurrentStatusValues() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_GlobalCurrentStatusValues"); }
	void OnRep_GlobalMaxStatusValues() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_GlobalMaxStatusValues"); }
	void OnRep_ReplicatedExperiencePoints() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_ReplicatedExperiencePoints"); }
	void RefreshInsulation() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.RefreshInsulation"); }
	void RefreshTemperature() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.RefreshTemperature"); }
	void RemoveStatusValueModifierByIndex(int Index) { NativeCall<void, int>(this, "UPrimalCharacterStatusComponent.RemoveStatusValueModifierByIndex", Index); }
	void RemoveStatusValueModifierByInstigator(AActor * Instigator) { NativeCall<void, AActor *>(this, "UPrimalCharacterStatusComponent.RemoveStatusValueModifierByInstigator", Instigator); }
	void RescaleAllStats() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.RescaleAllStats"); }
	void RescaleMaxStat(EPrimalCharacterStatusValue::Type LevelUpValueType, float TargetValue, bool bIsPercentOfTrueValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, bool>(this, "UPrimalCharacterStatusComponent.RescaleMaxStat", LevelUpValueType, TargetValue, bIsPercentOfTrueValue); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UPrimalCharacterStatusComponent.Serialize", Ar); }
	void ServerApplyLevelUp(EPrimalCharacterStatusValue::Type LevelUpValueType, AShooterPlayerController * ByPC) { NativeCall<void, EPrimalCharacterStatusValue::Type, AShooterPlayerController *>(this, "UPrimalCharacterStatusComponent.ServerApplyLevelUp", LevelUpValueType, ByPC); }
	void ServerApplyMutagen(bool bHasAncestors) { NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.ServerApplyMutagen", bHasAncestors); }
	void ServerSyncReplicatedValues() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.ServerSyncReplicatedValues"); }
	void SetAllStatsToMaximum() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.SetAllStatsToMaximum"); }
	void SetAllStatsToMaximumExcluding(EPrimalCharacterStatusValue::Type exclude) { NativeCall<void, EPrimalCharacterStatusValue::Type>(this, "UPrimalCharacterStatusComponent.SetAllStatsToMaximumExcluding", exclude); }
	void SetBaseLevel(int Level, bool bDontCurrentSetToMax) { NativeCall<void, int, bool>(this, "UPrimalCharacterStatusComponent.SetBaseLevel", Level, bDontCurrentSetToMax); }
	void SetBaseLevelCustomized(int Level, const TArray<FStatValuePair> * CustomBaseStats, const TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>> * PrioritizeStats, bool bDontCurrentSetToMax) { NativeCall<void, int, const TArray<FStatValuePair> *, const TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>> *, bool>(this, "UPrimalCharacterStatusComponent.SetBaseLevelCustomized", Level, CustomBaseStats, PrioritizeStats, bDontCurrentSetToMax); }
	void SetBaseLevelNoStatChange(int Level) { NativeCall<void, int>(this, "UPrimalCharacterStatusComponent.SetBaseLevelNoStatChange", Level); }
	void SetExtraCharacterLevel(int NewExtraCharacterLevel) { NativeCall<void, int>(this, "UPrimalCharacterStatusComponent.SetExtraCharacterLevel", NewExtraCharacterLevel); }
	void SetLevelUpPoints(EPrimalCharacterStatusValue::Type valueType, bool bTamedPoints, int newPoints) { NativeCall<void, EPrimalCharacterStatusValue::Type, bool, int>(this, "UPrimalCharacterStatusComponent.SetLevelUpPoints", valueType, bTamedPoints, newPoints); }
	void SetMaxStatusValue(EPrimalCharacterStatusValue::Type StatType, float newValue) { NativeCall<void, EPrimalCharacterStatusValue::Type, float>(this, "UPrimalCharacterStatusComponent.SetMaxStatusValue", StatType, newValue); }
	void SetTameable(bool bTameable) { NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.SetTameable", bTameable); }
	void SetTamed(float TameIneffectivenessModifier, bool bSkipAddingTamedLevels) { NativeCall<void, float, bool>(this, "UPrimalCharacterStatusComponent.SetTamed", TameIneffectivenessModifier, bSkipAddingTamedLevels); }
	void TickStatus(float DeltaTime, bool bForceStatusUpdate) { NativeCall<void, float, bool>(this, "UPrimalCharacterStatusComponent.TickStatus", DeltaTime, bForceStatusUpdate); }
	void UninitializeComponent() { NativeCall<void>(this, "UPrimalCharacterStatusComponent.UninitializeComponent"); }
	void UpdateInventoryWeight(APrimalCharacter * aPrimalChar) { NativeCall<void, APrimalCharacter *>(this, "UPrimalCharacterStatusComponent.UpdateInventoryWeight", aPrimalChar); }
	void UpdateStatusValue(EPrimalCharacterStatusValue::Type valueType, float DeltaTime, bool bManualUpdate) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, bool>(this, "UPrimalCharacterStatusComponent.UpdateStatusValue", valueType, DeltaTime, bManualUpdate); }
	void UpdateWeightStat(bool bForceSetValue) { NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.UpdateWeightStat", bForceSetValue); }
	void UpdatedCurrentStatusValue(EPrimalCharacterStatusValue::Type valueType, float Amount, bool bManualModification, TSubclassOf<UDamageType> DamageTypeClass, bool bDamageDontKill, bool bDontAdjustOtherStats) { NativeCall<void, EPrimalCharacterStatusValue::Type, float, bool, TSubclassOf<UDamageType>, bool, bool>(this, "UPrimalCharacterStatusComponent.UpdatedCurrentStatusValue", valueType, Amount, bManualModification, DamageTypeClass, bDamageDontKill, bDontAdjustOtherStats); }
	float BPAdjustStatusValueModification(EPrimalCharacterStatusValue::Type valueType, float Amount, TSubclassOf<UDamageType> DamageTypeClass, bool bManualModification) { return NativeCall<float, EPrimalCharacterStatusValue::Type, float, TSubclassOf<UDamageType>, bool>(this, "UPrimalCharacterStatusComponent.BPAdjustStatusValueModification", valueType, Amount, DamageTypeClass, bManualModification); }
	float BPModifyMaxExperiencePoints(float InMaxExperiencePoints) { return NativeCall<float, float>(this, "UPrimalCharacterStatusComponent.BPModifyMaxExperiencePoints", InMaxExperiencePoints); }
	int BPModifyMaxLevel(int InMaxLevel) { return NativeCall<int, int>(this, "UPrimalCharacterStatusComponent.BPModifyMaxLevel", InMaxLevel); }
	void ClientSyncMaxStatusValues(const TArray<float> * NetMaxStatusValues, const TArray<float> * NetBaseMaxStatusValues) { NativeCall<void, const TArray<float> *, const TArray<float> *>(this, "UPrimalCharacterStatusComponent.ClientSyncMaxStatusValues", NetMaxStatusValues, NetBaseMaxStatusValues); }
	void NetSyncMaxStatusValues(const TArray<float> * NetMaxStatusValues, const TArray<float> * NetBaseMaxStatusValues) { NativeCall<void, const TArray<float> *, const TArray<float> *>(this, "UPrimalCharacterStatusComponent.NetSyncMaxStatusValues", NetMaxStatusValues, NetBaseMaxStatusValues); }
};

