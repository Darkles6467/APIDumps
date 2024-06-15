#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UAssetUserData.h"
#include "FLifetimeProperty.h"

struct AWorldSettings : AInfo
{
	char __padding[0x860L];
	float& GroundColorMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.GroundColorMultiplier"); }
	float& SkyColorMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.SkyColorMultiplier"); }
	FVector& AtmosphericFogMultiplierField() { return *GetNativePointerField<FVector*>(this, "AWorldSettings.AtmosphericFogMultiplier"); }
	float& TrueSkyIntensityMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.TrueSkyIntensityMultiplier"); }
	int& MaxGroundClutterLayersField() { return *GetNativePointerField<int*>(this, "AWorldSettings.MaxGroundClutterLayers"); }
	float& SM4DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.SM4DirectionalLightMultiplier"); }
	float& SM4SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.SM4SKyLightMultiplier"); }
	float& SM5DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.SM5DirectionalLightMultiplier"); }
	float& SM5SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.SM5SKyLightMultiplier"); }
	float& NoTrueSkySM5DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.NoTrueSkySM5DirectionalLightMultiplier"); }
	float& NoTrueSkySM5SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.NoTrueSkySM5SKyLightMultiplier"); }
	float& ConsoleSM5DirectionalLightMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.ConsoleSM5DirectionalLightMultiplier"); }
	float& ConsoleSM5SKyLightMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.ConsoleSM5SKyLightMultiplier"); }
	float& IBLFadeDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.IBLFadeDistanceMultiplier"); }
	int& TexturePoolSizeOverrideField() { return *GetNativePointerField<int*>(this, "AWorldSettings.TexturePoolSizeOverride"); }
	int& ConsoleOnlyTexturePoolSizeOverrideField() { return *GetNativePointerField<int*>(this, "AWorldSettings.ConsoleOnlyTexturePoolSizeOverride"); }
	float& GlobalViewDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalViewDistanceMultiplier"); }
	float& GlobalProxyDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalProxyDistanceMultiplier"); }
	bool& bWorldUseStasisField() { return *GetNativePointerField<bool*>(this, "AWorldSettings.bWorldUseStasis"); }
	ASkyLight * SkyLightReferenceField() { return GetNativePointerField<ASkyLight *>(this, "AWorldSettings.SkyLightReference"); }
	ADirectionalLight * DirectionalLightReferenceField() { return GetNativePointerField<ADirectionalLight *>(this, "AWorldSettings.DirectionalLightReference"); }
	float& GlobalIBLCaptureBrightnessField() { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalIBLCaptureBrightness"); }
	float& GlobalBakeAndStreamIBLMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalBakeAndStreamIBLMultiplier"); }
	FVector& TrueSkyColorMultiplierField() { return *GetNativePointerField<FVector*>(this, "AWorldSettings.TrueSkyColorMultiplier"); }
	float& SkyIBLIntensityMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.SkyIBLIntensityMultiplier"); }
	float& KillZIntervalMinField() { return *GetNativePointerField<float*>(this, "AWorldSettings.KillZIntervalMin"); }
	float& KillZIntervalMaxField() { return *GetNativePointerField<float*>(this, "AWorldSettings.KillZIntervalMax"); }
	bool& bDisableDFAOField() { return *GetNativePointerField<bool*>(this, "AWorldSettings.bDisableDFAO"); }
	bool& bForceAtmosphericFogWithTrueSkyField() { return *GetNativePointerField<bool*>(this, "AWorldSettings.bForceAtmosphericFogWithTrueSky"); }
	float& DistanceFieldShadowRaytraceDistanceOverrideField() { return *GetNativePointerField<float*>(this, "AWorldSettings.DistanceFieldShadowRaytraceDistanceOverride"); }
	bool& bInteriorLightingKeepDistanceFieldsOnLowEndField() { return *GetNativePointerField<bool*>(this, "AWorldSettings.bInteriorLightingKeepDistanceFieldsOnLowEnd"); }
	volatile int& ActorUnstasisListCountField() { return *GetNativePointerField<volatile int*>(this, "AWorldSettings.ActorUnstasisListCount"); }
	TArray<FName>& LevelsToAbsolutelyNotLoadOnDediServerField() { return *GetNativePointerField<TArray<FName>*>(this, "AWorldSettings.LevelsToAbsolutelyNotLoadOnDediServer"); }
	ADynamicCaptureManager * MasterSkyLightOverrideField() { return GetNativePointerField<ADynamicCaptureManager *>(this, "AWorldSettings.MasterSkyLightOverride"); }
	float& DefaultAmbientShadowNearField() { return *GetNativePointerField<float*>(this, "AWorldSettings.DefaultAmbientShadowNear"); }
	float& DefaultAmbientShadowFarField() { return *GetNativePointerField<float*>(this, "AWorldSettings.DefaultAmbientShadowFar"); }
	FString& TitleField() { return *GetNativePointerField<FString*>(this, "AWorldSettings.Title"); }
	float& KillZField() { return *GetNativePointerField<float*>(this, "AWorldSettings.KillZ"); }
	float& WorldGravityZField() { return *GetNativePointerField<float*>(this, "AWorldSettings.WorldGravityZ"); }
	float& GlobalGravityZField() { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalGravityZ"); }
	TSubclassOf<UPhysicsCollisionHandler>& PhysicsCollisionHandlerClassField() { return *GetNativePointerField<TSubclassOf<UPhysicsCollisionHandler>*>(this, "AWorldSettings.PhysicsCollisionHandlerClass"); }
	TArray<FGameModePrefix>& DefaultMapPrefixesField() { return *GetNativePointerField<TArray<FGameModePrefix>*>(this, "AWorldSettings.DefaultMapPrefixes"); }
	TSubclassOf<AGameNetworkManager>& GameNetworkManagerClassField() { return *GetNativePointerField<TSubclassOf<AGameNetworkManager>*>(this, "AWorldSettings.GameNetworkManagerClass"); }
	int& PackedLightAndShadowMapTextureSizeField() { return *GetNativePointerField<int*>(this, "AWorldSettings.PackedLightAndShadowMapTextureSize"); }
	FVector& DefaultColorScaleField() { return *GetNativePointerField<FVector*>(this, "AWorldSettings.DefaultColorScale"); }
	float& DefaultMaxDistanceFieldOcclusionDistanceField() { return *GetNativePointerField<float*>(this, "AWorldSettings.DefaultMaxDistanceFieldOcclusionDistance"); }
	float& GlobalDistanceFieldViewDistanceField() { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalDistanceFieldViewDistance"); }
	int& VisibilityCellSizeField() { return *GetNativePointerField<int*>(this, "AWorldSettings.VisibilityCellSize"); }
	TEnumAsByte<enum EVisibilityAggressiveness>& VisibilityAggressivenessField() { return *GetNativePointerField<TEnumAsByte<enum EVisibilityAggressiveness>*>(this, "AWorldSettings.VisibilityAggressiveness"); }
	FLightmassWorldInfoSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassWorldInfoSettings*>(this, "AWorldSettings.LightmassSettings"); }
	TEnumAsByte<enum ELightingBuildQuality>& LevelLightingQualityField() { return *GetNativePointerField<TEnumAsByte<enum ELightingBuildQuality>*>(this, "AWorldSettings.LevelLightingQuality"); }
	FReverbSettings& DefaultReverbSettingsField() { return *GetNativePointerField<FReverbSettings*>(this, "AWorldSettings.DefaultReverbSettings"); }
	FInteriorSettings& DefaultAmbientZoneSettingsField() { return *GetNativePointerField<FInteriorSettings*>(this, "AWorldSettings.DefaultAmbientZoneSettings"); }
	USoundMix * DefaultBaseSoundMixField() { return GetNativePointerField<USoundMix *>(this, "AWorldSettings.DefaultBaseSoundMix"); }
	bool& bDisableSpatialReplicationField() { return *GetNativePointerField<bool*>(this, "AWorldSettings.bDisableSpatialReplication"); }
	float& SM4ExposureOffsetField() { return *GetNativePointerField<float*>(this, "AWorldSettings.SM4ExposureOffset"); }
	FReverbSettings& DefaultWaterReverbSettingsField() { return *GetNativePointerField<FReverbSettings*>(this, "AWorldSettings.DefaultWaterReverbSettings"); }
	FInteriorSettings& DefaultWaterAmbientZoneSettingsField() { return *GetNativePointerField<FInteriorSettings*>(this, "AWorldSettings.DefaultWaterAmbientZoneSettings"); }
	FProxyMeshSettings& ProxySettingsField() { return *GetNativePointerField<FProxyMeshSettings*>(this, "AWorldSettings.ProxySettings"); }
	float& WorldToMetersField() { return *GetNativePointerField<float*>(this, "AWorldSettings.WorldToMeters"); }
	float& TimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.TimeDilation"); }
	float& MatineeTimeDilationField() { return *GetNativePointerField<float*>(this, "AWorldSettings.MatineeTimeDilation"); }
	float& DistanceFieldRuntimeQualityMultiplierField() { return *GetNativePointerField<float*>(this, "AWorldSettings.DistanceFieldRuntimeQualityMultiplier"); }
	TArray<FName>& AlwaysVisibleLevelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "AWorldSettings.AlwaysVisibleLevelNames"); }
	TArray<FName>& LevelsToForceInvisibleWhenExcludedField() { return *GetNativePointerField<TArray<FName>*>(this, "AWorldSettings.LevelsToForceInvisibleWhenExcluded"); }
	int& MinInstancesForConsoleFoliageAutoReductionField() { return *GetNativePointerField<int*>(this, "AWorldSettings.MinInstancesForConsoleFoliageAutoReduction"); }
	float& ConsoleFoliageAutoReductionPercentField() { return *GetNativePointerField<float*>(this, "AWorldSettings.ConsoleFoliageAutoReductionPercent"); }
	int& CurrentStasisPlayerIndexField() { return *GetNativePointerField<int*>(this, "AWorldSettings.CurrentStasisPlayerIndex"); }
	unsigned int& CurrentUnStasisedIndexField() { return *GetNativePointerField<unsigned int*>(this, "AWorldSettings.CurrentUnStasisedIndex"); }
	TArray<UAssetUserData *>& AssetUserDataField() { return *GetNativePointerField<TArray<UAssetUserData *>*>(this, "AWorldSettings.AssetUserData"); }
	TArray<FSphere>& DynamicUndermeshRegionsField() { return *GetNativePointerField<TArray<FSphere>*>(this, "AWorldSettings.DynamicUndermeshRegions"); }

	// Functions

	float GetEffectiveTimeDilation() { return NativeCall<float>(this, "AWorldSettings.GetEffectiveTimeDilation"); }
	FVector * GetVelocity(FVector * result, bool bIsForRagdoll) { return NativeCall<FVector *, FVector *, bool>(this, "AWorldSettings.GetVelocity", result, bIsForRagdoll); }
	static const wchar_t * StaticConfigName() { return NativeCall<const wchar_t *>(nullptr, "AWorldSettings.StaticConfigName"); }
	void AddAssetUserData(UAssetUserData * InUserData) { NativeCall<void, UAssetUserData *>(this, "AWorldSettings.AddAssetUserData", InUserData); }
	void DestroyedPlayerCharacter(AActor * aPlayerCharacter) { NativeCall<void, AActor *>(this, "AWorldSettings.DestroyedPlayerCharacter", aPlayerCharacter); }
	void DuringPhysxTick(float DeltaSeconds) { NativeCall<void, float>(this, "AWorldSettings.DuringPhysxTick", DeltaSeconds); }
	UAssetUserData * GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { return NativeCall<UAssetUserData *, TSubclassOf<UAssetUserData>>(this, "AWorldSettings.GetAssetUserDataOfClass", InUserDataClass); }
	float GetDistanceFieldRuntimeQualityMultiplier() { return NativeCall<float>(this, "AWorldSettings.GetDistanceFieldRuntimeQualityMultiplier"); }
	float GetGravityZ() { return NativeCall<float>(this, "AWorldSettings.GetGravityZ"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AWorldSettings.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void NotifyBeginPlay() { NativeCall<void>(this, "AWorldSettings.NotifyBeginPlay"); }
	void NotifyMatchStarted() { NativeCall<void>(this, "AWorldSettings.NotifyMatchStarted"); }
	void PooledParticleSystemFinished(UParticleSystemComponent * FinishedComponent) { NativeCall<void, UParticleSystemComponent *>(this, "AWorldSettings.PooledParticleSystemFinished", FinishedComponent); }
	void PostInitializeComponents() { NativeCall<void>(this, "AWorldSettings.PostInitializeComponents"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AWorldSettings.PreInitializeComponents"); }
	void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { NativeCall<void, TSubclassOf<UAssetUserData>>(this, "AWorldSettings.RemoveUserDataOfClass", InUserDataClass); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "AWorldSettings.Serialize", Ar); }
	bool ShouldStasis(AActor * InTestActor) { return NativeCall<bool, AActor *>(this, "AWorldSettings.ShouldStasis", InTestActor); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AWorldSettings.Tick", DeltaSeconds); }
};

struct APrimalWorldSettings : AWorldSettings
{
	char __padding[0x538L];
	bool& bMapSupportsMissionsField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bMapSupportsMissions"); }
	bool& bEditorEnableNPCSpawnersField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bEditorEnableNPCSpawners"); }
	bool& bEditorForceDisableNPCSpawnersField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bEditorForceDisableNPCSpawners"); }
	bool& bPreventGlobalNonEventSpawnOverridesField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bPreventGlobalNonEventSpawnOverrides"); }
	FName& PlacingStructureToggleMeshTagVisibilityField() { return *GetNativePointerField<FName*>(this, "APrimalWorldSettings.PlacingStructureToggleMeshTagVisibility"); }
	bool& bGenerateTerrainField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bGenerateTerrain"); }
	bool& bForceSpawnAnimationTestField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceSpawnAnimationTest"); }
	bool& bOverrideLongitudeAndLatitudeField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bOverrideLongitudeAndLatitude"); }
	float& LongitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LongitudeScale"); }
	float& RegularWildDinoResistanceVersusTamesMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoResistanceVersusTamesMultiplier"); }
	float& RegularWildDinoDamageVersusTamesMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoDamageVersusTamesMultiplier"); }
	float& RegularWildDinoXPMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoXPMultiplier"); }
	float& LatitudeScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LatitudeScale"); }
	float& LongitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LongitudeOrigin"); }
	float& LatitudeOriginField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LatitudeOrigin"); }
	float& MinKillXField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MinKillX"); }
	float& MaxKillXField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillX"); }
	float& MinKillYField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MinKillY"); }
	float& MaxKillYField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillY"); }
	float& MaxKillZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillZ"); }
	float& MaxUnderWorldTraceRangeZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxUnderWorldTraceRangeZ"); }
	TSubclassOf<UPrimalGameData>& PrimalGameDataOverrideField() { return *GetNativePointerField<TSubclassOf<UPrimalGameData>*>(this, "APrimalWorldSettings.PrimalGameDataOverride"); }
	FString& ForceLoadMapNameField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.ForceLoadMapName"); }
	TArray<FString>& OverridePlayerSpawnRegionsField() { return *GetNativePointerField<TArray<FString>*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegions"); }
	TArray<int>& OverridePlayerSpawnRegionDifficultiesField() { return *GetNativePointerField<TArray<int>*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegionDifficulties"); }
	TArray<unsigned char>& OverridePlayerSpawnRegionsHideInSpawnUIField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegionsHideInSpawnUI"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& LevelUseNPCClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "APrimalWorldSettings.LevelUseNPCClasses"); }
	TArray<FClassRemappingWeight>& NPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight>*>(this, "APrimalWorldSettings.NPCRandomSpawnClassWeights"); }
	TArray<FClassRemappingWeight>& SinglePlayerNPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight>*>(this, "APrimalWorldSettings.SinglePlayerNPCRandomSpawnClassWeights"); }
	FVector2D& SpawnLevelBoundsMaxField() { return *GetNativePointerField<FVector2D*>(this, "APrimalWorldSettings.SpawnLevelBoundsMax"); }
	FVector2D& SpawnLevelBoundsMinField() { return *GetNativePointerField<FVector2D*>(this, "APrimalWorldSettings.SpawnLevelBoundsMin"); }
	float& AutoSpectatorNamesMinZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AutoSpectatorNamesMinZ"); }
	bool& bUseSpawnLevelBoundsField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bUseSpawnLevelBounds"); }
	float& DinosLerpToMaxRandomBaseLevelField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DinosLerpToMaxRandomBaseLevel"); }
	TArray<int>& DefaultSpawnPointRandomIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "APrimalWorldSettings.DefaultSpawnPointRandomIndices"); }
	UAnimMontage * OverrideFirstSpawnAnimField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalWorldSettings.OverrideFirstSpawnAnim"); }
	UAnimMontage * OverrideSpawnAnimField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalWorldSettings.OverrideSpawnAnim"); }
	float& GammaOffsetField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GammaOffset"); }
	bool& bWaterDinosUseFlightBlockingField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bWaterDinosUseFlightBlocking"); }
	float& GlobalHarvestHealthMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalHarvestHealthMultiplier"); }
	float& GlobalHarvestAmountMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalHarvestAmountMultiplier"); }
	bool& bFlyersStructurePreventionDismountingAnywhereField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bFlyersStructurePreventionDismountingAnywhere"); }
	bool& bFlyersStructurePreventionDismountingUnderTerrainOnlyField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bFlyersStructurePreventionDismountingUnderTerrainOnly"); }
	float& OverrideDifficultyMaxField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.OverrideDifficultyMax"); }
	TArray<FItemMultiplier>& GlobalSpoilingTimeMultipliersField() { return *GetNativePointerField<TArray<FItemMultiplier>*>(this, "APrimalWorldSettings.GlobalSpoilingTimeMultipliers"); }
	FieldArray<float, 12> GlobalStatusAdjustmentRateMultipliersPositiveField() { return {this, "APrimalWorldSettings.GlobalStatusAdjustmentRateMultipliersPositive"}; }
	FieldArray<float, 12> GlobalStatusAdjustmentRateMultipliersNegativeField() { return {this, "APrimalWorldSettings.GlobalStatusAdjustmentRateMultipliersNegative"}; }
	int& ValidEngramGroupsBitMaskField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.ValidEngramGroupsBitMask"); }
	TArray<FInventoryComponentDefaultItemsAppend>& InventoryComponentAppendsField() { return *GetNativePointerField<TArray<FInventoryComponentDefaultItemsAppend>*>(this, "APrimalWorldSettings.InventoryComponentAppends"); }
	TArray<FInventoryComponentDefaultItemsAppend>& InventoryComponentAppendsNonDedicatedField() { return *GetNativePointerField<TArray<FInventoryComponentDefaultItemsAppend>*>(this, "APrimalWorldSettings.InventoryComponentAppendsNonDedicated"); }
	float& DayCycleSpeedScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DayCycleSpeedScale"); }
	float& DayTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DayTimeSpeedScale"); }
	float& NightTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NightTimeSpeedScale"); }
	float& NegativeHyperthermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NegativeHyperthermalInsulationMultiplier"); }
	float& PositiveHyperthermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.PositiveHyperthermalInsulationMultiplier"); }
	float& NegativeHypothermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NegativeHypothermalInsulationMultiplier"); }
	float& PositiveHypothermalInsulationMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.PositiveHypothermalInsulationMultiplier"); }
	float& CarnivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.CarnivoreNaturalTargetingRangeMultiplier"); }
	float& HerbivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.HerbivoreNaturalTargetingRangeMultiplier"); }
	TArray<TSubclassOf<UPrimalHarvestingComponent>>& HarvestComponentHealthScaleParentsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalHarvestingComponent>>*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleParents"); }
	TArray<float>& HarvestComponentHealthScaleParentsValueField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleParentsValue"); }
	TArray<TSubclassOf<UPrimalHarvestingComponent>>& HarvestComponentHealthScaleExactMatchField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalHarvestingComponent>>*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleExactMatch"); }
	TArray<float>& HarvestComponentHealthScaleExactMatchValueField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleExactMatchValue"); }
	int& RequiresIDField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.RequiresID"); }
	bool& bIgnoreBiomeWindField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bIgnoreBiomeWind"); }
	TSubclassOf<ATerrainActor>& AutoGenerateTerrainActorTemplateField() { return *GetNativePointerField<TSubclassOf<ATerrainActor>*>(this, "APrimalWorldSettings.AutoGenerateTerrainActorTemplate"); }
	float& DefaultWaterLineStartZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DefaultWaterLineStartZ"); }
	float& DefaultDeepWaterStartZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DefaultDeepWaterStartZ"); }
	float& MaximumPlayerFlyZField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaximumPlayerFlyZ"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& AllowDownloadDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "APrimalWorldSettings.AllowDownloadDinoClasses"); }
	FString& DefaultBiomeNameField() { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.DefaultBiomeName"); }
	float& MaxFallSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxFallSpeedMultiplier"); }
	bool& bDisableStructureObstructedByWorldGeometryCheckField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bDisableStructureObstructedByWorldGeometryCheck"); }
	bool& bForceEnableTurretLimitField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceEnableTurretLimit"); }
	bool& bUseMissionsField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bUseMissions"); }
	bool& bUseMissionsMetaDataField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bUseMissionsMetaData"); }
	int& LoadForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.LoadForceRespawnDinosVersion"); }
	float& FirstSpawnNotTargetableForTimeField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.FirstSpawnNotTargetableForTime"); }
	bool& bIgnoreInMeshCheckingUnderwaterField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bIgnoreInMeshCheckingUnderwater"); }
	bool& bAllowRidingFliersField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bAllowRidingFliers"); }
	bool& bForceDinoDrawHUDField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceDinoDrawHUD"); }
	bool& bDisableFirstPersonRidingField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bDisableFirstPersonRiding"); }
	bool& bForceDinoHighQualityAttacksField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceDinoHighQualityAttacks"); }
	bool& bScaleDinoFloatingHUDByMeshSizeField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bScaleDinoFloatingHUDByMeshSize"); }
	float& ForceCameraTransitionTimeUponPossessionField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.ForceCameraTransitionTimeUponPossession"); }
	float& AdditionalDinoHealthBarOffsetYField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AdditionalDinoHealthBarOffsetY"); }
	float& AIOverrideNotifyNeighborsRangeField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AIOverrideNotifyNeighborsRange"); }
	FVector& SpawnAnimationLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalWorldSettings.SpawnAnimationLocationOffset"); }
	TArray<FAvailableMission>& AvailableMissionsField() { return *GetNativePointerField<TArray<FAvailableMission>*>(this, "APrimalWorldSettings.AvailableMissions"); }
	TArray<FMissionMetaData>& AvailableMissionsMetaDataField() { return *GetNativePointerField<TArray<FMissionMetaData>*>(this, "APrimalWorldSettings.AvailableMissionsMetaData"); }
	TArray<FMissionMetaData>& NonPlayerFacingMissionsMetaDataField() { return *GetNativePointerField<TArray<FMissionMetaData>*>(this, "APrimalWorldSettings.NonPlayerFacingMissionsMetaData"); }
	bool& bSetupFemaleAnimOverridesField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bSetupFemaleAnimOverrides"); }
	bool& bSetupMaleAnimOverridesField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bSetupMaleAnimOverrides"); }
	float& GlobalDinoCountValueField() { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalDinoCountValue"); }
	bool& bDidPreGameplaySetupField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bDidPreGameplaySetup"); }
	bool& bInitializedDistanceFieldQualityField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bInitializedDistanceFieldQuality"); }
	UPrimalWorldSettingsEventOverrides * ActiveEventOverridesField() { return GetNativePointerField<UPrimalWorldSettingsEventOverrides *>(this, "APrimalWorldSettings.ActiveEventOverrides"); }
	TSubclassOf<UMissionMetaTagInfo>& MetaTagInfoClassField() { return *GetNativePointerField<TSubclassOf<UMissionMetaTagInfo>*>(this, "APrimalWorldSettings.MetaTagInfoClass"); }
	bool& bEnforceSingleBiomeBuffField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bEnforceSingleBiomeBuff"); }
	bool& bHideMissionSortByDistanceField() { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bHideMissionSortByDistance"); }

	// Functions

	const UMissionMetaTagInfo * GetMetaTagInfoFast() { return NativeCall<const UMissionMetaTagInfo *>(this, "APrimalWorldSettings.GetMetaTagInfoFast"); }
	bool IsEngramGroupValid(int EngramGroupBitmask) { return NativeCall<bool, int>(this, "APrimalWorldSettings.IsEngramGroupValid", EngramGroupBitmask); }
	void AddDynamicResourceReference(UObject * DynamicResourceRef) { NativeCall<void, UObject *>(this, "APrimalWorldSettings.AddDynamicResourceReference", DynamicResourceRef); }
	void BeginPlay() { NativeCall<void>(this, "APrimalWorldSettings.BeginPlay"); }
	bool ForceInactiveMapActorParticles() { return NativeCall<bool>(this, "APrimalWorldSettings.ForceInactiveMapActorParticles"); }
	float GetDistanceFieldRuntimeQualityMultiplier() { return NativeCall<float>(this, "APrimalWorldSettings.GetDistanceFieldRuntimeQualityMultiplier"); }
	float GetEffectiveTimeDilation() { return NativeCall<float>(this, "APrimalWorldSettings.GetEffectiveTimeDilation"); }
	float GetHarvestComponentHealthScale(UClass * HarvestComponentClass) { return NativeCall<float, UClass *>(this, "APrimalWorldSettings.GetHarvestComponentHealthScale", HarvestComponentClass); }
	float GetItemGlobalSpoilingTimeMultiplier(UPrimalItem * anItem) { return NativeCall<float, UPrimalItem *>(this, "APrimalWorldSettings.GetItemGlobalSpoilingTimeMultiplier", anItem); }
	bool GetMissionMetaData(FName MissionTag, FMissionMetaData * value) { return NativeCall<bool, FName, FMissionMetaData *>(this, "APrimalWorldSettings.GetMissionMetaData", MissionTag, value); }
	bool IsAllowedInLevelBounds(const FVector * AtLocat) { return NativeCall<bool, const FVector *>(this, "APrimalWorldSettings.IsAllowedInLevelBounds", AtLocat); }
	bool IsAutomaticallyGenerated() { return NativeCall<bool>(this, "APrimalWorldSettings.IsAutomaticallyGenerated"); }
	void PreGameplaySetup() { NativeCall<void>(this, "APrimalWorldSettings.PreGameplaySetup"); }
	void PreLoadSaveGame() { NativeCall<void>(this, "APrimalWorldSettings.PreLoadSaveGame"); }
};

