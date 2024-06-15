#pragma once

#include "BaseDeclarations.h"
#include "AGameState.h"
#include "FColor.h"
#include "FJsonObject.h"
#include "FGameIniData.h"
#include "UPrimalItem.h"
#include "FLifetimeProperty.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"
#include "AActor.h"
#include "APrimalBuff.h"

struct AShooterGameState : AGameState
{
	char __padding[0x610L];
	int& NumNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumNPC"); }
	int& NumHibernatedNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumHibernatedNPC"); }
	int& NumActiveNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumActiveNPC"); }
	int& NumDeadNPCField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumDeadNPC"); }
	int& NumPlayerActorsField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumPlayerActors"); }
	int& NumPlayerConnectedField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumPlayerConnected"); }
	bool& bServerUseLocalizedChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerUseLocalizedChat"); }
	float& LocalizedChatRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LocalizedChatRadius"); }
	float& VoiceSuperRangeRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.VoiceSuperRangeRadius"); }
	float& VoiceWhisperRangeRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.VoiceWhisperRangeRadius"); }
	float& LocalizedChatRadiusUnconsiousScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LocalizedChatRadiusUnconsiousScale"); }
	unsigned int& VivoxAttenuationModelField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.VivoxAttenuationModel"); }
	float& VivoxMinDistanceField() { return *GetNativePointerField<float*>(this, "AShooterGameState.VivoxMinDistance"); }
	float& VivoxRolloffField() { return *GetNativePointerField<float*>(this, "AShooterGameState.VivoxRolloff"); }
	float& ServerFramerateField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ServerFramerate"); }
	FString& NewStructureDestructionTagField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.NewStructureDestructionTag"); }
	int& DayNumberField() { return *GetNativePointerField<int*>(this, "AShooterGameState.DayNumber"); }
	float& DayTimeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.DayTime"); }
	long double& NetworkTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.NetworkTime"); }
	unsigned int& TimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.TimeUTC"); }
	bool& bIsOfficialServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsOfficialServer"); }
	bool& bIsListenServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsListenServer"); }
	bool& bIsDediServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsDediServer"); }
	bool& bIsServerRunningOnConsoleField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsServerRunningOnConsole"); }
	bool& bIsArkTributeAvailableField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsArkTributeAvailable"); }
	bool& bIsArkDownloadsAllowedField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsArkDownloadsAllowed"); }
	bool& bAllowThirdPersonPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowThirdPersonPlayer"); }
	bool& bServerHardcoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerHardcore"); }
	bool& bServerPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerPVE"); }
	bool& bAutoPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAutoPvE"); }
	bool& bServerCrosshairField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerCrosshair"); }
	bool& bServerForceNoHUDField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerForceNoHUD"); }
	bool& bFlyerPlatformAllowUnalignedDinoBasingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bFlyerPlatformAllowUnalignedDinoBasing"); }
	bool& bMapPlayerLocationField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bMapPlayerLocation"); }
	bool& bPvEDisableFriendlyFireField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEDisableFriendlyFire"); }
	bool& bPvEAllowTribeWarField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowTribeWar"); }
	bool& bPvEAllowTribeWarCancelField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowTribeWarCancel"); }
	bool& bEnablePvPGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnablePvPGamma"); }
	bool& bDisablePvEGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisablePvEGamma"); }
	int& NumTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NumTamedDinos"); }
	int& MaxStructuresInRangeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxStructuresInRange"); }
	float& DayCycleSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.DayCycleSpeedScale"); }
	float& DayTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.DayTimeSpeedScale"); }
	float& NightTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.NightTimeSpeedScale"); }
	float& PvEStructureDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PvEStructureDecayPeriodMultiplier"); }
	float& PvEDinoDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PvEDinoDecayPeriodMultiplier"); }
	float& PerPlatformMaxStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PerPlatformMaxStructuresMultiplier"); }
	bool& bDisableStructureDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableStructureDecayPvE"); }
	bool& bDisableDinoDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableDinoDecayPvE"); }
	bool& bAllowCaveBuildingPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCaveBuildingPvE"); }
	bool& bAllowCaveBuildingPvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCaveBuildingPvP"); }
	bool& bPreventDownloadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventDownloadSurvivors"); }
	bool& bReachedPlatformStructureLimitField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bReachedPlatformStructureLimit"); }
	bool& bAdminLoggingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAdminLogging"); }
	bool& bPvPStructureDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvPStructureDecay"); }
	bool& bPreventDownloadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventDownloadDinos"); }
	bool& bPreventDownloadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventDownloadItems"); }
	bool& bPreventUploadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventUploadDinos"); }
	bool& bPreventUploadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventUploadItems"); }
	bool& bPreventUploadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventUploadSurvivors"); }
	bool& bPreventMateBoostField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventMateBoost"); }
	bool& bPreventStructurePaintingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventStructurePainting"); }
	bool& bAllowCharacterCreationField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCharacterCreation"); }
	bool& bAllowSpawnPointSelectionField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowSpawnPointSelection"); }
	int& MaxTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTamedDinos"); }
	bool& bDisableSpawnAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableSpawnAnimations"); }
	FString& PlayerListStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.PlayerListString"); }
	float& GlobalSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalSpoilingTimeMultiplier"); }
	float& GlobalItemDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalItemDecompositionTimeMultiplier"); }
	int& MaxNumberOfPlayersInTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxNumberOfPlayersInTribe"); }
	float& TribeSlotReuseCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.TribeSlotReuseCooldown"); }
	float& GlobalCorpseDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalCorpseDecompositionTimeMultiplier"); }
	float& EggHatchSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.EggHatchSpeedMultiplier"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "AShooterGameState.ActiveEvent"); }
	bool& bAllowPaintingWithoutResourcesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowPaintingWithoutResources"); }
	bool& bEnableExtraStructurePreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnableExtraStructurePreventionVolumes"); }
	TArray<FItemCraftingCostOverride>& OverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FItemCraftingCostOverride>*>(this, "AShooterGameState.OverrideItemCraftingCosts"); }
	TArray<FItemMaxItemQuantityOverride>& OverrideItemMaxQuantityField() { return *GetNativePointerField<TArray<FItemMaxItemQuantityOverride>*>(this, "AShooterGameState.OverrideItemMaxQuantity"); }
	long double& LastServerSaveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LastServerSaveTime"); }
	float& ServerSaveIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ServerSaveInterval"); }
	float& TribeNameChangeCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.TribeNameChangeCooldown"); }
	float& PlatformSaddleBuildAreaBoundsMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PlatformSaddleBuildAreaBoundsMultiplier"); }
	bool& bAlwaysAllowStructurePickupField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAlwaysAllowStructurePickup"); }
	float& StructurePickupTimeAfterPlacementField() { return *GetNativePointerField<float*>(this, "AShooterGameState.StructurePickupTimeAfterPlacement"); }
	float& StructurePickupHoldDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameState.StructurePickupHoldDuration"); }
	bool& bAllowIntegratedSPlusStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowIntegratedSPlusStructures"); }
	bool& bAllowHideDamageSourceFromLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowHideDamageSourceFromLogs"); }
	FieldArray<ExpensiveFunctionRegister, 1> ExpensiveFunctionsField() { return {this, "AShooterGameState.ExpensiveFunctions"}; }
	UAudioComponent * DynamicMusicAudioComponentField() { return GetNativePointerField<UAudioComponent *>(this, "AShooterGameState.DynamicMusicAudioComponent"); }
	UAudioComponent * DynamicMusicAudioComponent2Field() { return GetNativePointerField<UAudioComponent *>(this, "AShooterGameState.DynamicMusicAudioComponent2"); }
	bool& bPlayingDynamicMusicField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPlayingDynamicMusic"); }
	bool& bPlayingDynamicMusic1Field() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPlayingDynamicMusic1"); }
	bool& bPlayingDynamicMusic2Field() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPlayingDynamicMusic2"); }
	float& LastHadMusicTimeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LastHadMusicTime"); }
	TArray<FLevelExperienceRamp>& LevelExperienceRampOverridesField() { return *GetNativePointerField<TArray<FLevelExperienceRamp>*>(this, "AShooterGameState.LevelExperienceRampOverrides"); }
	TArray<FEngramEntryOverride>& OverrideEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride>*>(this, "AShooterGameState.OverrideEngramEntries"); }
	TArray<FString>& PreventDinoTameClassNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameState.PreventDinoTameClassNames"); }
	float& ListenServerTetherDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ListenServerTetherDistanceMultiplier"); }
	FString& PGMapNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.PGMapName"); }
	TArray<int>& SupportedSpawnRegionsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameState.SupportedSpawnRegions"); }
	UPaintingCache * PaintingCacheField() { return GetNativePointerField<UPaintingCache *>(this, "AShooterGameState.PaintingCache"); }
	bool& bEnableDeathTeamSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnableDeathTeamSpectator"); }
	FVector& PlayerFloatingHUDOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterGameState.PlayerFloatingHUDOffset"); }
	float& PlayerFloatingHUDOffsetScreenYField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PlayerFloatingHUDOffsetScreenY"); }
	float& StructureDamageRepairCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.StructureDamageRepairCooldown"); }
	bool& bForceAllStructureLockingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceAllStructureLocking"); }
	bool& bAllowCustomRecipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCustomRecipes"); }
	bool& bAllowRaidDinoFeedingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowRaidDinoFeeding"); }
	float& CustomRecipeEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.CustomRecipeEffectivenessMultiplier"); }
	float& CustomRecipeSkillMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.CustomRecipeSkillMultiplier"); }
	FVector& OverrideAreaMusicPositionField() { return *GetNativePointerField<FVector*>(this, "AShooterGameState.OverrideAreaMusicPosition"); }
	float& OverrideAreaMusicRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.OverrideAreaMusicRange"); }
	bool& bAllowUnclaimDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowUnclaimDinos"); }
	float& FloatingHUDRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FloatingHUDRange"); }
	float& FloatingChatRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FloatingChatRange"); }
	int& ExtinctionEventTimeIntervalField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ExtinctionEventTimeInterval"); }
	float& RTSModeNumSelectableDinosScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.RTSModeNumSelectableDinosScale"); }
	float& RTSMaxRangeFromPlayerCharacterScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameState.RTSMaxRangeFromPlayerCharacterScale"); }
	float& ExtinctionEventPercentField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ExtinctionEventPercent"); }
	int& ExtinctionEventSecondsRemainingField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ExtinctionEventSecondsRemaining"); }
	bool& bDoExtinctionEventField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDoExtinctionEvent"); }
	int& DestroyTamesOverLevelClampField() { return *GetNativePointerField<int*>(this, "AShooterGameState.DestroyTamesOverLevelClamp"); }
	TArray<FInventoryComponentDefaultItemsAppend>& InventoryComponentAppendsField() { return *GetNativePointerField<TArray<FInventoryComponentDefaultItemsAppend>*>(this, "AShooterGameState.InventoryComponentAppends"); }
	bool& bPreventOfflinePvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventOfflinePvP"); }
	bool& bPvPDinoDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvPDinoDecay"); }
	bool& bAllowUnclaimDinosConfigField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowUnclaimDinosConfig"); }
	bool& bForceUseInventoryAppendsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceUseInventoryAppends"); }
	bool& bOverideStructurePlatformPreventionField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bOverideStructurePlatformPrevention"); }
	float& ItemStackSizeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.ItemStackSizeMultiplier"); }
	TArray<int>& PreventOfflinePvPLiveTeamsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameState.PreventOfflinePvPLiveTeams"); }
	TArray<int>& PreventOfflinePvPExpiringTeamsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameState.PreventOfflinePvPExpiringTeams"); }
	TArray<double>& PreventOfflinePvPExpiringTimesField() { return *GetNativePointerField<TArray<double>*>(this, "AShooterGameState.PreventOfflinePvPExpiringTimes"); }
	bool& bAllowAnyoneBabyImprintCuddleField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowAnyoneBabyImprintCuddle"); }
	bool& bDisableImprintDinoBuffField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableImprintDinoBuff"); }
	int& MaxPersonalTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxPersonalTamedDinos"); }
	TArray<FFloatingTextEntry>& FloatingTextEntriesField() { return *GetNativePointerField<TArray<FFloatingTextEntry>*>(this, "AShooterGameState.FloatingTextEntries"); }
	bool& bIsCustomMapField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsCustomMap"); }
	bool& bIsClientField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsClient"); }
	bool& bIsDedicatedServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsDedicatedServer"); }
	FString& ClusterIdField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.ClusterId"); }
	FString& AmazonS3AccessKeyIDField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.AmazonS3AccessKeyID"); }
	FString& AmazonS3SecretAccessKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.AmazonS3SecretAccessKey"); }
	FString& AmazonS3BucketNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.AmazonS3BucketName"); }
	FString& ServerSessionNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.ServerSessionName"); }
	bool& bPreventTribeAlliancesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventTribeAlliances"); }
	FString& LoadForceRespawnDinosTagField() { return *GetNativePointerField<FString*>(this, "AShooterGameState.LoadForceRespawnDinosTag"); }
	bool& bOnlyDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bOnlyDecayUnsnappedCoreStructures"); }
	bool& bFastDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bFastDecayUnsnappedCoreStructures"); }
	bool& bServerUseDinoListField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerUseDinoList"); }
	bool& bPvEAllowStructuresAtSupplyDropsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowStructuresAtSupplyDrops"); }
	bool& bAllowForceNetUpdateField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowForceNetUpdate"); }
	float& MinimumDinoReuploadIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.MinimumDinoReuploadInterval"); }
	float& HairGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.HairGrowthSpeedMultiplier"); }
	float& FastDecayIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.FastDecayInterval"); }
	float& OxygenSwimSpeedStatMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.OxygenSwimSpeedStatMultiplier"); }
	bool& bAllowMultipleAttachedC4Field() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowMultipleAttachedC4"); }
	bool& bCrossARKAllowForeignDinoDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bCrossARKAllowForeignDinoDownloads"); }
	long double& LastPlayedDynamicMusic1Field() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LastPlayedDynamicMusic1"); }
	long double& LastPlayedDynamicMusic2Field() { return *GetNativePointerField<long double*>(this, "AShooterGameState.LastPlayedDynamicMusic2"); }
	bool& bUseCorpseLocatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bUseCorpseLocator"); }
	bool& bDisableStructurePlacementCollisionField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableStructurePlacementCollision"); }
	bool& bUseSingleplayerSettingsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bUseSingleplayerSettings"); }
	bool& bAllowPlatformSaddleMultiFloorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowPlatformSaddleMultiFloors"); }
	bool& bPreventSpawnAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventSpawnAnimations"); }
	int& MaxAlliancesPerTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxAlliancesPerTribe"); }
	int& MaxTribesPerAllianceField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTribesPerAlliance"); }
	bool& bIsLegacyServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsLegacyServer"); }
	bool& bDisableDinoDecayClaimingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableDinoDecayClaiming"); }
	FName& UseStructurePreventionVolumeTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameState.UseStructurePreventionVolumeTag"); }
	int& MaxStructuresInSmallRadiusField() { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxStructuresInSmallRadius"); }
	float& RadiusStructuresInSmallRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameState.RadiusStructuresInSmallRadius"); }
	bool& bUseTameLimitForStructuresOnlyField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bUseTameLimitForStructuresOnly"); }
	bool& bLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bLimitTurretsInRange"); }
	float& LimitTurretsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameState.LimitTurretsRange"); }
	int& LimitTurretsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameState.LimitTurretsNum"); }
	bool& bForceAllowAllStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceAllowAllStructures"); }
	bool& bShowCreativeModeField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bShowCreativeMode"); }
	TArray<FPlayerLocatorEffectMap>& PlayerLocatorEffectMapsField() { return *GetNativePointerField<TArray<FPlayerLocatorEffectMap>*>(this, "AShooterGameState.PlayerLocatorEffectMaps"); }
	int& AmbientSoundCheckIncrementField() { return *GetNativePointerField<int*>(this, "AShooterGameState.AmbientSoundCheckIncrement"); }
	int& ThrottledTicksModField() { return *GetNativePointerField<int*>(this, "AShooterGameState.ThrottledTicksMod"); }
	int& PerformanceThrottledTicksModField() { return *GetNativePointerField<int*>(this, "AShooterGameState.PerformanceThrottledTicksMod"); }
	float& PreventOfflinePvPConnectionInvincibleIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PreventOfflinePvPConnectionInvincibleInterval"); }
	float& PassiveTameIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.PassiveTameIntervalMultiplier"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& UniqueDinosField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "AShooterGameState.UniqueDinos"); }
	TArray<FName>& ActiveMissionTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "AShooterGameState.ActiveMissionTags"); }
	unsigned int& MinimumUniqueDownloadIntervalField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.MinimumUniqueDownloadInterval"); }
	unsigned int& MaximumUniqueDownloadIntervalField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.MaximumUniqueDownloadInterval"); }
	bool& bIgnoreStructuresPreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIgnoreStructuresPreventionVolumes"); }
	bool& bPreventOutOfTribePinCodeUseField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventOutOfTribePinCodeUse"); }
	TArray<FDinoDownloadData>& UniqueDownloadsField() { return *GetNativePointerField<TArray<FDinoDownloadData>*>(this, "AShooterGameState.UniqueDownloads"); }
	TArray<FDataSet>& GameDataSetsField() { return *GetNativePointerField<TArray<FDataSet>*>(this, "AShooterGameState.GameDataSets"); }
	UPrimalWorldSettingsEventOverrides * ActiveEventOverridesField() { return GetNativePointerField<UPrimalWorldSettingsEventOverrides *>(this, "AShooterGameState.ActiveEventOverrides"); }
	bool& bIgnoreLimitMaxStructuresInRangeTypeFlagField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIgnoreLimitMaxStructuresInRangeTypeFlag"); }
	TArray<FMassTeleportData>& MassTeleportQueueField() { return *GetNativePointerField<TArray<FMassTeleportData>*>(this, "AShooterGameState.MassTeleportQueue"); }
	TArray<FMassTeleportData>& MassTeleportQueueToAddField() { return *GetNativePointerField<TArray<FMassTeleportData>*>(this, "AShooterGameState.MassTeleportQueueToAdd"); }
	bool& bAllowLowGravitySpinField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowLowGravitySpin"); }
	TArray<FName>& BiomeBuffTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "AShooterGameState.BiomeBuffTags"); }
	TArray<FWorldBuffPersistantData>& WorldBuffPersistantDatasField() { return *GetNativePointerField<TArray<FWorldBuffPersistantData>*>(this, "AShooterGameState.WorldBuffPersistantDatas"); }
	float& TurretCopySettingsCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameState.TurretCopySettingsCooldown"); }
	float& BaseHexagonRewardMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.BaseHexagonRewardMultiplier"); }
	float& HexagonRewardMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.HexagonRewardMultiplier"); }
	float& HexagonCostMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameState.HexagonCostMultiplier"); }
	bool& bDisableHexagonStoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableHexagonStore"); }
	bool& bHexStoreAllowOnlyEngramTradeOptionField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bHexStoreAllowOnlyEngramTradeOption"); }
	bool& bAllowFlyerSpeedLevelingField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowFlyerSpeedLeveling"); }
	TArray<FString>& PreventBreedingForClassNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameState.PreventBreedingForClassNames"); }
	TArray<FString>& PreventTransferForClassNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameState.PreventTransferForClassNames"); }
	int& LiveTuningReplicatedChunkSizeField() { return *GetNativePointerField<int*>(this, "AShooterGameState.LiveTuningReplicatedChunkSize"); }
	TArray<FString>& LiveTuningOverloadChunksField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameState.LiveTuningOverloadChunks"); }
	bool& bHasAppliedLiveTuningOverloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bHasAppliedLiveTuningOverloads"); }
	int& EnvironmentIndexField() { return *GetNativePointerField<int*>(this, "AShooterGameState.EnvironmentIndex"); }
	int& NextEnvironmentIndexField() { return *GetNativePointerField<int*>(this, "AShooterGameState.NextEnvironmentIndex"); }
	long double& NextMutagenTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameState.NextMutagenTime"); }
	int& OverrideMaxExperiencePointsPlayerField() { return *GetNativePointerField<int*>(this, "AShooterGameState.OverrideMaxExperiencePointsPlayer"); }
	int& OverrideMaxExperiencePointsDinoField() { return *GetNativePointerField<int*>(this, "AShooterGameState.OverrideMaxExperiencePointsDino"); }
	bool& bDisableCustomFoldersInTributeInventoriesField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableCustomFoldersInTributeInventories"); }
	bool& bDisableRailgunPVPField() { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableRailgunPVP"); }

	// Functions

	static void BaseDrawTileOnCanvas(AShooterHUD * HUD, UTexture * Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, FColor DrawColor) { NativeCall<void, AShooterHUD *, UTexture *, float, float, float, float, float, float, float, float, FColor>(nullptr, "AShooterGameState.BaseDrawTileOnCanvas", HUD, Tex, X, Y, XL, YL, U, V, UL, VL, DrawColor); }
	void Destroyed() { NativeCall<void>(this, "AShooterGameState.Destroyed"); }
	void AddFloatingDamageText(FVector AtLocation, int DamageAmount, int FromTeamID) { NativeCall<void, FVector, int, int>(this, "AShooterGameState.AddFloatingDamageText", AtLocation, DamageAmount, FromTeamID); }
	void AddFloatingText(FVector AtLocation, FString FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, FVector TextVelocity, float MinScale, float FadeInTime, float FadeOutTime) { NativeCall<void, FVector, FString, FColor, float, float, float, FVector, float, float, float>(this, "AShooterGameState.AddFloatingText", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime); }
	bool AllowDinoClassTame(TSubclassOf<APrimalDinoCharacter> DinoCharClass, AShooterPlayerController * ForPC) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>, AShooterPlayerController *>(this, "AShooterGameState.AllowDinoClassTame", DinoCharClass, ForPC); }
	bool AllowDinoTame(APrimalDinoCharacter * DinoChar, AShooterPlayerController * ForPC) { return NativeCall<bool, APrimalDinoCharacter *, AShooterPlayerController *>(this, "AShooterGameState.AllowDinoTame", DinoChar, ForPC); }
	bool AllowDownloadDino_Implementation(TSubclassOf<APrimalDinoCharacter> TheDinoClass) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterGameState.AllowDownloadDino_Implementation", TheDinoClass); }
	void ApplyLiveTuningOverloads(TSharedPtr<FJsonObject,0> Overloads) { NativeCall<void, TSharedPtr<FJsonObject,0>>(this, "AShooterGameState.ApplyLiveTuningOverloads", Overloads); }
	TArray<APrimalDinoCharacter *> * BaseGetAllDinoCharactersOfTeam(TArray<APrimalDinoCharacter *> * result, int Team) { return NativeCall<TArray<APrimalDinoCharacter *> *, TArray<APrimalDinoCharacter *> *, int>(this, "AShooterGameState.BaseGetAllDinoCharactersOfTeam", result, Team); }
	TArray<AShooterCharacter *> * BaseGetAllShooterCharacters(TArray<AShooterCharacter *> * result) { return NativeCall<TArray<AShooterCharacter *> *, TArray<AShooterCharacter *> *>(this, "AShooterGameState.BaseGetAllShooterCharacters", result); }
	TArray<AShooterCharacter *> * BaseGetAllShooterCharactersOfTeam(TArray<AShooterCharacter *> * result, int Team) { return NativeCall<TArray<AShooterCharacter *> *, TArray<AShooterCharacter *> *, int>(this, "AShooterGameState.BaseGetAllShooterCharactersOfTeam", result, Team); }
	TArray<AShooterPlayerController *> * BaseGetAllShooterControllers(TArray<AShooterPlayerController *> * result) { return NativeCall<TArray<AShooterPlayerController *> *, TArray<AShooterPlayerController *> *>(this, "AShooterGameState.BaseGetAllShooterControllers", result); }
	void BeginPlay() { NativeCall<void>(this, "AShooterGameState.BeginPlay"); }
	bool CancelMassTeleport(AActor * WithInitiatingActor) { return NativeCall<bool, AActor *>(this, "AShooterGameState.CancelMassTeleport", WithInitiatingActor); }
	void CreateCustomGameUI(AShooterPlayerController * SceneOwner) { NativeCall<void, AShooterPlayerController *>(this, "AShooterGameState.CreateCustomGameUI", SceneOwner); }
	void DinoDownloaded(TSubclassOf<APrimalDinoCharacter> TheDinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterGameState.DinoDownloaded", TheDinoClass); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "AShooterGameState.DrawHUD", HUD); }
	void ForceNetUpdate(bool bDormantDontReplicateProperties, bool bAbsoluteForceNetUpdate, bool bDontUpdateChannel) { NativeCall<void, bool, bool, bool>(this, "AShooterGameState.ForceNetUpdate", bDormantDontReplicateProperties, bAbsoluteForceNetUpdate, bDontUpdateChannel); }
	FString * GetCleanServerSessionName(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterGameState.GetCleanServerSessionName", result); }
	float GetClientReplicationRateFor(UNetConnection * InConnection, AActor * InActor) { return NativeCall<float, UNetConnection *, AActor *>(this, "AShooterGameState.GetClientReplicationRateFor", InConnection, InActor); }
	FString * GetDayTimeString(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterGameState.GetDayTimeString", result); }
	TArray<FGameIniData> * GetIniArray(TArray<FGameIniData> * result, FString SectionName) { return NativeCall<TArray<FGameIniData> *, TArray<FGameIniData> *, FString>(this, "AShooterGameState.GetIniArray", result, SectionName); }
	bool GetItemMaxQuantityOverride(TSubclassOf<UPrimalItem> ForClass, FMaxItemQuantityOverride * OutMaxQuantity) { return NativeCall<bool, TSubclassOf<UPrimalItem>, FMaxItemQuantityOverride *>(this, "AShooterGameState.GetItemMaxQuantityOverride", ForClass, OutMaxQuantity); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AShooterGameState.GetLifetimeReplicatedProps", OutLifetimeProps); }
	static FString * GetLiveTuningOverloadsDirectory(FString * result, bool bEnsureDirectoryExists) { return NativeCall<FString *, FString *, bool>(nullptr, "AShooterGameState.GetLiveTuningOverloadsDirectory", result, bEnsureDirectoryExists); }
	FVector * GetLocalPlayerLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterGameState.GetLocalPlayerLocation", result); }
	float GetMatineePlayRate(AActor * forMatineeActor) { return NativeCall<float, AActor *>(this, "AShooterGameState.GetMatineePlayRate", forMatineeActor); }
	static long double GetNetworkTimeDelta(AShooterGameState * gameState, long double netTime, bool bTimeUntil) { return NativeCall<long double, AShooterGameState *, long double, bool>(nullptr, "AShooterGameState.GetNetworkTimeDelta", gameState, netTime, bTimeUntil); }
	long double GetOfflineDamagePreventionTime(int TargetingTeamID) { return NativeCall<long double, int>(this, "AShooterGameState.GetOfflineDamagePreventionTime", TargetingTeamID); }
	FString * GetSaveDirectoryName(FString * result, ESaveType::Type SaveType) { return NativeCall<FString *, FString *, ESaveType::Type>(this, "AShooterGameState.GetSaveDirectoryName", result, SaveType); }
	float GetServerFramerate() { return NativeCall<float>(this, "AShooterGameState.GetServerFramerate"); }
	void HTTPGetRequest(FString InURL) { NativeCall<void, FString>(this, "AShooterGameState.HTTPGetRequest", InURL); }
	void HTTPGetRequestCompleted(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameState.HTTPGetRequestCompleted", HttpRequest, HttpResponse, bSucceeded); }
	void HTTPPostRequest(FString InURL, FString Content) { NativeCall<void, FString, FString>(this, "AShooterGameState.HTTPPostRequest", InURL, Content); }
	void HTTPPostRequestCompleted(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameState.HTTPPostRequestCompleted", HttpRequest, HttpResponse, bSucceeded); }
	void InitializedGameState() { NativeCall<void>(this, "AShooterGameState.InitializedGameState"); }
	bool IsClusterServer() { return NativeCall<bool>(this, "AShooterGameState.IsClusterServer"); }
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameState.IsEngramClassHidden", ForItemClass); }
	bool IsMassTeleportInProgress(AActor * InitiatingActor) { return NativeCall<bool, AActor *>(this, "AShooterGameState.IsMassTeleportInProgress", InitiatingActor); }
	static bool IsSupportedLiveTuningProperty(UProperty * Property, bool bIgnoreLiveTuningFlag) { return NativeCall<bool, UProperty *, bool>(nullptr, "AShooterGameState.IsSupportedLiveTuningProperty", Property, bIgnoreLiveTuningFlag); }
	bool IsTeamIDInvincible(int TargetingTeamID, bool bInvincibleOnlyWhenOffline) { return NativeCall<bool, int, bool>(this, "AShooterGameState.IsTeamIDInvincible", TargetingTeamID, bInvincibleOnlyWhenOffline); }
	static bool IsValidMassTeleportData(const FMassTeleportData * CheckData) { return NativeCall<bool, const FMassTeleportData *>(nullptr, "AShooterGameState.IsValidMassTeleportData", CheckData); }
	void LevelAddedToWorld(ULevel * addedLevel) { NativeCall<void, ULevel *>(this, "AShooterGameState.LevelAddedToWorld", addedLevel); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "AShooterGameState.LoadedFromSaveGame"); }
	void Multi_SpawnCosmeticActor_Implementation(TSubclassOf<AActor> SpawnActorOfClass, const FVector SpawnAtLocation, const FRotator SpawnWithRotation) { NativeCall<void, TSubclassOf<AActor>, const FVector, const FRotator>(this, "AShooterGameState.Multi_SpawnCosmeticActor_Implementation", SpawnActorOfClass, SpawnAtLocation, SpawnWithRotation); }
	void NetAddFloatingDamageText(FVector AtLocation, int DamageAmount, int FromTeamID, int OnlySendToTeamID) { NativeCall<void, FVector, int, int, int>(this, "AShooterGameState.NetAddFloatingDamageText", AtLocation, DamageAmount, FromTeamID, OnlySendToTeamID); }
	void NetAddFloatingText(FVector AtLocation, FString FloatingTextString, FColor FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, FVector TextVelocity, float MinScale, float FadeInTime, float FadeOutTime, int OnlySendToTeamID) { NativeCall<void, FVector, FString, FColor, float, float, float, FVector, float, float, float, int>(this, "AShooterGameState.NetAddFloatingText", AtLocation, FloatingTextString, FloatingTextColor, ScaleX, ScaleY, TextLifeSpan, TextVelocity, MinScale, FadeInTime, FadeOutTime, OnlySendToTeamID); }
	void NetUpdateOfflinePvPExpiringTeams_Implementation(const TArray<int> * NewPreventOfflinePvPExpiringTeams, const TArray<double> * NewPreventOfflinePvPExpiringTimes) { NativeCall<void, const TArray<int> *, const TArray<double> *>(this, "AShooterGameState.NetUpdateOfflinePvPExpiringTeams_Implementation", NewPreventOfflinePvPExpiringTeams, NewPreventOfflinePvPExpiringTimes); }
	void NetUpdateOfflinePvPLiveTeams_Implementation(const TArray<int> * NewPreventOfflinePvPLiveTeams) { NativeCall<void, const TArray<int> *>(this, "AShooterGameState.NetUpdateOfflinePvPLiveTeams_Implementation", NewPreventOfflinePvPLiveTeams); }
	void NotifyPlayerDied(AShooterCharacter * theShooterChar, AShooterPlayerController * prevController, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, AShooterCharacter *, AShooterPlayerController *, APawn *, AActor *>(this, "AShooterGameState.NotifyPlayerDied", theShooterChar, prevController, InstigatingPawn, DamageCauser); }
	void OnRep_ReplicateLiveTuningOverloadChunks() { NativeCall<void>(this, "AShooterGameState.OnRep_ReplicateLiveTuningOverloadChunks"); }
	void OnRep_ReplicateLocalizedChatRadius() { NativeCall<void>(this, "AShooterGameState.OnRep_ReplicateLocalizedChatRadius"); }
	void OnRep_SupportedSpawnRegions() { NativeCall<void>(this, "AShooterGameState.OnRep_SupportedSpawnRegions"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterGameState.PostInitializeComponents"); }
	void PrepareActorForMassTeleport(AActor * PrepareActor, const FMassTeleportData * WithMassTeleportData) { NativeCall<void, AActor *, const FMassTeleportData *>(this, "AShooterGameState.PrepareActorForMassTeleport", PrepareActor, WithMassTeleportData); }
	void RemoveIrrelevantBiomeBuffs(APrimalCharacter * PrimalChar) { NativeCall<void, APrimalCharacter *>(this, "AShooterGameState.RemoveIrrelevantBiomeBuffs", PrimalChar); }
	void RequestFinishAndExitToMainMenu() { NativeCall<void>(this, "AShooterGameState.RequestFinishAndExitToMainMenu"); }
	void ResetLiveTuningOverloads() { NativeCall<void>(this, "AShooterGameState.ResetLiveTuningOverloads"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "AShooterGameState.Serialize", Ar); }
	void SetEnvironmentIndex(int newEnvironmentIndex) { NativeCall<void, int>(this, "AShooterGameState.SetEnvironmentIndex", newEnvironmentIndex); }
	void SetNextEnvironmentIndex(int newNextEnvironmentIndex) { NativeCall<void, int>(this, "AShooterGameState.SetNextEnvironmentIndex", newNextEnvironmentIndex); }
	bool ShouldMassTeleportMoveActor(AActor * ForActor, const FMassTeleportData * WithMassTeleportData) { return NativeCall<bool, AActor *, const FMassTeleportData *>(this, "AShooterGameState.ShouldMassTeleportMoveActor", ForActor, WithMassTeleportData); }
	bool StartMassTeleport(FMassTeleportData * NewMassTeleportData, const FTeleportDestination * TeleportDestination, AActor * InitiatingActor, TArray<AActor *> TeleportActors, TSubclassOf<APrimalBuff> BuffToApply, const float TeleportDuration, const float TeleportRadius, const bool bTeleportingSnapsToGround, const bool bMaintainRotation) { return NativeCall<bool, FMassTeleportData *, const FTeleportDestination *, AActor *, TArray<AActor *>, TSubclassOf<APrimalBuff>, const float, const float, const bool, const bool>(this, "AShooterGameState.StartMassTeleport", NewMassTeleportData, TeleportDestination, InitiatingActor, TeleportActors, BuffToApply, TeleportDuration, TeleportRadius, bTeleportingSnapsToGround, bMaintainRotation); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameState.Tick", DeltaSeconds); }
	void Tick_MassTeleport(float DeltaTime) { NativeCall<void, float>(this, "AShooterGameState.Tick_MassTeleport", DeltaTime); }
	void UpdateActiveMissionTags() { NativeCall<void>(this, "AShooterGameState.UpdateActiveMissionTags"); }
	void UpdateDynamicMusic(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameState.UpdateDynamicMusic", DeltaSeconds); }
	void UpdateFunctionExpense(int FunctionType) { NativeCall<void, int>(this, "AShooterGameState.UpdateFunctionExpense", FunctionType); }
	void UpdatePreventOfflinePvPStatus() { NativeCall<void>(this, "AShooterGameState.UpdatePreventOfflinePvPStatus"); }
	void WorldCompositionRescan() { NativeCall<void>(this, "AShooterGameState.WorldCompositionRescan"); }
	bool AllowDownloadDino(TSubclassOf<APrimalDinoCharacter> TheDinoClass) { return NativeCall<bool, TSubclassOf<APrimalDinoCharacter>>(this, "AShooterGameState.AllowDownloadDino", TheDinoClass); }
	void BPDrawGameStateHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "AShooterGameState.BPDrawGameStateHUD", HUD); }
	void HandleInitializedGameState() { NativeCall<void>(this, "AShooterGameState.HandleInitializedGameState"); }
	void NetUpdateOfflinePvPExpiringTeams(const TArray<int> * NewPreventOfflinePvPExpiringTeams, const TArray<double> * NewPreventOfflinePvPExpiringTimes) { NativeCall<void, const TArray<int> *, const TArray<double> *>(this, "AShooterGameState.NetUpdateOfflinePvPExpiringTeams", NewPreventOfflinePvPExpiringTeams, NewPreventOfflinePvPExpiringTimes); }
	void NetUpdateOfflinePvPLiveTeams(const TArray<int> * NewPreventOfflinePvPLiveTeams) { NativeCall<void, const TArray<int> *>(this, "AShooterGameState.NetUpdateOfflinePvPLiveTeams", NewPreventOfflinePvPLiveTeams); }
};

