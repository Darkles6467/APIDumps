#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ABiomeZoneSettings : AActor
{
	char __padding[0x90L];
	FString& BiomeZoneNameField() { return *GetNativePointerField<FString*>(this, "ABiomeZoneSettings.BiomeZoneName"); }
	float& FinalTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.FinalTemperatureMultiplier"); }
	float& FinalTemperatureExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.FinalTemperatureExponent"); }
	float& FinalTemperatureAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.FinalTemperatureAddition"); }
	float& PreOffsetTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.PreOffsetTemperatureMultiplier"); }
	float& PreOffsetTemperatureExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.PreOffsetTemperatureExponent"); }
	float& PreOffsetTemperatureAdditionField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.PreOffsetTemperatureAddition"); }
	float& AboveTemperatureOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AboveTemperatureOffsetThreshold"); }
	float& AboveTemperatureOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AboveTemperatureOffsetMultiplier"); }
	float& AboveTemperatureOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AboveTemperatureOffsetExponent"); }
	float& BelowTemperatureOffsetThresholdField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.BelowTemperatureOffsetThreshold"); }
	float& BelowTemperatureOffsetMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.BelowTemperatureOffsetMultiplier"); }
	float& BelowTemperatureOffsetExponentField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.BelowTemperatureOffsetExponent"); }
	float& AbsoluteTemperatureOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AbsoluteTemperatureOverride"); }
	float& EggRangeMaximumNumberOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.EggRangeMaximumNumberOverride"); }
	int& EggMaximumNumberOverrideField() { return *GetNativePointerField<int*>(this, "ABiomeZoneSettings.EggMaximumNumberOverride"); }
	float& EggChanceToSpawnOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.EggChanceToSpawnOverride"); }
	float& EggIntervalUnstasisChanceToSpawnOverrideField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.EggIntervalUnstasisChanceToSpawnOverride"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& OverrideEggLimitsDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "ABiomeZoneSettings.OverrideEggLimitsDinoClasses"); }
	int& BiomeZonePriorityField() { return *GetNativePointerField<int*>(this, "ABiomeZoneSettings.BiomeZonePriority"); }
	float& MaxMultiplierField() { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.MaxMultiplier"); }

	// Functions

	void ApplyToVolume(ABiomeZoneVolume * BiomeZoneVolume) { NativeCall<void, ABiomeZoneVolume *>(this, "ABiomeZoneSettings.ApplyToVolume", BiomeZoneVolume); }
};

