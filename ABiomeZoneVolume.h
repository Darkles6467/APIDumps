#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ABiomeZoneVolume : AVolume
{
	char __padding[0x168L];
	FString& BiomeZoneNameField() { return *GetNativePointerField<FString*>(this, "ABiomeZoneVolume.BiomeZoneName"); }
	FieldArray<_BYTE, 1> BiomeZoneField() { return {this, "ABiomeZoneVolume.BiomeZone"}; }
	float& FinalTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalTemperatureMultiplier"); }
	float& FinalTemperatureExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalTemperatureExponent"); }
	float& FinalTemperatureAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalTemperatureAddition"); }
	float& PreOffsetTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetTemperatureMultiplier"); }
	float& PreOffsetTemperatureExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetTemperatureExponent"); }
	float& PreOffsetTemperatureAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetTemperatureAddition"); }
	float& AboveTemperatureOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveTemperatureOffsetThreshold"); }
	float& AboveTemperatureOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveTemperatureOffsetMultiplier"); }
	float& AboveTemperatureOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveTemperatureOffsetExponent"); }
	float& BelowTemperatureOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowTemperatureOffsetThreshold"); }
	float& BelowTemperatureOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowTemperatureOffsetMultiplier"); }
	float& BelowTemperatureOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowTemperatureOffsetExponent"); }
	float& AbsoluteTemperatureOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteTemperatureOverride"); }
	float& AbsoluteMaxTemperatureField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteMaxTemperature"); }
	float& AbsoluteMinTemperatureField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteMinTemperature"); }
	float& EggRangeMaximumNumberOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.EggRangeMaximumNumberOverride"); }
	int& EggMaximumNumberOverrideField() { return *GetNativePointerField<int*>(this, "ABiomeZoneVolume.EggMaximumNumberOverride"); }
	float& EggChanceToSpawnOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.EggChanceToSpawnOverride"); }
	float& EggIntervalUnstasisChanceToSpawnOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.EggIntervalUnstasisChanceToSpawnOverride"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& OverrideEggLimitsDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "ABiomeZoneVolume.OverrideEggLimitsDinoClasses"); }
	int& BiomeZonePriorityField() { return *GetNativePointerField<int*>(this, "ABiomeZoneVolume.BiomeZonePriority"); }
	float& MaxMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.MaxMultiplier"); }
	float& AbsoluteWindOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteWindOverride"); }
	float& PreOffsetWindMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetWindMultiplier"); }
	float& PreOffsetWindExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetWindExponent"); }
	float& PreOffsetWindAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetWindAddition"); }
	float& AboveWindOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveWindOffsetThreshold"); }
	float& AboveWindOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveWindOffsetMultiplier"); }
	float& AboveWindOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveWindOffsetExponent"); }
	float& BelowWindOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowWindOffsetThreshold"); }
	float& BelowWindOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowWindOffsetMultiplier"); }
	float& BelowWindOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowWindOffsetExponent"); }
	float& FinalWindMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalWindMultiplier"); }
	float& FinalWindExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalWindExponent"); }
	float& FinalWindAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalWindAddition"); }
	TArray<float>& BiomeCustomDatasField() { return *GetNativePointerField<TArray<float>*>(this, "ABiomeZoneVolume.BiomeCustomDatas"); }
	FieldArray<float, 12> StatusAdjustmentRateMultipliersPositiveField() { return {this, "ABiomeZoneVolume.StatusAdjustmentRateMultipliersPositive"}; }
	FieldArray<float, 12> StatusAdjustmentRateMultipliersNegativeField() { return {this, "ABiomeZoneVolume.StatusAdjustmentRateMultipliersNegative"}; }
	bool& bOnlyApplyAdjustmentRateValuesOutdoorsField() { return *GetNativePointerField<bool*>(this, "ABiomeZoneVolume.bOnlyApplyAdjustmentRateValuesOutdoors"); }
	bool& bStatusAdjustRateValuesField() { return *GetNativePointerField<bool*>(this, "ABiomeZoneVolume.bStatusAdjustRateValues"); }
	bool& bDisableDayTransitionSoundsField() { return *GetNativePointerField<bool*>(this, "ABiomeZoneVolume.bDisableDayTransitionSounds"); }

	// Functions

	float EggGetOverrideIntervalBetweenUnstasisChances(APrimalDinoCharacter * aChar) { return NativeCall<float, APrimalDinoCharacter *>(this, "ABiomeZoneVolume.EggGetOverrideIntervalBetweenUnstasisChances", aChar); }
	float EggOverrideChanceToSpawn(APrimalDinoCharacter * aChar) { return NativeCall<float, APrimalDinoCharacter *>(this, "ABiomeZoneVolume.EggOverrideChanceToSpawn", aChar); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ABiomeZoneVolume.EndPlay", EndPlayReason); }
	static void GetAllBiomeZones(UWorld * World, TArray<ABiomeZoneVolume *> * BiomeZones) { NativeCall<void, UWorld *, TArray<ABiomeZoneVolume *> *>(nullptr, "ABiomeZoneVolume.GetAllBiomeZones", World, BiomeZones); }
	float GetBiomeTemperature(float GlobalTemperature) { return NativeCall<float, float>(this, "ABiomeZoneVolume.GetBiomeTemperature", GlobalTemperature); }
	float GetBiomeWind(float GlobalWind) { return NativeCall<float, float>(this, "ABiomeZoneVolume.GetBiomeWind", GlobalWind); }
	static ABiomeZoneVolume * GetBiomeZoneVolume(UWorld * World, const FVector * Location) { return NativeCall<ABiomeZoneVolume *, UWorld *, const FVector *>(nullptr, "ABiomeZoneVolume.GetBiomeZoneVolume", World, Location); }
	static bool IsPointInVacuumBase(UWorld * ForWorld, FVector AtPoint) { return NativeCall<bool, UWorld *, FVector>(nullptr, "ABiomeZoneVolume.IsPointInVacuumBase", ForWorld, AtPoint); }
	static bool IsPointUnderwater(UWorld * ForWorld, FVector AtPoint, bool bFastPath, float MinimumWaterHeight, bool bIgnoreVacuumStructures, bool bIgnorePainCausingVolumes) { return NativeCall<bool, UWorld *, FVector, bool, float, bool, bool>(nullptr, "ABiomeZoneVolume.IsPointUnderwater", ForWorld, AtPoint, bFastPath, MinimumWaterHeight, bIgnoreVacuumStructures, bIgnorePainCausingVolumes); }
	void OnBeginOverlap(AActor * Actor) { NativeCall<void, AActor *>(this, "ABiomeZoneVolume.OnBeginOverlap", Actor); }
	void OnEndOverlap(AActor * Actor) { NativeCall<void, AActor *>(this, "ABiomeZoneVolume.OnEndOverlap", Actor); }
	void PostInitializeComponents() { NativeCall<void>(this, "ABiomeZoneVolume.PostInitializeComponents"); }
};

