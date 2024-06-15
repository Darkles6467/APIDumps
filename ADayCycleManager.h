#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"
#include "APrimalStructureItemContainer_HordeCrate.h"
#include "FPrimalMapMarkerEntryData.h"

struct ADayCycleManager : AInfo
{
	char __padding[0x138L];
	float& CurrentTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.CurrentTime"); }
	float& TrueSkyTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.TrueSkyTime"); }
	float& GlobalTrueSkyBrightnessField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalTrueSkyBrightness"); }
	FVector& GlobalTrueSkyColorMultiplierField() { return *GetNativePointerField<FVector*>(this, "ADayCycleManager.GlobalTrueSkyColorMultiplier"); }
	float& GlobalIBLCaptureBrightnessField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalIBLCaptureBrightness"); }
	float& GlobalBakeAndStreamIBLMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalBakeAndStreamIBLMultiplier"); }
	float& GlobalGroundColorMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalGroundColorMultiplier"); }
	float& GlobalSkyColorMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalSkyColorMultiplier"); }
	float& SM4SkyLightMultField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SM4SkyLightMult"); }
	float& SM4DirLightMultField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SM4DirLightMult"); }
	FVector& AtmosphericFogMultiplierField() { return *GetNativePointerField<FVector*>(this, "ADayCycleManager.AtmosphericFogMultiplier"); }
	float& SkyIBLIntensityMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyIBLIntensityMultiplier"); }
	float& BaseTemperatureField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.BaseTemperature"); }
	float& BaseWindField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.BaseWind"); }
	float& SkyWeatherSequenceBlend_NormalField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Normal"); }
	float& SkyWeatherSequenceBlend_HotField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Hot"); }
	float& SkyWeatherSequenceBlend_ColdField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Cold"); }
	float& SkyWeatherSequenceBlend_RainyField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Rainy"); }
	float& SkyWeatherSequenceBlend_FogField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Fog"); }
	bool& bIsRainingField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bIsRaining"); }
	float& Sound_TransitionToMorningTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.Sound_TransitionToMorningTime"); }
	float& Sound_TransitionToNightTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.Sound_TransitionToNightTime"); }
	float& Sound_TransitionToMidDayTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.Sound_TransitionToMidDayTime"); }
	float& DayTimeStartField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.DayTimeStart"); }
	float& DayTimeEndField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.DayTimeEnd"); }
	float& DayTimeLengthMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.DayTimeLengthMultiplier"); }
	float& LastCurrentTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.LastCurrentTime"); }
	float& SoundLastCurrentTimeField() { return *GetNativePointerField<float*>(this, "ADayCycleManager.SoundLastCurrentTime"); }
	bool& bCheckForStructureActivationField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bCheckForStructureActivation"); }
	bool& bUsesWindField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bUsesWind"); }
	bool& bCheckForWeaponFiringField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bCheckForWeaponFiring"); }
	bool& bUseBPOverrideItemAutoDecreaseDurabilityField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bUseBPOverrideItemAutoDecreaseDurability"); }
	bool& bHideSupplyCratesField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bHideSupplyCrates"); }
	TArray<TSubclassOf<UHexagonTradableOption>>& GenesisTradableOptionsField() { return *GetNativePointerField<TArray<TSubclassOf<UHexagonTradableOption>>*>(this, "ADayCycleManager.GenesisTradableOptions"); }
	bool& bWasDaytimeField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bWasDaytime"); }
	bool& bFirstDaytimeField() { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bFirstDaytime"); }
	TArray<FStringAssetReference>& GivePlayersBuffAssetsOnSpawnField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "ADayCycleManager.GivePlayersBuffAssetsOnSpawn"); }

	// Functions

	float AdjustStructureItemInsulation_Implementation(AShooterCharacter * ForCharacter, UPrimalItem * ForPrimalItem, EPrimalItemStat::Type TypeInsulation, float insulationValue) { return NativeCall<float, AShooterCharacter *, UPrimalItem *, EPrimalItemStat::Type, float>(this, "ADayCycleManager.AdjustStructureItemInsulation_Implementation", ForCharacter, ForPrimalItem, TypeInsulation, insulationValue); }
	float BPOverrideGameStateMatineePlayRate_Implementation(AActor * forMatinee, float inPlayRate) { return NativeCall<float, AActor *, float>(this, "ADayCycleManager.BPOverrideGameStateMatineePlayRate_Implementation", forMatinee, inPlayRate); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "ADayCycleManager.DrawHUD", HUD); }
	FString * GetDayNumberString_Implementation(FString * result, bool bIncludeDayString) { return NativeCall<FString *, FString *, bool>(this, "ADayCycleManager.GetDayNumberString_Implementation", result, bIncludeDayString); }
	float GetDeepWaterStartZ_Implementation(FVector AtLocation) { return NativeCall<float, FVector>(this, "ADayCycleManager.GetDeepWaterStartZ_Implementation", AtLocation); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "ADayCycleManager.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetTemperatureAtLocation(FVector AtLocation, APrimalCharacter * forPrimalCharacter) { return NativeCall<float, FVector, APrimalCharacter *>(this, "ADayCycleManager.GetTemperatureAtLocation", AtLocation, forPrimalCharacter); }
	float GetWaterLineStartZ_Implementation(FVector AtLocation) { return NativeCall<float, FVector>(this, "ADayCycleManager.GetWaterLineStartZ_Implementation", AtLocation); }
	float GetWindAtLocation(FVector AtLocation, APrimalCharacter * forPrimalCharacter) { return NativeCall<float, FVector, APrimalCharacter *>(this, "ADayCycleManager.GetWindAtLocation", AtLocation, forPrimalCharacter); }
	bool IsDaytime() { return NativeCall<bool>(this, "ADayCycleManager.IsDaytime"); }
	bool IsRainingAtLocation_Implementation(FVector Location) { return NativeCall<bool, FVector>(this, "ADayCycleManager.IsRainingAtLocation_Implementation", Location); }
	void MatineeUpdated() { NativeCall<void>(this, "ADayCycleManager.MatineeUpdated"); }
	void OnDCMCheat(FName CheatName, float Value) { NativeCall<void, FName, float>(this, "ADayCycleManager.OnDCMCheat", CheatName, Value); }
	bool OverrideItemAutoDecreaseDurability(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem *>(this, "ADayCycleManager.OverrideItemAutoDecreaseDurability", anItem); }
	void PostInitializeComponents() { NativeCall<void>(this, "ADayCycleManager.PostInitializeComponents"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADayCycleManager.Tick", DeltaSeconds); }
	float AdjustStructureItemInsulation(AShooterCharacter * ForCharacter, UPrimalItem * ForPrimalItem, EPrimalItemStat::Type TypeInsulation, float insulationValue) { return NativeCall<float, AShooterCharacter *, UPrimalItem *, EPrimalItemStat::Type, float>(this, "ADayCycleManager.AdjustStructureItemInsulation", ForCharacter, ForPrimalItem, TypeInsulation, insulationValue); }
	bool AllowStructureActivation(APrimalStructure * theStructure) { return NativeCall<bool, APrimalStructure *>(this, "ADayCycleManager.AllowStructureActivation", theStructure); }
	bool AllowWeaponFiring(AActor * theWeaponOrStructure) { return NativeCall<bool, AActor *>(this, "ADayCycleManager.AllowWeaponFiring", theWeaponOrStructure); }
	void AttemptWeaponFiring(AShooterWeapon * theWeapon) { NativeCall<void, AShooterWeapon *>(this, "ADayCycleManager.AttemptWeaponFiring", theWeapon); }
	float BPAdjustTemperature(float TemperatureIn, ABiomeZoneVolume * biomeZoneVolume, const FVector * AtLocation, APrimalCharacter * forPrimalCharacter) { return NativeCall<float, float, ABiomeZoneVolume *, const FVector *, APrimalCharacter *>(this, "ADayCycleManager.BPAdjustTemperature", TemperatureIn, biomeZoneVolume, AtLocation, forPrimalCharacter); }
	bool BPAllowSpawningCrate(TSubclassOf<APrimalStructureItemContainer_SupplyCrate> CrateType) { return NativeCall<bool, TSubclassOf<APrimalStructureItemContainer_SupplyCrate>>(this, "ADayCycleManager.BPAllowSpawningCrate", CrateType); }
	TArray<FPrimalMapMarkerEntryData> * BPGetAdditionalMapMarkers(TArray<FPrimalMapMarkerEntryData> * result, AShooterPlayerController * ForPC) { return NativeCall<TArray<FPrimalMapMarkerEntryData> *, TArray<FPrimalMapMarkerEntryData> *, AShooterPlayerController *>(this, "ADayCycleManager.BPGetAdditionalMapMarkers", result, ForPC); }
	void BPOnDCMCheat(FName CheatName, float Value) { NativeCall<void, FName, float>(this, "ADayCycleManager.BPOnDCMCheat", CheatName, Value); }
	float BPOverrideGameStateMatineePlayRate(AActor * forMatinee, float inPlayRate) { return NativeCall<float, AActor *, float>(this, "ADayCycleManager.BPOverrideGameStateMatineePlayRate", forMatinee, inPlayRate); }
	bool BPOverrideItemAutoDecreaseDurability(UPrimalItem * anItem) { return NativeCall<bool, UPrimalItem *>(this, "ADayCycleManager.BPOverrideItemAutoDecreaseDurability", anItem); }
	void BPPostDrawSpawnMap(AShooterPlayerController * ForPC, UCanvas * ItemCanvas, const FVector2D * ItemCanvasSize) { NativeCall<void, AShooterPlayerController *, UCanvas *, const FVector2D *>(this, "ADayCycleManager.BPPostDrawSpawnMap", ForPC, ItemCanvas, ItemCanvasSize); }
	FString * GetDayNumberString(FString * result, bool bIncludeDayString) { return NativeCall<FString *, FString *, bool>(this, "ADayCycleManager.GetDayNumberString", result, bIncludeDayString); }
	bool IsRainingAtLocation(FVector Location) { return NativeCall<bool, FVector>(this, "ADayCycleManager.IsRainingAtLocation", Location); }
	void ShooterCharacterPossessed(AShooterCharacter * theShooterCharacter) { NativeCall<void, AShooterCharacter *>(this, "ADayCycleManager.ShooterCharacterPossessed", theShooterCharacter); }
	void ShooterCharacterSpawned(AShooterCharacter * theShooterCharacter) { NativeCall<void, AShooterCharacter *>(this, "ADayCycleManager.ShooterCharacterSpawned", theShooterCharacter); }
};

