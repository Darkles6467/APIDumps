#pragma once

#include "BaseDeclarations.h"
#include "AGameMode.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FPrimalPlayerCharacterConfigStructReplicated.h"
#include "FTribeData.h"
#include "FJsonObject.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"
#include "AMissionType_ModularMissionBase.h"
#include "APrimalEmitterSpawnable.h"
#include "UPrimalItem.h"
#include "FUniqueNetId.h"
#include "FWriteFileTaskInfo.h"

struct AShooterGameMode : AGameMode
{
	char __padding[0x2b90L];
	FWindowsCriticalSection& CheckInlineAuthResultsLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "AShooterGameMode.CheckInlineAuthResultsLock"); }
	int& LastRepopulationIndexToCheckField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LastRepopulationIndexToCheck"); }
	FString& AlarmNotificationKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.AlarmNotificationKey"); }
	FString& AlarmNotificationURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.AlarmNotificationURL"); }
	TArray<FAtlasAdminCommandTrackingEntry>& QueuedAdminCommandsField() { return *GetNativePointerField<TArray<FAtlasAdminCommandTrackingEntry>*>(this, "AShooterGameMode.QueuedAdminCommands"); }
	FString& BanFileNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BanFileName"); }
	long double& LastTimeCheckedForSaveBackupField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastTimeCheckedForSaveBackup"); }
	int& LastDayOfYearBackedUpField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LastDayOfYearBackedUp"); }
	long double& TimeLastStartedDoingRemoteBackupField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.TimeLastStartedDoingRemoteBackup"); }
	bool& InitiatedArkTributeAvailabilityCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.InitiatedArkTributeAvailabilityCheck"); }
	URCONServer * RCONSocketField() { return GetNativePointerField<URCONServer *>(this, "AShooterGameMode.RCONSocket"); }
	FString& PlayersJoinNoCheckFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersJoinNoCheckFilename"); }
	FString& PlayersExclusiveCheckFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PlayersExclusiveCheckFilename"); }
	UShooterCheatManager * GlobalCommandsCheatManagerField() { return GetNativePointerField<UShooterCheatManager *>(this, "AShooterGameMode.GlobalCommandsCheatManager"); }
	long double& LastUpdatedLoginLocksTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastUpdatedLoginLocksTime"); }
	long double& LastLoginLocksConnectedTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastLoginLocksConnectedTime"); }
	FString& CheckGlobalEnablesURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CheckGlobalEnablesURL"); }
	ATerrainActor * TerrainActorField() { return GetNativePointerField<ATerrainActor *>(this, "AShooterGameMode.TerrainActor"); }
	int& TerrainGeneratorVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TerrainGeneratorVersion"); }
	void * GameBackupPipeReadField() { return GetNativePointerField<void *>(this, "AShooterGameMode.GameBackupPipeRead"); }
	void * GameBackupPipeWriteField() { return GetNativePointerField<void *>(this, "AShooterGameMode.GameBackupPipeWrite"); }
	bool& bGlobalDisableLoginLockCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGlobalDisableLoginLockCheck"); }
	bool& bTempDisableLoginLockCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTempDisableLoginLockCheck"); }
	FString& MyServerIdField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.MyServerId"); }
	TArray<FString>& PendingLoginLockReleasesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.PendingLoginLockReleases"); }
	FString& LaunchOptionsField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LaunchOptions"); }
	TArray<FTribeData>& TribesDataField() { return *GetNativePointerField<TArray<FTribeData>*>(this, "AShooterGameMode.TribesData"); }
	TArray<APrimalDinoCharacter *>& ActivelyTamingDinosField() { return *GetNativePointerField<TArray<APrimalDinoCharacter *>*>(this, "AShooterGameMode.ActivelyTamingDinos"); }
	TSubclassOf<ATerrainActor>& TerrainActorTemplateField() { return *GetNativePointerField<TSubclassOf<ATerrainActor>*>(this, "AShooterGameMode.TerrainActorTemplate"); }
	FStringClassReference& TerrainActorClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "AShooterGameMode.TerrainActorClassName"); }
	FString& PGMapNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PGMapName"); }
	FString& PGTerrainPropertiesStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.PGTerrainPropertiesString"); }
	bool& bAutoCreateNewPlayerDataField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoCreateNewPlayerData"); }
	bool& bIsRestartingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsRestarting"); }
	bool& bProximityVoiceChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bProximityVoiceChat"); }
	bool& bProximityChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bProximityChat"); }
	bool& bAutoRestoreBackupsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoRestoreBackups"); }
	float& DifficultyValueField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValue"); }
	float& DifficultyValueMinField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMin"); }
	float& DifficultyValueMaxField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DifficultyValueMax"); }
	float& ProximityRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityRadius"); }
	float& ProximityRadiusUnconsiousScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ProximityRadiusUnconsiousScale"); }
	float& YellingRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.YellingRadius"); }
	float& WhisperRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WhisperRadius"); }
	unsigned int& VivoxAttenuationModelField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.VivoxAttenuationModel"); }
	float& VivoxMinDistanceField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.VivoxMinDistance"); }
	float& VivoxRolloffField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.VivoxRolloff"); }
	bool& bIsOfficialServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsOfficialServer"); }
	bool& bIsConsoleUnOfficialPCServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsConsoleUnOfficialPCServer"); }
	bool& bServerAllowArkDownloadField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerAllowArkDownload"); }
	bool& bServerAllowThirdPersonPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerAllowThirdPersonPlayer"); }
	bool& bUseExclusiveListField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseExclusiveList"); }
	bool& bAlwaysNotifyPlayerLeftField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysNotifyPlayerLeft"); }
	bool& bAlwaysNotifyPlayerJoinedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysNotifyPlayerJoined"); }
	bool& bServerHardcoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerHardcore"); }
	bool& bServerPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerPVE"); }
	bool& bServerCrosshairField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerCrosshair"); }
	bool& bServerForceNoHUDField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerForceNoHUD"); }
	bool& bMapPlayerLocationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bMapPlayerLocation"); }
	bool& bAllowFlyerCarryPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyerCarryPvE"); }
	bool& bDisableStructureDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableStructureDecayPvE"); }
	bool& bDisableDinoDecayPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoDecayPvE"); }
	bool& bEnablePvPGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnablePvPGamma"); }
	bool& bDisablePvEGammaField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisablePvEGamma"); }
	bool& bClampResourceHarvestDamageField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampResourceHarvestDamage"); }
	bool& bPreventStructurePaintingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventStructurePainting"); }
	bool& bAllowCaveBuildingPvEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCaveBuildingPvE"); }
	bool& bAllowCaveBuildingPvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCaveBuildingPvP"); }
	bool& bAdminLoggingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAdminLogging"); }
	bool& bPvPStructureDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvPStructureDecay"); }
	bool& bAutoDestroyStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoDestroyStructures"); }
	bool& bForceAllStructureLockingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllStructureLocking"); }
	bool& bAllowDeprecatedStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowDeprecatedStructures"); }
	bool& bPreventTribeAlliancesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventTribeAlliances"); }
	bool& bAllowHitMarkersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowHitMarkers"); }
	bool& bOnlyAutoDestroyCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyAutoDestroyCoreStructures"); }
	bool& bPreventMateBoostField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventMateBoost"); }
	bool& bTribeLogDestroyedEnemyStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTribeLogDestroyedEnemyStructures"); }
	bool& bPvEAllowStructuresAtSupplyDropsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowStructuresAtSupplyDrops"); }
	bool& bServerGameLogIncludeTribeLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerGameLogIncludeTribeLogs"); }
	bool& bServerRCONOutputTribeLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerRCONOutputTribeLogs"); }
	bool& bUseOptimizedHarvestingHealthField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseOptimizedHarvestingHealth"); }
	bool& bClampItemSpoilingTimesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampItemSpoilingTimes"); }
	bool& bClampItemStatsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bClampItemStats"); }
	bool& bAutoDestroyDecayedDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoDestroyDecayedDinos"); }
	bool& bAllowMultipleAttachedC4Field() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowMultipleAttachedC4"); }
	bool& bAllowFlyingStaminaRecoveryField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyingStaminaRecovery"); }
	bool& bCrossARKAllowForeignDinoDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCrossARKAllowForeignDinoDownloads"); }
	bool& bPreventSpawnAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventSpawnAnimations"); }
	bool& bIsLegacyServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsLegacyServer"); }
	bool& bIdlePlayerKickAllowedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIdlePlayerKickAllowed"); }
	bool& bEnableVictoryCoreDupeCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableVictoryCoreDupeCheck"); }
	bool& bIgnoreLimitMaxStructuresInRangeTypeFlagField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIgnoreLimitMaxStructuresInRangeTypeFlag"); }
	bool& bEnableOfficialOnlyVersioningCodeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableOfficialOnlyVersioningCode"); }
	bool& bEnableCryopodNerfField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableCryopodNerf"); }
	bool& bUseAlarmNotificationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseAlarmNotifications"); }
	int& TheMaxStructuresInRangeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TheMaxStructuresInRange"); }
	int& MaxStructuresInSmallRadiusField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxStructuresInSmallRadius"); }
	bool& bEnableCryoSicknessPVEField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableCryoSicknessPVE"); }
	float& CryopodNerfDamageMultField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfDamageMult"); }
	float& CryopodNerfDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfDuration"); }
	bool& bEnableMeshBitingProtectionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableMeshBitingProtection"); }
	float& CryopodNerfIncomingDamageMultPercentField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CryopodNerfIncomingDamageMultPercent"); }
	int& RCONPortField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.RCONPort"); }
	float& DayCycleSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DayCycleSpeedScale"); }
	float& NightTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.NightTimeSpeedScale"); }
	float& DayTimeSpeedScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DayTimeSpeedScale"); }
	float& PvEStructureDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvEStructureDecayPeriodMultiplier"); }
	float& StructurePreventResourceRadiusMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePreventResourceRadiusMultiplier"); }
	float& PvEDinoDecayPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvEDinoDecayPeriodMultiplier"); }
	float& MaxTamedDinosField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxTamedDinos"); }
	float& ListenServerTetherDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ListenServerTetherDistanceMultiplier"); }
	float& PerPlatformMaxStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PerPlatformMaxStructuresMultiplier"); }
	float& AutoDestroyOldStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoDestroyOldStructuresMultiplier"); }
	float& RCONServerGameLogBufferField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RCONServerGameLogBuffer"); }
	float& OxygenSwimSpeedStatMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.OxygenSwimSpeedStatMultiplier"); }
	float& ServerAutoForceRespawnWildDinosIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ServerAutoForceRespawnWildDinosInterval"); }
	float& RadiusStructuresInSmallRadiusField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RadiusStructuresInSmallRadius"); }
	float& EnableAFKKickPlayerCountPercentField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.EnableAFKKickPlayerCountPercent"); }
	float& ResourcesRespawnPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourcesRespawnPeriodMultiplier"); }
	float& KickIdlePlayersPeriodField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.KickIdlePlayersPeriod"); }
	float& MateBoostEffectMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MateBoostEffectMultiplier"); }
	float& AutoSavePeriodMinutesField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoSavePeriodMinutes"); }
	float& XPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.XPMultiplier"); }
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.ActiveEvent"); }
	float& TribeNameChangeCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeNameChangeCooldown"); }
	float& PlatformSaddleBuildAreaBoundsMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlatformSaddleBuildAreaBoundsMultiplier"); }
	bool& bAlwaysAllowStructurePickupField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAlwaysAllowStructurePickup"); }
	float& StructurePickupTimeAfterPlacementField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePickupTimeAfterPlacement"); }
	float& StructurePickupHoldDurationField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructurePickupHoldDuration"); }
	bool& bAllowIntegratedSPlusStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowIntegratedSPlusStructures"); }
	bool& bAllowHideDamageSourceFromLogsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowHideDamageSourceFromLogs"); }
	float& KillXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.KillXPMultiplier"); }
	float& HarvestXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestXPMultiplier"); }
	float& CraftXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CraftXPMultiplier"); }
	float& GenericXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GenericXPMultiplier"); }
	float& SpecialXPMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SpecialXPMultiplier"); }
	bool& TribeMergeAllowedField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.TribeMergeAllowed"); }
	float& TribeMergeCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeMergeCooldown"); }
	float& RandomAutoSaveSpreadField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RandomAutoSaveSpread"); }
	FString& SteamAPIKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.SteamAPIKey"); }
	FString& LastServerNotificationMessageField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LastServerNotificationMessage"); }
	long double& LastServerNotificationRecievedAtField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastServerNotificationRecievedAt"); }
	long double& LastExecSaveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastExecSaveTime"); }
	long double& LastTimeSavedWorldField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastTimeSavedWorld"); }
	FString& LastClaimedGameCodeField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LastClaimedGameCode"); }
	TArray<FString>& ArkGameCodesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.ArkGameCodes"); }
	bool& bIsCurrentlyRequestingKeyField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsCurrentlyRequestingKey"); }
	FString& SaveDirectoryNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.SaveDirectoryName"); }
	TArray<UPrimalPlayerData *>& PlayerDatasField() { return *GetNativePointerField<TArray<UPrimalPlayerData *>*>(this, "AShooterGameMode.PlayerDatas"); }
	int& NPCZoneManagerModField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCZoneManagerMod"); }
	bool& bPopulatingSpawnZonesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPopulatingSpawnZones"); }
	bool& bRestartedAPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRestartedAPlayer"); }
	bool& bForceRespawnDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceRespawnDinos"); }
	bool& bFirstSaveWorldField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFirstSaveWorld"); }
	bool& bAllowRaidDinoFeedingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowRaidDinoFeeding"); }
	FDateTime& LastBackupTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastBackupTime"); }
	FDateTime& LastSaveWorldTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastSaveWorldTime"); }
	float& TamedDinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoDamageMultiplier"); }
	float& DinoDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoDamageMultiplier"); }
	float& PlayerDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerDamageMultiplier"); }
	float& StructureDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureDamageMultiplier"); }
	float& PlayerResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerResistanceMultiplier"); }
	float& DinoResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoResistanceMultiplier"); }
	float& TamedDinoResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoResistanceMultiplier"); }
	float& StructureResistanceMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureResistanceMultiplier"); }
	bool& bJoinInProgressGamesAsSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bJoinInProgressGamesAsSpectator"); }
	float& TamingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamingSpeedMultiplier"); }
	float& HarvestAmountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestAmountMultiplier"); }
	float& HarvestHealthMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HarvestHealthMultiplier"); }
	float& PlayerCharacterWaterDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterWaterDrainMultiplier"); }
	float& PlayerCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterFoodDrainMultiplier"); }
	float& DinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterFoodDrainMultiplier"); }
	float& RaidDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RaidDinoCharacterFoodDrainMultiplier"); }
	float& PlayerCharacterStaminaDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterStaminaDrainMultiplier"); }
	float& DinoCharacterStaminaDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterStaminaDrainMultiplier"); }
	float& PlayerCharacterHealthRecoveryMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerCharacterHealthRecoveryMultiplier"); }
	float& DinoCharacterHealthRecoveryMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCharacterHealthRecoveryMultiplier"); }
	float& CarnivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CarnivoreNaturalTargetingRangeMultiplier"); }
	float& CarnivorePlayerAggroMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CarnivorePlayerAggroMultiplier"); }
	float& HerbivoreNaturalTargetingRangeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HerbivoreNaturalTargetingRangeMultiplier"); }
	float& HerbivorePlayerAggroMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HerbivorePlayerAggroMultiplier"); }
	bool& AIForceTargetPlayersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.AIForceTargetPlayers"); }
	bool& AIForceOverlapCheckField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.AIForceOverlapCheck"); }
	float& DinoCountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoCountMultiplier"); }
	bool& bDisableSaveLoadField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableSaveLoad"); }
	bool& bDisableXPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableXP"); }
	bool& bDisableDynamicMusicField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDynamicMusic"); }
	TArray<FPlayerDeathReason>& PlayerDeathReasonsField() { return *GetNativePointerField<TArray<FPlayerDeathReason>*>(this, "AShooterGameMode.PlayerDeathReasons"); }
	TArray<FLevelExperienceRamp>& LevelExperienceRampOverridesField() { return *GetNativePointerField<TArray<FLevelExperienceRamp>*>(this, "AShooterGameMode.LevelExperienceRampOverrides"); }
	TArray<int>& OverridePlayerLevelEngramPointsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameMode.OverridePlayerLevelEngramPoints"); }
	TArray<int>& ExcludeItemIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameMode.ExcludeItemIndices"); }
	TArray<FEngramEntryOverride>& OverrideEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride>*>(this, "AShooterGameMode.OverrideEngramEntries"); }
	TArray<FEngramEntryOverride>& OverrideNamedEngramEntriesField() { return *GetNativePointerField<TArray<FEngramEntryOverride>*>(this, "AShooterGameMode.OverrideNamedEngramEntries"); }
	TArray<FEngramEntryAutoUnlock>& EngramEntryAutoUnlocksField() { return *GetNativePointerField<TArray<FEngramEntryAutoUnlock>*>(this, "AShooterGameMode.EngramEntryAutoUnlocks"); }
	TArray<FString>& PreventDinoTameClassNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.PreventDinoTameClassNames"); }
	TArray<FDinoSpawnWeightMultiplier>& DinoSpawnWeightMultipliersField() { return *GetNativePointerField<TArray<FDinoSpawnWeightMultiplier>*>(this, "AShooterGameMode.DinoSpawnWeightMultipliers"); }
	TArray<FClassMultiplier>& DinoClassResistanceMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.DinoClassResistanceMultipliers"); }
	TArray<FClassMultiplier>& TamedDinoClassResistanceMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.TamedDinoClassResistanceMultipliers"); }
	TArray<FClassMultiplier>& DinoClassDamageMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.DinoClassDamageMultipliers"); }
	TArray<FClassMultiplier>& TamedDinoClassDamageMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.TamedDinoClassDamageMultipliers"); }
	TArray<FClassMultiplier>& HarvestResourceItemAmountClassMultipliersField() { return *GetNativePointerField<TArray<FClassMultiplier>*>(this, "AShooterGameMode.HarvestResourceItemAmountClassMultipliers"); }
	TArray<FClassNameReplacement>& NPCReplacementsField() { return *GetNativePointerField<TArray<FClassNameReplacement>*>(this, "AShooterGameMode.NPCReplacements"); }
	float& PvPZoneStructureDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PvPZoneStructureDamageMultiplier"); }
	bool& bOnlyAllowSpecifiedEngramsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyAllowSpecifiedEngrams"); }
	int& OverrideMaxExperiencePointsPlayerField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsPlayer"); }
	int& OverrideMaxExperiencePointsDinoField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.OverrideMaxExperiencePointsDino"); }
	float& GlobalSpoilingTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalSpoilingTimeMultiplier"); }
	float& GlobalItemDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalItemDecompositionTimeMultiplier"); }
	float& GlobalCorpseDecompositionTimeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalCorpseDecompositionTimeMultiplier"); }
	float& MaxFallSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxFallSpeedMultiplier"); }
	bool& bAutoPvETimerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoPvETimer"); }
	bool& bAutoPvEUseSystemTimeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoPvEUseSystemTime"); }
	bool& bUsingStructureDestructionTagField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUsingStructureDestructionTag"); }
	FName& StructureDestructionTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.StructureDestructionTag"); }
	float& AutoPvEStartTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStartTimeSeconds"); }
	float& AutoPvEStopTimeSecondsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AutoPvEStopTimeSeconds"); }
	AHibernationManager * HibernationManagerField() { return GetNativePointerField<AHibernationManager *>(this, "AShooterGameMode.HibernationManager"); }
	int& TributeItemExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeItemExpirationSeconds"); }
	int& TributeDinoExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeDinoExpirationSeconds"); }
	int& TributeCharacterExpirationSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.TributeCharacterExpirationSeconds"); }
	bool& PreventDownloadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadSurvivors"); }
	bool& PreventDownloadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadItems"); }
	bool& PreventDownloadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.PreventDownloadDinos"); }
	bool& bPreventUploadSurvivorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadSurvivors"); }
	bool& bPreventUploadItemsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadItems"); }
	bool& bPreventUploadDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventUploadDinos"); }
	int& MaxTributeItemsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeItems"); }
	int& MaxTributeDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeDinos"); }
	int& MaxTributeCharactersField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTributeCharacters"); }
	bool& bIncreasePvPRespawnIntervalField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIncreasePvPRespawnInterval"); }
	float& IncreasePvPRespawnIntervalCheckPeriodField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalCheckPeriod"); }
	float& IncreasePvPRespawnIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalMultiplier"); }
	float& IncreasePvPRespawnIntervalBaseAmountField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.IncreasePvPRespawnIntervalBaseAmount"); }
	float& ResourceNoReplenishRadiusStructuresField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusStructures"); }
	float& ResourceNoReplenishRadiusPlayersField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ResourceNoReplenishRadiusPlayers"); }
	float& CropGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropGrowthSpeedMultiplier"); }
	float& LayEggIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LayEggIntervalMultiplier"); }
	float& PoopIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PoopIntervalMultiplier"); }
	float& CropDecaySpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CropDecaySpeedMultiplier"); }
	bool& bAllowChatFromDeadNonAdminsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowChatFromDeadNonAdmins"); }
	bool& bAllowDisablingSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowDisablingSpectator"); }
	bool& bPvEDisableFriendlyFireField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEDisableFriendlyFire"); }
	bool& bFlyerPlatformAllowUnalignedDinoBasingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFlyerPlatformAllowUnalignedDinoBasing"); }
	bool& bAllowUnclaimDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowUnclaimDinos"); }
	int& MaxPerTribePlatformSaddleStructureLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPerTribePlatformSaddleStructureLimit"); }
	int& MaxPlatformSaddleStructureLimitField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPlatformSaddleStructureLimit"); }
	int& MaxDinoBaseLevelField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxDinoBaseLevel"); }
	int& MaxNumberOfPlayersInTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxNumberOfPlayersInTribe"); }
	float& TribeSlotReuseCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TribeSlotReuseCooldown"); }
	float& MatingIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MatingIntervalMultiplier"); }
	float& EggHatchSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.EggHatchSpeedMultiplier"); }
	float& BabyMatureSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyMatureSpeedMultiplier"); }
	float& BabyFoodConsumptionSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyFoodConsumptionSpeedMultiplier"); }
	int& CurrentPlatformSaddleStructuresField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.CurrentPlatformSaddleStructures"); }
	FieldArray<float, 12> PerLevelStatsMultiplier_PlayerField() { return {this, "AShooterGameMode.PerLevelStatsMultiplier_Player"}; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamedField() { return {this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed"}; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamed_AddField() { return {this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Add"}; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoTamed_AffinityField() { return {this, "AShooterGameMode.PerLevelStatsMultiplier_DinoTamed_Affinity"}; }
	FieldArray<float, 12> PerLevelStatsMultiplier_DinoWildField() { return {this, "AShooterGameMode.PerLevelStatsMultiplier_DinoWild"}; }
	FieldArray<int, 12> MutagenLevelBoostField() { return {this, "AShooterGameMode.MutagenLevelBoost"}; }
	FieldArray<int, 12> MutagenLevelBoost_BredField() { return {this, "AShooterGameMode.MutagenLevelBoost_Bred"}; }
	FieldArray<int, 8> ItemStatClampsField() { return {this, "AShooterGameMode.ItemStatClamps"}; }
	int& MaxGateFrameOnSaddlesField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxGateFrameOnSaddles"); }
	int& MaxHexagonsPerCharacterField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxHexagonsPerCharacter"); }
	bool& bCustomGameModeAllowSpectatorJoinAfterMatchStartField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCustomGameModeAllowSpectatorJoinAfterMatchStart"); }
	bool& bGameplayLogEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGameplayLogEnabled"); }
	bool& bServerGameLogEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerGameLogEnabled"); }
	float& BonusSupplyCrateItemGiveIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BonusSupplyCrateItemGiveInterval"); }
	float& StructureDamageRepairCooldownField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.StructureDamageRepairCooldown"); }
	float& CustomRecipeEffectivenessMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeEffectivenessMultiplier"); }
	float& CustomRecipeSkillMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CustomRecipeSkillMultiplier"); }
	FString& BonusSupplyCrateItemStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.BonusSupplyCrateItemString"); }
	bool& bPvEAllowTribeWarField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowTribeWar"); }
	bool& bPvEAllowTribeWarCancelField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvEAllowTribeWarCancel"); }
	bool& bAllowCustomRecipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCustomRecipes"); }
	bool& bPassiveDefensesDamageRiderlessDinosField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPassiveDefensesDamageRiderlessDinos"); }
	long double& LastBonusSupplyCrateItemGiveTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.LastBonusSupplyCrateItemGiveTime"); }
	bool& bEnableDeathTeamSpectatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableDeathTeamSpectator"); }
	bool& bTribeStoreCharacterConfigurationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bTribeStoreCharacterConfiguration"); }
	int& MaxTribeLogsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribeLogs"); }
	int& MaxPersonalTamedDinosField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxPersonalTamedDinos"); }
	int& PersonalTamedDinosSaddleStructureCostField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.PersonalTamedDinosSaddleStructureCost"); }
	TArray<FString>& CachedGameLogField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.CachedGameLog"); }
	bool& bDisableFriendlyFireField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableFriendlyFire"); }
	bool& bAllowInactiveTribesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowInactiveTribes"); }
	bool& bForceMapPlayerLocationField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceMapPlayerLocation"); }
	float& DinoHarvestingDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoHarvestingDamageMultiplier"); }
	float& PlayerHarvestingDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PlayerHarvestingDamageMultiplier"); }
	float& DinoTurretDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.DinoTurretDamageMultiplier"); }
	bool& bDisableLootCratesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableLootCrates"); }
	float& ExtinctionEventTimeIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ExtinctionEventTimeInterval"); }
	bool& bEnableExtraStructurePreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableExtraStructurePreventionVolumes"); }
	unsigned int& NextExtinctionEventUTCField() { return *GetNativePointerField<unsigned int*>(this, "AShooterGameMode.NextExtinctionEventUTC"); }
	bool& bForceAllowCaveFlyersField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowCaveFlyers"); }
	bool& bDoExtinctionEventField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDoExtinctionEvent"); }
	bool& bPreventOfflinePvPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventOfflinePvP"); }
	bool& bPvPDinoDecayField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPvPDinoDecay"); }
	bool& bOverideStructurePlatformPreventionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOverideStructurePlatformPrevention"); }
	bool& bAllowAnyoneBabyImprintCuddleField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowAnyoneBabyImprintCuddle"); }
	bool& bDisableImprintDinoBuffField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableImprintDinoBuff"); }
	bool& bOnlyDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOnlyDecayUnsnappedCoreStructures"); }
	bool& bFastDecayUnsnappedCoreStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bFastDecayUnsnappedCoreStructures"); }
	bool& bDestroyUnconnectedWaterPipesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDestroyUnconnectedWaterPipes"); }
	bool& bAllowCrateSpawnsOnTopOfStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowCrateSpawnsOnTopOfStructures"); }
	bool& bNotifyAdminCommandsInChatField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNotifyAdminCommandsInChat"); }
	bool& bRandomSupplyCratePointsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bRandomSupplyCratePoints"); }
	bool& bOfficialDisableGenesisMissionsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bOfficialDisableGenesisMissions"); }
	bool& bAllowSharedConnectionsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowSharedConnections"); }
	bool& bPreventOutOfTribePinCodeUseField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventOutOfTribePinCodeUse"); }
	bool& bDisabledTranfersDueToRedisConnectionLostField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisabledTranfersDueToRedisConnectionLost"); }
	float& PreventOfflinePvPIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PreventOfflinePvPInterval"); }
	bool& bShowFloatingDamageTextField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bShowFloatingDamageText"); }
	bool& bAllowTekSuitPowersInGenesisField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowTekSuitPowersInGenesis"); }
	FString& CurrentMerticsURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentMerticsURL"); }
	FString& CurrentNotificationURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentNotificationURL"); }
	FString& CurrentAdminCommandTrackingAPIKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentAdminCommandTrackingAPIKey"); }
	FString& CurrentAdminCommandTrackingURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentAdminCommandTrackingURL"); }
	TArray<FItemCraftingCostOverride>& OverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FItemCraftingCostOverride>*>(this, "AShooterGameMode.OverrideItemCraftingCosts"); }
	TArray<FConfigItemCraftingCostOverride>& ConfigOverrideItemCraftingCostsField() { return *GetNativePointerField<TArray<FConfigItemCraftingCostOverride>*>(this, "AShooterGameMode.ConfigOverrideItemCraftingCosts"); }
	TArray<FConfigMaxItemQuantityOverride>& ConfigOverrideItemMaxQuantityField() { return *GetNativePointerField<TArray<FConfigMaxItemQuantityOverride>*>(this, "AShooterGameMode.ConfigOverrideItemMaxQuantity"); }
	TArray<FConfigSupplyCrateItemsOverride>& ConfigOverrideSupplyCrateItemsField() { return *GetNativePointerField<TArray<FConfigSupplyCrateItemsOverride>*>(this, "AShooterGameMode.ConfigOverrideSupplyCrateItems"); }
	TArray<FConfigNPCSpawnEntriesContainer>& ConfigOverrideNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer>*>(this, "AShooterGameMode.ConfigOverrideNPCSpawnEntriesContainer"); }
	TArray<FConfigNPCSpawnEntriesContainer>& ConfigAddNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer>*>(this, "AShooterGameMode.ConfigAddNPCSpawnEntriesContainer"); }
	TArray<FConfigNPCSpawnEntriesContainer>& ConfigSubtractNPCSpawnEntriesContainerField() { return *GetNativePointerField<TArray<FConfigNPCSpawnEntriesContainer>*>(this, "AShooterGameMode.ConfigSubtractNPCSpawnEntriesContainer"); }
	float& BabyImprintingStatScaleMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyImprintingStatScaleMultiplier"); }
	float& BabyCuddleIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleIntervalMultiplier"); }
	float& BabyImprintAmountMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyImprintAmountMultiplier"); }
	float& BabyCuddleGracePeriodMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleGracePeriodMultiplier"); }
	float& BabyCuddleLoseImprintQualitySpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BabyCuddleLoseImprintQualitySpeedMultiplier"); }
	float& HairGrowthSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HairGrowthSpeedMultiplier"); }
	bool& bPreventDiseasesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bPreventDiseases"); }
	bool& bNonPermanentDiseasesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bNonPermanentDiseases"); }
	UAllClustersInventory * AllClustersInventoryField() { return GetNativePointerField<UAllClustersInventory *>(this, "AShooterGameMode.AllClustersInventory"); }
	int& SaveForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveForceRespawnDinosVersion"); }
	unsigned __int64& ServerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterGameMode.ServerID"); }
	int& LoadForceRespawnDinosVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LoadForceRespawnDinosVersion"); }
	bool& bIsLoadedServerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsLoadedServer"); }
	TArray<int>& SupportedSpawnRegionsField() { return *GetNativePointerField<TArray<int>*>(this, "AShooterGameMode.SupportedSpawnRegions"); }
	bool& bServerUseDinoListField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerUseDinoList"); }
	float& MaxAllowedRespawnIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MaxAllowedRespawnInterval"); }
	bool& bUseDinoLevelUpAnimationsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseDinoLevelUpAnimations"); }
	bool& bDisableDinoTamingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoTaming"); }
	bool& bDisableDinoRidingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoRiding"); }
	float& MinimumDinoReuploadIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MinimumDinoReuploadInterval"); }
	int& SaveGameCustomVersionField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.SaveGameCustomVersion"); }
	float& OverrideOfficialDifficultyField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.OverrideOfficialDifficulty"); }
	FieldArray<float, 12> PlayerBaseStatMultipliersField() { return {this, "AShooterGameMode.PlayerBaseStatMultipliers"}; }
	int& NPCActiveCountTamedField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCountTamed"); }
	int& NPCActiveCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCActiveCount"); }
	int& NPCCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.NPCCount"); }
	float& RTSModeNumSelectableDinosScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSModeNumSelectableDinosScale"); }
	float& RTSMaxRangeFromPlayerCharacterScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSMaxRangeFromPlayerCharacterScale"); }
	float& RTSProximityToEnemyStructureScaleField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RTSProximityToEnemyStructureScale"); }
	float& MatingSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MatingSpeedMultiplier"); }
	float& FastDecayIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FastDecayInterval"); }
	bool& bUseSingleplayerSettingsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseSingleplayerSettings"); }
	bool& bUseCorpseLocatorField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseCorpseLocator"); }
	bool& bDisableGenesisMissionsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableGenesisMissions"); }
	bool& bDisableStructurePlacementCollisionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableStructurePlacementCollision"); }
	bool& bForceUseInventoryAppendsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceUseInventoryAppends"); }
	float& SupplyCrateLootQualityMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SupplyCrateLootQualityMultiplier"); }
	float& FishingLootQualityMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FishingLootQualityMultiplier"); }
	float& ItemStackSizeMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ItemStackSizeMultiplier"); }
	float& CraftingSkillBonusMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.CraftingSkillBonusMultiplier"); }
	bool& bAllowPlatformSaddleMultiFloorsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowPlatformSaddleMultiFloors"); }
	bool& bAllowUnlimitedRespecsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowUnlimitedRespecs"); }
	float& FuelConsumptionIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.FuelConsumptionIntervalMultiplier"); }
	int& DestroyTamesOverLevelClampField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.DestroyTamesOverLevelClamp"); }
	int& MaxAlliancesPerTribeField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxAlliancesPerTribe"); }
	int& MaxTribesPerAllianceField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxTribesPerAlliance"); }
	bool& bDisableDinoDecayClaimingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoDecayClaiming"); }
	bool& bDisableNonTribePinAccessField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableNonTribePinAccess"); }
	bool& bUseTameLimitForStructuresOnlyField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseTameLimitForStructuresOnly"); }
	bool& bLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLimitTurretsInRange"); }
	float& LimitTurretsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitTurretsRange"); }
	int& LimitTurretsNumField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitTurretsNum"); }
	bool& bHardLimitTurretsInRangeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHardLimitTurretsInRange"); }
	bool& bAutoUnlockAllEngramsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAutoUnlockAllEngrams"); }
	long double& ServerLastForceRespawnWildDinosTimeField() { return *GetNativePointerField<long double*>(this, "AShooterGameMode.ServerLastForceRespawnWildDinosTime"); }
	FString& UseStructurePreventionVolumeTagStringField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.UseStructurePreventionVolumeTagString"); }
	float& BaseTemperatureMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BaseTemperatureMultiplier"); }
	bool& bForceAllowAllStructuresField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowAllStructures"); }
	bool& bForceAllowAscensionItemDownloadsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bForceAllowAscensionItemDownloads"); }
	bool& bShowCreativeModeField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bShowCreativeMode"); }
	float& LimitNonPlayerDroppedItemsRangeField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.LimitNonPlayerDroppedItemsRange"); }
	int& LimitNonPlayerDroppedItemsCountField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.LimitNonPlayerDroppedItemsCount"); }
	float& GlobalPoweredBatteryDurabilityDecreasePerSecondField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.GlobalPoweredBatteryDurabilityDecreasePerSecond"); }
	float& SingleplayerSettingsCorpseLifespanMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.SingleplayerSettingsCorpseLifespanMultiplier"); }
	float& UseCorpseLifeSpanMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.UseCorpseLifeSpanMultiplier"); }
	float& TimePeriodToHideDisconnectedPlayersField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TimePeriodToHideDisconnectedPlayers"); }
	bool& bUseBPPreSpawnedDinoField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseBPPreSpawnedDino"); }
	float& PreventOfflinePvPConnectionInvincibleIntervalField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PreventOfflinePvPConnectionInvincibleInterval"); }
	float& TamedDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoCharacterFoodDrainMultiplier"); }
	float& WildDinoCharacterFoodDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoCharacterFoodDrainMultiplier"); }
	float& WildDinoTorporDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WildDinoTorporDrainMultiplier"); }
	float& PassiveTameIntervalMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.PassiveTameIntervalMultiplier"); }
	float& TamedDinoTorporDrainMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.TamedDinoTorporDrainMultiplier"); }
	bool& bDisableWeatherFogField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWeatherFog"); }
	float& MeshCheckingRayDistanceField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingRayDistance"); }
	float& MeshCheckingSubdivisonsField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingSubdivisons"); }
	float& MeshCheckingPercentageToFailField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.MeshCheckingPercentageToFail"); }
	bool& bIgnoreStructuresPreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIgnoreStructuresPreventionVolumes"); }
	bool& bGenesisUseStructuresPreventionVolumesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bGenesisUseStructuresPreventionVolumes"); }
	bool& bServerEnableMeshCheckingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bServerEnableMeshChecking"); }
	FString& LiveTuningFileNameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.LiveTuningFileName"); }
	FString& ArkServerMetricsKeyField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.ArkServerMetricsKey"); }
	FString& ArkServerMetricsURLField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.ArkServerMetricsURL"); }
	TArray<FString>& CachedArkMetricsPayloadsField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.CachedArkMetricsPayloads"); }
	bool& bCollectArkMetricsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCollectArkMetrics"); }
	bool& bLogChatMessagesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bLogChatMessages"); }
	int& ChatLogFlushIntervalSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogFlushIntervalSeconds"); }
	int& ChatLogFileSplitIntervalSecondsField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogFileSplitIntervalSeconds"); }
	int& ChatLogMaxAgeInDaysField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.ChatLogMaxAgeInDays"); }
	TArray<TSharedPtr<FJsonObject,0>>& ChatMessageBufferField() { return *GetNativePointerField<TArray<TSharedPtr<FJsonObject,0>>*>(this, "AShooterGameMode.ChatMessageBuffer"); }
	FString& CurrentChatLogFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentChatLogFilename"); }
	FDateTime& LastChatLogFlushTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastChatLogFlushTime"); }
	FDateTime& LastChatLogFileCreateTimeField() { return *GetNativePointerField<FDateTime*>(this, "AShooterGameMode.LastChatLogFileCreateTime"); }
	bool& bDamageEventLoggingEnabledField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDamageEventLoggingEnabled"); }
	bool& bIsGenesisMapField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsGenesisMap"); }
	bool& bIsGenesis2MapField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bIsGenesis2Map"); }
	TArray<TSharedPtr<FJsonObject,0>>& DamageEventBufferField() { return *GetNativePointerField<TArray<TSharedPtr<FJsonObject,0>>*>(this, "AShooterGameMode.DamageEventBuffer"); }
	FString& CurrentDamageEventLogFilenameField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.CurrentDamageEventLogFilename"); }
	FLeaderboardsContainer& LeaderboardContainerField() { return *GetNativePointerField<FLeaderboardsContainer*>(this, "AShooterGameMode.LeaderboardContainer"); }
	FName& UseStructurePreventionVolumeTagField() { return *GetNativePointerField<FName*>(this, "AShooterGameMode.UseStructurePreventionVolumeTag"); }
	bool& bHasCovertedToStoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHasCovertedToStore"); }
	bool& bAllowStoredDatasField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowStoredDatas"); }
	bool& bBackupTransferProfilesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bBackupTransferProfiles"); }
	FDataStore<unsigned int>& TribeDataStoreField() { return *GetNativePointerField<FDataStore<unsigned int>*>(this, "AShooterGameMode.TribeDataStore"); }
	FDataStore<unsigned __int64>& PlayerDataStoreField() { return *GetNativePointerField<FDataStore<unsigned __int64>*>(this, "AShooterGameMode.PlayerDataStore"); }
	AOceanDinoManager * TheOceanDinoManagerField() { return GetNativePointerField<AOceanDinoManager *>(this, "AShooterGameMode.TheOceanDinoManager"); }
	bool& bCheckedForOceanDinoManagerField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bCheckedForOceanDinoManager"); }
	TArray<FBuffAddition>& AdditionalDefaultBuffsField() { return *GetNativePointerField<TArray<FBuffAddition>*>(this, "AShooterGameMode.AdditionalDefaultBuffs"); }
	bool& bParseServerToJsonField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bParseServerToJson"); }
	FStasisGrid& MyStasisGridField() { return *GetNativePointerField<FStasisGrid*>(this, "AShooterGameMode.MyStasisGrid"); }
	TArray<FWorldBuffTrackerItem>& WorldBuffsField() { return *GetNativePointerField<TArray<FWorldBuffTrackerItem>*>(this, "AShooterGameMode.WorldBuffs"); }
	TArray<FPropertyModificationsTracker>& WorldBuffPropertyModificationsTrackersField() { return *GetNativePointerField<TArray<FPropertyModificationsTracker>*>(this, "AShooterGameMode.WorldBuffPropertyModificationsTrackers"); }
	float& BaseHexagonRewardMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.BaseHexagonRewardMultiplier"); }
	float& HexagonRewardMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HexagonRewardMultiplier"); }
	float& HexagonCostMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.HexagonCostMultiplier"); }
	bool& bDisableHexagonStoreField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableHexagonStore"); }
	bool& bHexStoreAllowOnlyEngramTradeOptionField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bHexStoreAllowOnlyEngramTradeOption"); }
	TArray<FClassNameReplacement>& DynamicNPCReplacementsField() { return *GetNativePointerField<TArray<FClassNameReplacement>*>(this, "AShooterGameMode.DynamicNPCReplacements"); }
	TArray<FClassNameReplacement>& CollectiveNPCReplacementsField() { return *GetNativePointerField<TArray<FClassNameReplacement>*>(this, "AShooterGameMode.CollectiveNPCReplacements"); }
	bool& bAllowFlyerSpeedLevelingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bAllowFlyerSpeedLeveling"); }
	TArray<FString>& PreventBreedingForClassNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.PreventBreedingForClassNames"); }
	bool& bDisableDinoBreedingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDinoBreeding"); }
	TArray<FString>& PreventTransferForClassNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "AShooterGameMode.PreventTransferForClassNames"); }
	bool& bEnableWorldBuffScalingField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bEnableWorldBuffScaling"); }
	float& WorldBuffScalingEfficacyField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.WorldBuffScalingEfficacy"); }
	bool& bDisableWorldBuffsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableWorldBuffs"); }
	TArray<FCrateTemporaryQualityModifierSet>& TemporaryCrateModifiersField() { return *GetNativePointerField<TArray<FCrateTemporaryQualityModifierSet>*>(this, "AShooterGameMode.TemporaryCrateModifiers"); }
	TArray<FResourceTemporaryAmountModifierSet>& TemporaryResourceModifiersField() { return *GetNativePointerField<TArray<FResourceTemporaryAmountModifierSet>*>(this, "AShooterGameMode.TemporaryResourceModifiers"); }
	float& AdjustableMutagenSpawnDelayMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.AdjustableMutagenSpawnDelayMultiplier"); }
	bool& bDisableDefaultMapItemSetsField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableDefaultMapItemSets"); }
	int& EggsHatchedThisFrameField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.EggsHatchedThisFrame"); }
	float& RedisTimeoutInMinutesField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.RedisTimeoutInMinutes"); }
	bool& RestartedDueToRedisTimeoutField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.RestartedDueToRedisTimeout"); }
	TArray<FName>& DynamicDisabledWorldBuffsField() { return *GetNativePointerField<TArray<FName>*>(this, "AShooterGameMode.DynamicDisabledWorldBuffs"); }
	FString& DynamicUndermeshRegionsRawField() { return *GetNativePointerField<FString*>(this, "AShooterGameMode.DynamicUndermeshRegionsRaw"); }
	bool& bDisableCustomFoldersInTributeInventoriesField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableCustomFoldersInTributeInventories"); }
	bool& bDisableRailgunPVPField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bDisableRailgunPVP"); }
	float& ImprintLimitField() { return *GetNativePointerField<float*>(this, "AShooterGameMode.ImprintLimit"); }
	bool& bUseSecureSpawningField() { return *GetNativePointerField<bool*>(this, "AShooterGameMode.bUseSecureSpawning"); }
	int& MaxConnectionsFromSameIPField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxConnectionsFromSameIP"); }
	int& MaxStructuresToAllowForPickupOverrideField() { return *GetNativePointerField<int*>(this, "AShooterGameMode.MaxStructuresToAllowForPickupOverride"); }

	// Functions

	bool AllowAddXP(UPrimalCharacterStatusComponent * forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent *>(this, "AShooterGameMode.AllowAddXP", forComp); }
	int GetMaxConnectionFromSameIP() { return NativeCall<int>(this, "AShooterGameMode.GetMaxConnectionFromSameIP"); }
	void ActorDestroyed(AActor * theActor) { NativeCall<void, AActor *>(this, "AShooterGameMode.ActorDestroyed", theActor); }
	void ActorStasised(AActor * theActor) { NativeCall<void, AActor *>(this, "AShooterGameMode.ActorStasised", theActor); }
	void ActorUnstasised(AActor * theActor) { NativeCall<void, AActor *>(this, "AShooterGameMode.ActorUnstasised", theActor); }
	unsigned __int64 AddNewTribe(AShooterPlayerState * PlayerOwner, const FString * TribeName, const FTribeGovernment * TribeGovernment) { return NativeCall<unsigned __int64, AShooterPlayerState *, const FString *, const FTribeGovernment *>(this, "AShooterGameMode.AddNewTribe", PlayerOwner, TribeName, TribeGovernment); }
	void AddPlayerID(int playerDataID, unsigned __int64 netUniqueID) { NativeCall<void, int, unsigned __int64>(this, "AShooterGameMode.AddPlayerID", playerDataID, netUniqueID); }
	void AddToTribeLog(int TribeId, const FString * NewLog) { NativeCall<void, int, const FString *>(this, "AShooterGameMode.AddToTribeLog", TribeId, NewLog); }
	void AddTrackedAdminCommand(APlayerController * Controller, const FString * CommandType, const FString * Command) { NativeCall<void, APlayerController *, const FString *, const FString *>(this, "AShooterGameMode.AddTrackedAdminCommand", Controller, CommandType, Command); }
	void AddTribeWar(int MyTribeID, int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime, bool bForceApprove) { NativeCall<void, int, int, int, int, float, float, bool>(this, "AShooterGameMode.AddTribeWar", MyTribeID, EnemyTeamID, StartDayNum, EndDayNumber, WarStartTime, WarEndTime, bForceApprove); }
	void AdjustDamage(AActor * Victim, float * Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, AActor *, float *, const FDamageEvent *, AController *, AActor *>(this, "AShooterGameMode.AdjustDamage", Victim, Damage, DamageEvent, EventInstigator, DamageCauser); }
	static bool AllowDamage(UWorld * ForWorld, int TargetingTeam1, int TargetingTeam2, bool bIgnoreDamageIfAllied) { return NativeCall<bool, UWorld *, int, int, bool>(nullptr, "AShooterGameMode.AllowDamage", ForWorld, TargetingTeam1, TargetingTeam2, bIgnoreDamageIfAllied); }
	void AllowPlayerToJoinNoCheck(const FUniqueNetIdUInt64 * PlayerId) { NativeCall<void, const FUniqueNetIdUInt64 *>(this, "AShooterGameMode.AllowPlayerToJoinNoCheck", PlayerId); }
	bool AllowRenameTribe(AShooterPlayerState * ForPlayerState, const FString * TribeName) { return NativeCall<bool, AShooterPlayerState *, const FString *>(this, "AShooterGameMode.AllowRenameTribe", ForPlayerState, TribeName); }
	bool AllowTaming(int ForTeam) { return NativeCall<bool, int>(this, "AShooterGameMode.AllowTaming", ForTeam); }
	bool AreTribesAllied(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.AreTribesAllied", TribeID1, TribeID2); }
	void ArkGlobalCommand(FString Command) { NativeCall<void, FString>(this, "AShooterGameMode.ArkGlobalCommand", Command); }
	void ArkMetricsAppend(const FString * Type, TSharedPtr<FJsonObject,0> Payload) { NativeCall<void, const FString *, TSharedPtr<FJsonObject,0>>(this, "AShooterGameMode.ArkMetricsAppend", Type, Payload); }
	void ArkTributeAvailabilityRequestComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameMode.ArkTributeAvailabilityRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	bool BPIsSpawnpointAllowed_Implementation(APlayerStart * SpawnPoint, AController * Player) { return NativeCall<bool, APlayerStart *, AController *>(this, "AShooterGameMode.BPIsSpawnpointAllowed_Implementation", SpawnPoint, Player); }
	bool BPIsSpawnpointPreferred_Implementation(APlayerStart * SpawnPoint, AController * Player) { return NativeCall<bool, APlayerStart *, AController *>(this, "AShooterGameMode.BPIsSpawnpointPreferred_Implementation", SpawnPoint, Player); }
	bool BanPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.BanPlayer", PlayerSteamName, PlayerSteamID); }
	void BeginPlay() { NativeCall<void>(this, "AShooterGameMode.BeginPlay"); }
	void BeginUnloadingWorld() { NativeCall<void>(this, "AShooterGameMode.BeginUnloadingWorld"); }
	bool CanDealDamage(APlayerStart * SpawnPoint, AController * Player) { return NativeCall<bool, APlayerStart *, AController *>(this, "AShooterGameMode.CanDealDamage", SpawnPoint, Player); }
	void ChatLogAppend(AShooterPlayerController * SenderController, const FChatMessage * Msg) { NativeCall<void, AShooterPlayerController *, const FChatMessage *>(this, "AShooterGameMode.ChatLogAppend", SenderController, Msg); }
	void ChatLogFlush(bool bFinalize) { NativeCall<void, bool>(this, "AShooterGameMode.ChatLogFlush", bFinalize); }
	void ChatLogFlushOnTick() { NativeCall<void>(this, "AShooterGameMode.ChatLogFlushOnTick"); }
	void CheckArkTributeAvailability() { NativeCall<void>(this, "AShooterGameMode.CheckArkTributeAvailability"); }
	void CheckForDupedDinos() { NativeCall<void>(this, "AShooterGameMode.CheckForDupedDinos"); }
	void CheckForRepopulation() { NativeCall<void>(this, "AShooterGameMode.CheckForRepopulation"); }
	void CheckGlobalEnables() { NativeCall<void>(this, "AShooterGameMode.CheckGlobalEnables"); }
	void CheckIsOfficialServer() { NativeCall<void>(this, "AShooterGameMode.CheckIsOfficialServer"); }
	bool CheckJoinInProgress_Implementation(bool bIsFromLogin, APlayerController * NewPlayer) { return NativeCall<bool, bool, APlayerController *>(this, "AShooterGameMode.CheckJoinInProgress_Implementation", bIsFromLogin, NewPlayer); }
	void ClearLastMissionDeactivatedTime(TSubclassOf<AMissionType> MissionType) { NativeCall<void, TSubclassOf<AMissionType>>(this, "AShooterGameMode.ClearLastMissionDeactivatedTime", MissionType); }
	void ClearSavesAndRestart() { NativeCall<void>(this, "AShooterGameMode.ClearSavesAndRestart"); }
	int CountOverlappingDinoCharactersOfTeamAndClass(const FVector * AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<int, const FVector *, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(this, "AShooterGameMode.CountOverlappingDinoCharactersOfTeamAndClass", AtLocation, OverlapRange, DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	void DDoSDetected() { NativeCall<void>(this, "AShooterGameMode.DDoSDetected"); }
	void DamageEventLogFlush() { NativeCall<void>(this, "AShooterGameMode.DamageEventLogFlush"); }
	void DeletePlayerData(AShooterPlayerState * PlayerState) { NativeCall<void, AShooterPlayerState *>(this, "AShooterGameMode.DeletePlayerData", PlayerState); }
	void DisallowPlayerToJoinNoCheck(const FUniqueNetIdUInt64 * PlayerId) { NativeCall<void, const FUniqueNetIdUInt64 *>(this, "AShooterGameMode.DisallowPlayerToJoinNoCheck", PlayerId); }
	FString * DoGameCommand(FString * result, const FString * TheCommand) { return NativeCall<FString *, FString *, const FString *>(this, "AShooterGameMode.DoGameCommand", result, TheCommand); }
	void DownloadTransferredPlayer(AShooterPlayerController * NewPlayer) { NativeCall<void, AShooterPlayerController *>(this, "AShooterGameMode.DownloadTransferredPlayer", NewPlayer); }
	bool DumpAssetProperties(const FString * Asset, FString * OutFilename) { return NativeCall<bool, const FString *, FString *>(this, "AShooterGameMode.DumpAssetProperties", Asset, OutFilename); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AShooterGameMode.EndPlay", EndPlayReason); }
	bool ExtraPreLoginChecksBeforeWelcomePlayer(UNetConnection * Connection) { return NativeCall<bool, UNetConnection *>(this, "AShooterGameMode.ExtraPreLoginChecksBeforeWelcomePlayer", Connection); }
	void FlushPrimalStats(AShooterPlayerController * ForPC) { NativeCall<void, AShooterPlayerController *>(this, "AShooterGameMode.FlushPrimalStats", ForPC); }
	int ForceAddPlayerToTribe(AShooterPlayerState * ForPlayerState, const FString * TribeName) { return NativeCall<int, AShooterPlayerState *, const FString *>(this, "AShooterGameMode.ForceAddPlayerToTribe", ForPlayerState, TribeName); }
	int ForceCreateTribe(const FString * TribeName, int TeamOverride) { return NativeCall<int, const FString *, int>(this, "AShooterGameMode.ForceCreateTribe", TribeName, TeamOverride); }
	void ForceRepopulateAllHarvestElements(FVector AtPoint, float MaxRangeFromPoint) { NativeCall<void, FVector, float>(this, "AShooterGameMode.ForceRepopulateAllHarvestElements", AtPoint, MaxRangeFromPoint); }
	void ForceRepopulateFoliageAtPoint(FVector AtPoint, float MaxRangeFromPoint, int MaxNumFoliages, TSubclassOf<APrimalEmitterSpawnable> RepopulatedEmitter, const FVector * StructureDownTraceVector, const FVector * StructureUpTraceVector, bool bDontCheckForOverlaps, int TriggeredByTeamID, bool bCheckAreaAroundEachIndividualFoliage, float RadiusAroundEachIndivitualFoliageToCheck) { NativeCall<void, FVector, float, int, TSubclassOf<APrimalEmitterSpawnable>, const FVector *, const FVector *, bool, int, bool, float>(this, "AShooterGameMode.ForceRepopulateFoliageAtPoint", AtPoint, MaxRangeFromPoint, MaxNumFoliages, RepopulatedEmitter, StructureDownTraceVector, StructureUpTraceVector, bDontCheckForOverlaps, TriggeredByTeamID, bCheckAreaAroundEachIndividualFoliage, RadiusAroundEachIndivitualFoliageToCheck); }
	FString * GeneratePGMapFolderName(FString * result, TMap<FString,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,FString,0> > PGMapOptionsString) { return NativeCall<FString *, FString *, TMap<FString,FString,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,FString,0> >>(this, "AShooterGameMode.GeneratePGMapFolderName", result, PGMapOptionsString); }
	unsigned int GeneratePlayerDataId(unsigned __int64 NetUniqueID) { return NativeCall<unsigned int, unsigned __int64>(this, "AShooterGameMode.GeneratePlayerDataId", NetUniqueID); }
	FString * GenerateProfileFileName(FString * result, FUniqueNetIdRepl * UniqueId, FString * NetworkAddresss, FString * PlayerName) { return NativeCall<FString *, FString *, FUniqueNetIdRepl *, FString *, FString *>(this, "AShooterGameMode.GenerateProfileFileName", result, UniqueId, NetworkAddresss, PlayerName); }
	unsigned int GenerateTribeId() { return NativeCall<unsigned int>(this, "AShooterGameMode.GenerateTribeId"); }
	void GetActorSaveGameTypes(TArray<TSubclassOf<AActor>> * saveGameTypes) { NativeCall<void, TArray<TSubclassOf<AActor>> *>(this, "AShooterGameMode.GetActorSaveGameTypes", saveGameTypes); }
	bool GetBoolOption(const FString * Options, const FString * ParseString, bool CurrentValue) { return NativeCall<bool, const FString *, const FString *, bool>(this, "AShooterGameMode.GetBoolOption", Options, ParseString, CurrentValue); }
	bool GetBoolOptionIni(FString Section, FString OptionName, bool bDefaultValue) { return NativeCall<bool, FString, FString, bool>(this, "AShooterGameMode.GetBoolOptionIni", Section, OptionName, bDefaultValue); }
	float GetDinoDamageMultiplier(APrimalDinoCharacter * ForDino) { return NativeCall<float, APrimalDinoCharacter *>(this, "AShooterGameMode.GetDinoDamageMultiplier", ForDino); }
	float GetDinoResistanceMultiplier(APrimalDinoCharacter * ForDino) { return NativeCall<float, APrimalDinoCharacter *>(this, "AShooterGameMode.GetDinoResistanceMultiplier", ForDino); }
	void GetDynamicConfig() { NativeCall<void>(this, "AShooterGameMode.GetDynamicConfig"); }
	float GetExtraDinoSpawnWeight(FName DinoNameTag) { return NativeCall<float, FName>(this, "AShooterGameMode.GetExtraDinoSpawnWeight", DinoNameTag); }
	float GetFloatOption(const FString * Options, const FString * ParseString, float CurrentValue) { return NativeCall<float, const FString *, const FString *, float>(this, "AShooterGameMode.GetFloatOption", Options, ParseString, CurrentValue); }
	float GetFloatOptionIni(FString Section, FString OptionName) { return NativeCall<float, FString, FString>(this, "AShooterGameMode.GetFloatOptionIni", Section, OptionName); }
	float GetHarvestResourceItemAmountMultiplier(TSubclassOf<UPrimalItem> HarvestItemClass) { return NativeCall<float, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.GetHarvestResourceItemAmountMultiplier", HarvestItemClass); }
	int GetIntOption(const FString * Options, const FString * ParseString, int CurrentValue) { return NativeCall<int, const FString *, const FString *, int>(this, "AShooterGameMode.GetIntOption", Options, ParseString, CurrentValue); }
	int GetIntOptionIni(FString Section, FString OptionName) { return NativeCall<int, FString, FString>(this, "AShooterGameMode.GetIntOptionIni", Section, OptionName); }
	long double GetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType> MissionType) { return NativeCall<long double, TSubclassOf<AMissionType>>(this, "AShooterGameMode.GetLastMissionDeactivatedUtcTime", MissionType); }
	bool GetLaunchOptionFloat(const FString * LaunchOptionKey, float * ReturnVal) { return NativeCall<bool, const FString *, float *>(this, "AShooterGameMode.GetLaunchOptionFloat", LaunchOptionKey, ReturnVal); }
	FString * GetMapName(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterGameMode.GetMapName", result); }
	int GetNumDeaths(const FString * PlayerDataID) { return NativeCall<int, const FString *>(this, "AShooterGameMode.GetNumDeaths", PlayerDataID); }
	int GetNumDinosOnTeam(int OnTeam) { return NativeCall<int, int>(this, "AShooterGameMode.GetNumDinosOnTeam", OnTeam); }
	int GetNumberOfLivePlayersOnTribe(const FString * TribeName) { return NativeCall<int, const FString *>(this, "AShooterGameMode.GetNumberOfLivePlayersOnTribe", TribeName); }
	AOceanDinoManager * GetOceanDinoManager() { return NativeCall<AOceanDinoManager *>(this, "AShooterGameMode.GetOceanDinoManager"); }
	FLeaderboardEntry * GetOrCreateLeaderboardEntry(FName MissionTag) { return NativeCall<FLeaderboardEntry *, FName>(this, "AShooterGameMode.GetOrCreateLeaderboardEntry", MissionTag); }
	bool GetOrLoadTribeData(int TribeID, FTribeData * LoadedTribeData) { return NativeCall<bool, int, FTribeData *>(this, "AShooterGameMode.GetOrLoadTribeData", TribeID, LoadedTribeData); }
	TArray<APrimalDinoCharacter *> * GetOverlappingDinoCharactersOfTeamAndClass(TArray<APrimalDinoCharacter *> * result, const FVector * AtLocation, float OverlapRange, TSubclassOf<APrimalDinoCharacter> DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass) { return NativeCall<TArray<APrimalDinoCharacter *> *, TArray<APrimalDinoCharacter *> *, const FVector *, float, TSubclassOf<APrimalDinoCharacter>, int, bool, bool>(this, "AShooterGameMode.GetOverlappingDinoCharactersOfTeamAndClass", result, AtLocation, OverlapRange, DinoClass, DinoTeam, bExactClassMatch, bIgnoreClass); }
	UPrimalPlayerData * GetPlayerData(const FString * PlayerDataID) { return NativeCall<UPrimalPlayerData *, const FString *>(this, "AShooterGameMode.GetPlayerData", PlayerDataID); }
	UPrimalPlayerData * GetPlayerDataByInt(unsigned __int64 * PlayerDataIDInt) { return NativeCall<UPrimalPlayerData *, unsigned __int64 *>(this, "AShooterGameMode.GetPlayerDataByInt", PlayerDataIDInt); }
	UPrimalPlayerData * GetPlayerDataFor(AShooterPlayerController * PC, bool * bCreatedNewPlayerData, bool bForceCreateNewPlayerData, const FPrimalPlayerCharacterConfigStruct * charConfig, bool bAutoCreateNewData, bool bDontSaveNewData) { return NativeCall<UPrimalPlayerData *, AShooterPlayerController *, bool *, bool, const FPrimalPlayerCharacterConfigStruct *, bool, bool>(this, "AShooterGameMode.GetPlayerDataFor", PC, bCreatedNewPlayerData, bForceCreateNewPlayerData, charConfig, bAutoCreateNewData, bDontSaveNewData); }
	int GetPlayerIDForSteamID(unsigned __int64 steamID) { return NativeCall<int, unsigned __int64>(this, "AShooterGameMode.GetPlayerIDForSteamID", steamID); }
	FString * GetSaveDirectoryName(FString * result, ESaveType::Type SaveType) { return NativeCall<FString *, FString *, ESaveType::Type>(this, "AShooterGameMode.GetSaveDirectoryName", result, SaveType); }
	FString * GetServerName(FString * result, bool bNumbersAndLettersOnly) { return NativeCall<FString *, FString *, bool>(this, "AShooterGameMode.GetServerName", result, bNumbersAndLettersOnly); }
	void GetServerNotification() { NativeCall<void>(this, "AShooterGameMode.GetServerNotification"); }
	bool GetServerSettingsFloat(const FString * Keyvalue, float * OutFloat) { return NativeCall<bool, const FString *, float *>(this, "AShooterGameMode.GetServerSettingsFloat", Keyvalue, OutFloat); }
	FString * GetSessionTimeString_Implementation(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterGameMode.GetSessionTimeString_Implementation", result); }
	unsigned __int64 GetSteamIDForPlayerID(int playerDataID) { return NativeCall<unsigned __int64, int>(this, "AShooterGameMode.GetSteamIDForPlayerID", playerDataID); }
	FString * GetStringOption(FString * result, FString Section, FString OptionName) { return NativeCall<FString *, FString *, FString, FString>(this, "AShooterGameMode.GetStringOption", result, Section, OptionName); }
	FVector * GetTracedSpawnLocation(FVector * result, const FVector * SpawnLoc, float CharHalfHeight) { return NativeCall<FVector *, FVector *, const FVector *, float>(this, "AShooterGameMode.GetTracedSpawnLocation", result, SpawnLoc, CharHalfHeight); }
	const FTribeData * GetTribeData(const FTribeData * result, unsigned __int64 TribeID) { return NativeCall<const FTribeData *, const FTribeData *, unsigned __int64>(this, "AShooterGameMode.GetTribeData", result, TribeID); }
	FTribeData * GetTribeDataBlueprint(FTribeData * result, int TribeID) { return NativeCall<FTribeData *, FTribeData *, int>(this, "AShooterGameMode.GetTribeDataBlueprint", result, TribeID); }
	int GetTribeIDOfPlayerID(unsigned __int64 PlayerDataID) { return NativeCall<int, unsigned __int64>(this, "AShooterGameMode.GetTribeIDOfPlayerID", PlayerDataID); }
	TArray<FString> * GetWhiteListedMap(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "AShooterGameMode.GetWhiteListedMap", result); }
	void HandleLeavingMap() { NativeCall<void>(this, "AShooterGameMode.HandleLeavingMap"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameMode.HandleMatchHasStarted"); }
	bool HandleNewPlayer_Implementation(AShooterPlayerController * NewPlayer, UPrimalPlayerData * PlayerData, AShooterCharacter * PlayerCharacter, bool bIsFromLogin) { return NativeCall<bool, AShooterPlayerController *, UPrimalPlayerData *, AShooterCharacter *, bool>(this, "AShooterGameMode.HandleNewPlayer_Implementation", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin); }
	void HandleTransferCharacterDialogResult(bool bAccept, AShooterPlayerController * NewPlayer) { NativeCall<void, bool, AShooterPlayerController *>(this, "AShooterGameMode.HandleTransferCharacterDialogResult", bAccept, NewPlayer); }
	void HttpCheckGlobalEnablesComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameMode.HttpCheckGlobalEnablesComplete", HttpRequest, HttpResponse, bSucceeded); }
	void HttpGetDynamicConfigComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameMode.HttpGetDynamicConfigComplete", HttpRequest, HttpResponse, bSucceeded); }
	void HttpGetLiveTuningOverloadsComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameMode.HttpGetLiveTuningOverloadsComplete", HttpRequest, HttpResponse, bSucceeded); }
	void HttpSendAllCachedArkMetricsRequestComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameMode.HttpSendAllCachedArkMetricsRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	void HttpServerNotificationRequestComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "AShooterGameMode.HttpServerNotificationRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	void IncrementNumDeaths(const FString * PlayerDataID) { NativeCall<void, const FString *>(this, "AShooterGameMode.IncrementNumDeaths", PlayerDataID); }
	void IncrementNumDinos(int ForTeam, int ByAmount) { NativeCall<void, int, int>(this, "AShooterGameMode.IncrementNumDinos", ForTeam, ByAmount); }
	void IncrementPreLoginMetric() { NativeCall<void>(this, "AShooterGameMode.IncrementPreLoginMetric"); }
	void InitGame(const FString * MapName, const FString * Options, FString * ErrorMessage) { NativeCall<void, const FString *, const FString *, FString *>(this, "AShooterGameMode.InitGame", MapName, Options, ErrorMessage); }
	void InitGameState() { NativeCall<void>(this, "AShooterGameMode.InitGameState"); }
	FString * InitNewPlayer(FString * result, APlayerController * NewPlayerController, const TSharedPtr<FUniqueNetId,0> * UniqueId, const FString * Options, const FString * Portal) { return NativeCall<FString *, FString *, APlayerController *, const TSharedPtr<FUniqueNetId,0> *, const FString *, const FString *>(this, "AShooterGameMode.InitNewPlayer", result, NewPlayerController, UniqueId, Options, Portal); }
	void InitOptionBool(FString Commandline, FString Section, FString Option, bool bDefaultValue) { NativeCall<void, FString, FString, FString, bool>(this, "AShooterGameMode.InitOptionBool", Commandline, Section, Option, bDefaultValue); }
	void InitOptionFloat(FString Commandline, FString Section, FString Option, float CurrentValue) { NativeCall<void, FString, FString, FString, float>(this, "AShooterGameMode.InitOptionFloat", Commandline, Section, Option, CurrentValue); }
	void InitOptionInteger(FString Commandline, FString Section, FString Option, int CurrentValue) { NativeCall<void, FString, FString, FString, int>(this, "AShooterGameMode.InitOptionInteger", Commandline, Section, Option, CurrentValue); }
	void InitOptionString(FString Commandline, FString Section, FString Option) { NativeCall<void, FString, FString, FString>(this, "AShooterGameMode.InitOptionString", Commandline, Section, Option); }
	void InitOptions(FString Options) { NativeCall<void, FString>(this, "AShooterGameMode.InitOptions", Options); }
	void InitializeDatabaseRefs() { NativeCall<void>(this, "AShooterGameMode.InitializeDatabaseRefs"); }
	bool IsEngramClassGiveToPlayer(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.IsEngramClassGiveToPlayer", ForItemClass); }
	bool IsEngramClassHidden(TSubclassOf<UPrimalItem> ForItemClass) { return NativeCall<bool, TSubclassOf<UPrimalItem>>(this, "AShooterGameMode.IsEngramClassHidden", ForItemClass); }
	bool IsFirstPlayerSpawn(APlayerController * NewPlayer) { return NativeCall<bool, APlayerController *>(this, "AShooterGameMode.IsFirstPlayerSpawn", NewPlayer); }
	bool IsLoginLockDisabled() { return NativeCall<bool>(this, "AShooterGameMode.IsLoginLockDisabled"); }
	bool IsPlayerAllowedToCheat(AShooterPlayerController * ForPlayer) { return NativeCall<bool, AShooterPlayerController *>(this, "AShooterGameMode.IsPlayerAllowedToCheat", ForPlayer); }
	bool IsPlayerAllowedToJoinNoCheck(const FUniqueNetIdUInt64 * PlayerId) { return NativeCall<bool, const FUniqueNetIdUInt64 *>(this, "AShooterGameMode.IsPlayerAllowedToJoinNoCheck", PlayerId); }
	bool IsPlayerControllerAllowedToExclusiveJoin(AShooterPlayerController * ForPlayer) { return NativeCall<bool, AShooterPlayerController *>(this, "AShooterGameMode.IsPlayerControllerAllowedToExclusiveJoin", ForPlayer); }
	bool IsPlayerControllerAllowedToJoinNoCheck(AShooterPlayerController * ForPlayer) { return NativeCall<bool, AShooterPlayerController *>(this, "AShooterGameMode.IsPlayerControllerAllowedToJoinNoCheck", ForPlayer); }
	bool IsSpawnpointPreferred(APlayerStart * SpawnPoint, AController * Player) { return NativeCall<bool, APlayerStart *, AController *>(this, "AShooterGameMode.IsSpawnpointPreferred", SpawnPoint, Player); }
	bool IsTimeSinceMissionDeactivated(TSubclassOf<AMissionType> MissionType, float CheckTimeSince, bool bForceTrueAtZeroTime) { return NativeCall<bool, TSubclassOf<AMissionType>, float, bool>(this, "AShooterGameMode.IsTimeSinceMissionDeactivated", MissionType, CheckTimeSince, bForceTrueAtZeroTime); }
	bool IsTribeWar(int TribeID1, int TribeID2) { return NativeCall<bool, int, int>(this, "AShooterGameMode.IsTribeWar", TribeID1, TribeID2); }
	void KickAllPlayersAndReload() { NativeCall<void>(this, "AShooterGameMode.KickAllPlayersAndReload"); }
	bool KickPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.KickPlayer", PlayerSteamName, PlayerSteamID); }
	void KickPlayerController(APlayerController * thePC, const FString * KickMessage) { NativeCall<void, APlayerController *, const FString *>(this, "AShooterGameMode.KickPlayerController", thePC, KickMessage); }
	void Killed(AController * Killer, AController * KilledPlayer, APawn * KilledPawn, const UDamageType * DamageType) { NativeCall<void, AController *, AController *, APawn *, const UDamageType *>(this, "AShooterGameMode.Killed", Killer, KilledPlayer, KilledPawn, DamageType); }
	void ListenServerClampPlayerLocations() { NativeCall<void>(this, "AShooterGameMode.ListenServerClampPlayerLocations"); }
	void LoadBannedList() { NativeCall<void>(this, "AShooterGameMode.LoadBannedList"); }
	UPrimalPlayerData * LoadPlayerData(AShooterPlayerState * PlayerState, bool bIsLoadingBackup) { return NativeCall<UPrimalPlayerData *, AShooterPlayerState *, bool>(this, "AShooterGameMode.LoadPlayerData", PlayerState, bIsLoadingBackup); }
	void LoadPlayerDataIds() { NativeCall<void>(this, "AShooterGameMode.LoadPlayerDataIds"); }
	void LoadPlayerIds_Process(unsigned __int64 InPlayerID, TArray<unsigned char> * ReadBytes) { NativeCall<void, unsigned __int64, TArray<unsigned char> *>(this, "AShooterGameMode.LoadPlayerIds_Process", InPlayerID, ReadBytes); }
	void LoadPlayersJoinNoCheckList() { NativeCall<void>(this, "AShooterGameMode.LoadPlayersJoinNoCheckList"); }
	bool LoadTribeData(int TribeID, FTribeData * LoadedTribeData, bool bIsLoadingBackup, bool bDontCheckDirtyTribeWar) { return NativeCall<bool, int, FTribeData *, bool, bool>(this, "AShooterGameMode.LoadTribeData", TribeID, LoadedTribeData, bIsLoadingBackup, bDontCheckDirtyTribeWar); }
	void LoadTribeIds() { NativeCall<void>(this, "AShooterGameMode.LoadTribeIds"); }
	void LoadTribeIds_Process(unsigned int theTribeID) { NativeCall<void, unsigned int>(this, "AShooterGameMode.LoadTribeIds_Process", theTribeID); }
	void LoadTributePlayerDatas(FString UniqueID) { NativeCall<void, FString>(this, "AShooterGameMode.LoadTributePlayerDatas", UniqueID); }
	bool LoadWorld() { return NativeCall<bool>(this, "AShooterGameMode.LoadWorld"); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "AShooterGameMode.LoadedFromSaveGame"); }
	void LoadedWorld_Implementation() { NativeCall<void>(this, "AShooterGameMode.LoadedWorld_Implementation"); }
	void Logout(AController * Exiting) { NativeCall<void, AController *>(this, "AShooterGameMode.Logout", Exiting); }
	float ModifyDamage(float Damage, AActor * DamagedActor, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, AActor *, const FDamageEvent *, AController *, AActor *>(this, "AShooterGameMode.ModifyDamage", Damage, DamagedActor, DamageEvent, EventInstigator, DamageCauser); }
	float ModifyNPCSpawnLimits(FName DinoNameTag, float CurrentLimit) { return NativeCall<float, FName, float>(this, "AShooterGameMode.ModifyNPCSpawnLimits", DinoNameTag, CurrentLimit); }
	void NotifyDamage(AActor * Victim, float DamageAmount, const FDamageEvent * Event, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, AActor *, float, const FDamageEvent *, AController *, AActor *>(this, "AShooterGameMode.NotifyDamage", Victim, DamageAmount, Event, EventInstigator, DamageCauser); }
	void OnHarvestingComponentHidden(FAttachedInstancedHarvestingElement * component) { NativeCall<void, FAttachedInstancedHarvestingElement *>(this, "AShooterGameMode.OnHarvestingComponentHidden", component); }
	void OnHarvestingComponentShown(FAttachedInstancedHarvestingElement * component) { NativeCall<void, FAttachedInstancedHarvestingElement *>(this, "AShooterGameMode.OnHarvestingComponentShown", component); }
	bool PlayerCanRestart(APlayerController * Player) { return NativeCall<bool, APlayerController *>(this, "AShooterGameMode.PlayerCanRestart", Player); }
	void PostAdminTrackedCommands() { NativeCall<void>(this, "AShooterGameMode.PostAdminTrackedCommands"); }
	void PostAlarmNotification(const FUniqueNetId * SteamID, const FString * Title, const FString * Message) { NativeCall<void, const FUniqueNetId *, const FString *, const FString *>(this, "AShooterGameMode.PostAlarmNotification", SteamID, Title, Message); }
	void PostAlarmNotification(FString SteamID, const FString * Title, const FString * Message) { NativeCall<void, FString, const FString *, const FString *>(this, "AShooterGameMode.PostAlarmNotification", SteamID, Title, Message); }
	void PostAlarmNotification(unsigned __int64 SteamID, const FString * Title, const FString * Message) { NativeCall<void, unsigned __int64, const FString *, const FString *>(this, "AShooterGameMode.PostAlarmNotification", SteamID, Title, Message); }
	void PostAlarmNotificationPlayerID(int PlayerID, const FString * Title, const FString * Message) { NativeCall<void, int, const FString *, const FString *>(this, "AShooterGameMode.PostAlarmNotificationPlayerID", PlayerID, Title, Message); }
	void PostAlarmNotificationTribe(int TribeID, FString Title, FString Message) { NativeCall<void, int, FString, FString>(this, "AShooterGameMode.PostAlarmNotificationTribe", TribeID, Title, Message); }
	void PostLogin(APlayerController * NewPlayer) { NativeCall<void, APlayerController *>(this, "AShooterGameMode.PostLogin", NewPlayer); }
	void PostServerMetrics() { NativeCall<void>(this, "AShooterGameMode.PostServerMetrics"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AShooterGameMode.PreInitializeComponents"); }
	void PreLogin(const FString * Options, const FString * Address, const TSharedPtr<FUniqueNetId,0> * UniqueId, const FString * authToken, FString * ErrorMessage, UNetConnection * Connection) { NativeCall<void, const FString *, const FString *, const TSharedPtr<FUniqueNetId,0> *, const FString *, FString *, UNetConnection *>(this, "AShooterGameMode.PreLogin", Options, Address, UniqueId, authToken, ErrorMessage, Connection); }
	void PrintToGameplayLog(const FString * InString) { NativeCall<void, const FString *>(this, "AShooterGameMode.PrintToGameplayLog", InString); }
	void PrintToServerGameLog(const FString * InString, bool bSendChatToAllAdmins) { NativeCall<void, const FString *, bool>(this, "AShooterGameMode.PrintToServerGameLog", InString, bSendChatToAllAdmins); }
	bool ReadyToStartMatch() { return NativeCall<bool>(this, "AShooterGameMode.ReadyToStartMatch"); }
	void ReassertColorization() { NativeCall<void>(this, "AShooterGameMode.ReassertColorization"); }
	void ReloadAdminIPs() { NativeCall<void>(this, "AShooterGameMode.ReloadAdminIPs"); }
	void RemoveInactivePlayersAndTribes() { NativeCall<void>(this, "AShooterGameMode.RemoveInactivePlayersAndTribes"); }
	void RemoveLoginLock(const TSharedPtr<FUniqueNetId,0> * UniqueNetId) { NativeCall<void, const TSharedPtr<FUniqueNetId,0> *>(this, "AShooterGameMode.RemoveLoginLock", UniqueNetId); }
	void RemovePlayerData(AShooterPlayerState * PlayerState) { NativeCall<void, AShooterPlayerState *>(this, "AShooterGameMode.RemovePlayerData", PlayerState); }
	void RemovePlayerFromTribe(unsigned __int64 TribeID, unsigned __int64 PlayerDataID, bool bDontUpdatePlayerState) { NativeCall<void, unsigned __int64, unsigned __int64, bool>(this, "AShooterGameMode.RemovePlayerFromTribe", TribeID, PlayerDataID, bDontUpdatePlayerState); }
	void RemoveTribe(unsigned __int64 TribeID) { NativeCall<void, unsigned __int64>(this, "AShooterGameMode.RemoveTribe", TribeID); }
	void RequestFinishAndExitToMainMenu() { NativeCall<void>(this, "AShooterGameMode.RequestFinishAndExitToMainMenu"); }
	void RestartServer() { NativeCall<void>(this, "AShooterGameMode.RestartServer"); }
	void SaveBannedList() { NativeCall<void>(this, "AShooterGameMode.SaveBannedList"); }
	TSharedPtr<FWriteFileTaskInfo,0> * SavePlayerData(TSharedPtr<FWriteFileTaskInfo,0> * result, UPrimalPlayerData * PlayerData, bool bSaveBackup, bool bFromCheat) { return NativeCall<TSharedPtr<FWriteFileTaskInfo,0> *, TSharedPtr<FWriteFileTaskInfo,0> *, UPrimalPlayerData *, bool, bool>(this, "AShooterGameMode.SavePlayerData", result, PlayerData, bSaveBackup, bFromCheat); }
	void SavePlayersJoinNoCheckList() { NativeCall<void>(this, "AShooterGameMode.SavePlayersJoinNoCheckList"); }
	TSharedPtr<FWriteFileTaskInfo,0> * SaveTribeData(TSharedPtr<FWriteFileTaskInfo,0> * result, FTribeData TribeData) { return NativeCall<TSharedPtr<FWriteFileTaskInfo,0> *, TSharedPtr<FWriteFileTaskInfo,0> *, FTribeData>(this, "AShooterGameMode.SaveTribeData", result, TribeData); }
	void SaveTributePlayerDatas(FString UniqueID) { NativeCall<void, FString>(this, "AShooterGameMode.SaveTributePlayerDatas", UniqueID); }
	void SaveWorld(bool bForceWaitOnSaveToComplete) { NativeCall<void, bool>(this, "AShooterGameMode.SaveWorld", bForceWaitOnSaveToComplete); }
	void SendAllCachedArkMetrics() { NativeCall<void>(this, "AShooterGameMode.SendAllCachedArkMetrics"); }
	void SendDatadogMetricEvent(const FString * Title, const FString * Message) { NativeCall<void, const FString *, const FString *>(this, "AShooterGameMode.SendDatadogMetricEvent", Title, Message); }
	void SendServerChatMessage(const FString * MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID) { NativeCall<void, const FString *, FLinearColor, bool, int, int>(this, "AShooterGameMode.SendServerChatMessage", MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID); }
	void SendServerDirectMessage(const FString * PlayerSteamID, const FString * MessageText, FLinearColor MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, const FString * PlayerName) { NativeCall<void, const FString *, const FString *, FLinearColor, bool, int, int, const FString *>(this, "AShooterGameMode.SendServerDirectMessage", PlayerSteamID, MessageText, MessageColor, bIsBold, ReceiverTeamId, ReceiverPlayerID, PlayerName); }
	void SendServerNotification(const FString * MessageText, FLinearColor MessageColor, float DisplayScale, float DisplayTime, UTexture2D * MessageIcon, USoundBase * SoundToPlay, int ReceiverTeamId, int ReceiverPlayerID, bool bDoBillboard) { NativeCall<void, const FString *, FLinearColor, float, float, UTexture2D *, USoundBase *, int, int, bool>(this, "AShooterGameMode.SendServerNotification", MessageText, MessageColor, DisplayScale, DisplayTime, MessageIcon, SoundToPlay, ReceiverTeamId, ReceiverPlayerID, bDoBillboard); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "AShooterGameMode.Serialize", Ar); }
	void SerializeForSaveFile(int SaveVersion, FArchive * InArchive) { NativeCall<void, int, FArchive *>(this, "AShooterGameMode.SerializeForSaveFile", SaveVersion, InArchive); }
	void ServerConstructedFoliageHiddenAttachedComponent(FAttachedInstanced * aComponent) { NativeCall<void, FAttachedInstanced *>(this, "AShooterGameMode.ServerConstructedFoliageHiddenAttachedComponent", aComponent); }
	void SetDamageEventLoggingEnabled(bool bEnabled) { NativeCall<void, bool>(this, "AShooterGameMode.SetDamageEventLoggingEnabled", bEnabled); }
	void SetLastMissionDeactivatedUtcTime(TSubclassOf<AMissionType> MissionType, long double UtcTime) { NativeCall<void, TSubclassOf<AMissionType>, long double>(this, "AShooterGameMode.SetLastMissionDeactivatedUtcTime", MissionType, UtcTime); }
	void SetMessageOfTheDay(const FString * Message) { NativeCall<void, const FString *>(this, "AShooterGameMode.SetMessageOfTheDay", Message); }
	void SetTimeOfDay(const FString * timeString) { NativeCall<void, const FString *>(this, "AShooterGameMode.SetTimeOfDay", timeString); }
	bool SetTranfers(bool enabled) { return NativeCall<bool, bool>(this, "AShooterGameMode.SetTranfers", enabled); }
	void ShowMessageOfTheDay() { NativeCall<void>(this, "AShooterGameMode.ShowMessageOfTheDay"); }
	void SingleplayerSetupValues() { NativeCall<void>(this, "AShooterGameMode.SingleplayerSetupValues"); }
	void SpawnedPawnFor(AController * PC, APawn * SpawnedPawn) { NativeCall<void, AController *, APawn *>(this, "AShooterGameMode.SpawnedPawnFor", PC, SpawnedPawn); }
	void StartNewPlayer(APlayerController * NewPlayer) { NativeCall<void, APlayerController *>(this, "AShooterGameMode.StartNewPlayer", NewPlayer); }
	void StartNewShooterPlayer(APlayerController * NewPlayer, bool bForceCreateNewPlayerData, bool bIsFromLogin, const FPrimalPlayerCharacterConfigStruct * charConfig, UPrimalPlayerData * ArkPlayerData) { NativeCall<void, APlayerController *, bool, bool, const FPrimalPlayerCharacterConfigStruct *, UPrimalPlayerData *>(this, "AShooterGameMode.StartNewShooterPlayer", NewPlayer, bForceCreateNewPlayerData, bIsFromLogin, charConfig, ArkPlayerData); }
	bool StartSaveBackup() { return NativeCall<bool>(this, "AShooterGameMode.StartSaveBackup"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterGameMode.Tick", DeltaSeconds); }
	void TickLoginLocks() { NativeCall<void>(this, "AShooterGameMode.TickLoginLocks"); }
	void TickSaveBackup() { NativeCall<void>(this, "AShooterGameMode.TickSaveBackup"); }
	float TimeSinceMissionDeactivated(TSubclassOf<AMissionType> MissionType) { return NativeCall<float, TSubclassOf<AMissionType>>(this, "AShooterGameMode.TimeSinceMissionDeactivated", MissionType); }
	static bool TriggerLevelCustomEvents(UWorld * InWorld, const FString * EventName, int IDtoOnlyAllowExecutionOncePerFrame) { return NativeCall<bool, UWorld *, const FString *, int>(nullptr, "AShooterGameMode.TriggerLevelCustomEvents", InWorld, EventName, IDtoOnlyAllowExecutionOncePerFrame); }
	bool TryGetBoolOption(const FString * Section, const FString * Options, const FString * OptionName, bool * value) { return NativeCall<bool, const FString *, const FString *, const FString *, bool *>(this, "AShooterGameMode.TryGetBoolOption", Section, Options, OptionName, value); }
	bool TryGetBoolOptionIni(FString Section, FString OptionName, bool * value) { return NativeCall<bool, FString, FString, bool *>(this, "AShooterGameMode.TryGetBoolOptionIni", Section, OptionName, value); }
	bool TryGetIntOption(const FString * Section, const FString * Options, const FString * OptionName, int * value) { return NativeCall<bool, const FString *, const FString *, const FString *, int *>(this, "AShooterGameMode.TryGetIntOption", Section, Options, OptionName, value); }
	bool TryGetIntOptionIni(FString Section, FString OptionName, int * value) { return NativeCall<bool, FString, FString, int *>(this, "AShooterGameMode.TryGetIntOptionIni", Section, OptionName, value); }
	bool UnbanPlayer(FString PlayerSteamName, FString PlayerSteamID) { return NativeCall<bool, FString, FString>(this, "AShooterGameMode.UnbanPlayer", PlayerSteamName, PlayerSteamID); }
	void UpdateDynamicUndermeshVolumes() { NativeCall<void>(this, "AShooterGameMode.UpdateDynamicUndermeshVolumes"); }
	void UpdateSaveBackupFiles() { NativeCall<void>(this, "AShooterGameMode.UpdateSaveBackupFiles"); }
	void UpdateTribeAllianceData(FTribeAlliance * TribeAllianceData, TArray<unsigned int> * OldMembersArray, bool bIsAdd) { NativeCall<void, FTribeAlliance *, TArray<unsigned int> *, bool>(this, "AShooterGameMode.UpdateTribeAllianceData", TribeAllianceData, OldMembersArray, bIsAdd); }
	void UpdateTribeData(FTribeData NewTribeData) { NativeCall<void, FTribeData>(this, "AShooterGameMode.UpdateTribeData", NewTribeData); }
	void UpdateTribeWars() { NativeCall<void>(this, "AShooterGameMode.UpdateTribeWars"); }
	FPrimalPlayerCharacterConfigStruct * ValidateCharacterConfig(FPrimalPlayerCharacterConfigStruct * result, const FPrimalPlayerCharacterConfigStruct * charConfig) { return NativeCall<FPrimalPlayerCharacterConfigStruct *, FPrimalPlayerCharacterConfigStruct *, const FPrimalPlayerCharacterConfigStruct *>(this, "AShooterGameMode.ValidateCharacterConfig", result, charConfig); }
	FString * ValidateTribeName(FString * result, FString theTribeName) { return NativeCall<FString *, FString *, FString>(this, "AShooterGameMode.ValidateTribeName", result, theTribeName); }
	ATerrainActor * GetTerrainActor() { return NativeCall<ATerrainActor *>(this, "AShooterGameMode.GetTerrainActor"); }
	void BPPreSpawnedDino(APrimalDinoCharacter * theDino) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterGameMode.BPPreSpawnedDino", theDino); }
	bool CheckJoinInProgress(bool bIsFromLogin, APlayerController * NewPlayer) { return NativeCall<bool, bool, APlayerController *>(this, "AShooterGameMode.CheckJoinInProgress", bIsFromLogin, NewPlayer); }
	bool HandleNewPlayer(AShooterPlayerController * NewPlayer, UPrimalPlayerData * PlayerData, AShooterCharacter * PlayerCharacter, bool bIsFromLogin) { return NativeCall<bool, AShooterPlayerController *, UPrimalPlayerData *, AShooterCharacter *, bool>(this, "AShooterGameMode.HandleNewPlayer", NewPlayer, PlayerData, PlayerCharacter, bIsFromLogin); }
	void InitGameStateDataSets() { NativeCall<void>(this, "AShooterGameMode.InitGameStateDataSets"); }
	void LoadedWorld() { NativeCall<void>(this, "AShooterGameMode.LoadedWorld"); }
	void OnLogout(AController * Exiting) { NativeCall<void, AController *>(this, "AShooterGameMode.OnLogout", Exiting); }
};

struct ACustomGameMode : AShooterGameMode
{

	// Functions

	void AdjustDamage(AActor * Victim, float * Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, AActor *, float *, const FDamageEvent *, AController *, AActor *>(this, "ACustomGameMode.AdjustDamage", Victim, Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool AllowAddToTribe(AShooterPlayerState * ForPlayerState, const FTribeData * MyNewTribe) { return NativeCall<bool, AShooterPlayerState *, const FTribeData *>(this, "ACustomGameMode.AllowAddToTribe", ForPlayerState, MyNewTribe); }
	bool AllowAddXP(UPrimalCharacterStatusComponent * forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent *>(this, "ACustomGameMode.AllowAddXP", forComp); }
	bool AllowClearTribe(AShooterPlayerState * ForPlayerState) { return NativeCall<bool, AShooterPlayerState *>(this, "ACustomGameMode.AllowClearTribe", ForPlayerState); }
	bool AllowModifyStatusValue(UPrimalCharacterStatusComponent * forComp, EPrimalCharacterStatusValue::Type valueType, float Amount) { return NativeCall<bool, UPrimalCharacterStatusComponent *, EPrimalCharacterStatusValue::Type, float>(this, "ACustomGameMode.AllowModifyStatusValue", forComp, valueType, Amount); }
	bool AllowNotifyRemotePlayerDeath(AShooterCharacter * forChar) { return NativeCall<bool, AShooterCharacter *>(this, "ACustomGameMode.AllowNotifyRemotePlayerDeath", forChar); }
	bool AllowRenameTribe(AShooterPlayerState * ForPlayerState, const FString * TribeName) { return NativeCall<bool, AShooterPlayerState *, const FString *>(this, "ACustomGameMode.AllowRenameTribe", ForPlayerState, TribeName); }
	static void BreakTribeData(const FTribeData Data, FString * TribeName, int * OwnerPlayerDataID, int * TribeID, TArray<FString> * MembersPlayerName, TArray<int> * MembersPlayerDataID, TArray<int> * TribeAdmins, bool * bSetGovernment, FTribeGovernment * TribeGovernment, TArray<FPrimalPlayerCharacterConfigStructReplicated> * MembersConfigs) { NativeCall<void, const FTribeData, FString *, int *, int *, TArray<FString> *, TArray<int> *, TArray<int> *, bool *, FTribeGovernment *, TArray<FPrimalPlayerCharacterConfigStructReplicated> *>(nullptr, "ACustomGameMode.BreakTribeData", Data, TribeName, OwnerPlayerDataID, TribeID, MembersPlayerName, MembersPlayerDataID, TribeAdmins, bSetGovernment, TribeGovernment, MembersConfigs); }
	bool CheckForCommand(FString CommandName) { return NativeCall<bool, FString>(this, "ACustomGameMode.CheckForCommand", CommandName); }
	void CleanUpSotfNotificationManager() { NativeCall<void>(this, "ACustomGameMode.CleanUpSotfNotificationManager"); }
	FString * DoGameCommand(FString * result, const FString * TheCommand) { return NativeCall<FString *, FString *, const FString *>(this, "ACustomGameMode.DoGameCommand", result, TheCommand); }
	bool GetBoolValueFromINI(FString KeyValue) { return NativeCall<bool, FString>(this, "ACustomGameMode.GetBoolValueFromINI", KeyValue); }
	float GetFloatValueFromINI(FString KeyValue) { return NativeCall<float, FString>(this, "ACustomGameMode.GetFloatValueFromINI", KeyValue); }
	static float GetIniFloatValue(FString Section, FString KeyValue) { return NativeCall<float, FString, FString>(nullptr, "ACustomGameMode.GetIniFloatValue", Section, KeyValue); }
	int GetIntValueFromINI(FString KeyValue) { return NativeCall<int, FString>(this, "ACustomGameMode.GetIntValueFromINI", KeyValue); }
	float GetValueFromINI(FString KeyValue) { return NativeCall<float, FString>(this, "ACustomGameMode.GetValueFromINI", KeyValue); }
	void HandleLeavingMap() { NativeCall<void>(this, "ACustomGameMode.HandleLeavingMap"); }
	void InitGame(const FString * MapName, const FString * Options, FString * ErrorMessage) { NativeCall<void, const FString *, const FString *, FString *>(this, "ACustomGameMode.InitGame", MapName, Options, ErrorMessage); }
	void InitGameState() { NativeCall<void>(this, "ACustomGameMode.InitGameState"); }
	void InitOptionFloatToINI(FString Options, float FloatValue, FString KeyValue) { NativeCall<void, FString, float, FString>(this, "ACustomGameMode.InitOptionFloatToINI", Options, FloatValue, KeyValue); }
	void InitOptions(FString Options) { NativeCall<void, FString>(this, "ACustomGameMode.InitOptions", Options); }
	bool IsInAllowedToCheatList(APlayerController * NewPlayer) { return NativeCall<bool, APlayerController *>(this, "ACustomGameMode.IsInAllowedToCheatList", NewPlayer); }
	bool IsSpawnpointAllowed(APlayerStart * SpawnPoint, AController * Player) { return NativeCall<bool, APlayerStart *, AController *>(this, "ACustomGameMode.IsSpawnpointAllowed", SpawnPoint, Player); }
	bool IsUsedSpawnPointStillSupported(APlayerStart * SpawnPoint, AController * Player) { return NativeCall<bool, APlayerStart *, AController *>(this, "ACustomGameMode.IsUsedSpawnPointStillSupported", SpawnPoint, Player); }
	void KickPlayer(APlayerController * NewPlayer) { NativeCall<void, APlayerController *>(this, "ACustomGameMode.KickPlayer", NewPlayer); }
	static FTribeData * MakeTribeData(FTribeData * result, FString * TribeName, int * OwnerPlayerDataID, int * TribeID, TArray<FString> * MembersPlayerName, TArray<int> * MembersPlayerDataID, TArray<int> * TribeAdmins, bool * bSetGovernment, FTribeGovernment * TribeGovernment, TArray<FPrimalPlayerCharacterConfigStructReplicated> * MembersConfigs) { return NativeCall<FTribeData *, FTribeData *, FString *, int *, int *, TArray<FString> *, TArray<int> *, TArray<int> *, bool *, FTribeGovernment *, TArray<FPrimalPlayerCharacterConfigStructReplicated> *>(nullptr, "ACustomGameMode.MakeTribeData", result, TribeName, OwnerPlayerDataID, TribeID, MembersPlayerName, MembersPlayerDataID, TribeAdmins, bSetGovernment, TribeGovernment, MembersConfigs); }
	float OnAdjustDamage_Implementation(AActor * Victim, float DefaultDamage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, AActor *, float, const FDamageEvent *, AController *, AActor *>(this, "ACustomGameMode.OnAdjustDamage_Implementation", Victim, DefaultDamage, DamageEvent, EventInstigator, DamageCauser); }
	bool OnAllowAddXP_Implementation(UPrimalCharacterStatusComponent * forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent *>(this, "ACustomGameMode.OnAllowAddXP_Implementation", forComp); }
	bool OnAllowModifyStatusValue_Implementation(UPrimalCharacterStatusComponent * forComp, EPrimalCharacterStatusValue::Type valueType, float Amount) { return NativeCall<bool, UPrimalCharacterStatusComponent *, EPrimalCharacterStatusValue::Type, float>(this, "ACustomGameMode.OnAllowModifyStatusValue_Implementation", forComp, valueType, Amount); }
	bool OnAllowRenameTribe_Implementation(AShooterPlayerState * ForPlayerState, const FString * TribeName) { return NativeCall<bool, AShooterPlayerState *, const FString *>(this, "ACustomGameMode.OnAllowRenameTribe_Implementation", ForPlayerState, TribeName); }
	bool OnIsUsedSpawnPointStillSupported_Implementation(APlayerStart * SpawnPoint, AController * Player) { return NativeCall<bool, APlayerStart *, AController *>(this, "ACustomGameMode.OnIsUsedSpawnPointStillSupported_Implementation", SpawnPoint, Player); }
	bool PlayerCanRestart(APlayerController * Player) { return NativeCall<bool, APlayerController *>(this, "ACustomGameMode.PlayerCanRestart", Player); }
	void RemoveTribe(unsigned __int64 TribeID) { NativeCall<void, unsigned __int64>(this, "ACustomGameMode.RemoveTribe", TribeID); }
	void SaveBoolToConfig(bool IntValue, FString KeyValue) { NativeCall<void, bool, FString>(this, "ACustomGameMode.SaveBoolToConfig", IntValue, KeyValue); }
	void SaveFloatToConfig(float IntValue, FString KeyValue) { NativeCall<void, float, FString>(this, "ACustomGameMode.SaveFloatToConfig", IntValue, KeyValue); }
	void SaveIntToConfig(int IntValue, FString KeyValue) { NativeCall<void, int, FString>(this, "ACustomGameMode.SaveIntToConfig", IntValue, KeyValue); }
	void UpdateTribeData(FTribeData NewTribeData) { NativeCall<void, FTribeData>(this, "ACustomGameMode.UpdateTribeData", NewTribeData); }
	float OnAdjustDamage(AActor * Victim, float DefaultDamage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, AActor *, float, const FDamageEvent *, AController *, AActor *>(this, "ACustomGameMode.OnAdjustDamage", Victim, DefaultDamage, DamageEvent, EventInstigator, DamageCauser); }
	bool OnAllowAddToTribe(AShooterPlayerState * ForPlayerState, const FTribeData * MyNewTribe) { return NativeCall<bool, AShooterPlayerState *, const FTribeData *>(this, "ACustomGameMode.OnAllowAddToTribe", ForPlayerState, MyNewTribe); }
	bool OnAllowAddXP(UPrimalCharacterStatusComponent * forComp) { return NativeCall<bool, UPrimalCharacterStatusComponent *>(this, "ACustomGameMode.OnAllowAddXP", forComp); }
	bool OnAllowClearTribe(AShooterPlayerState * ForPlayerState) { return NativeCall<bool, AShooterPlayerState *>(this, "ACustomGameMode.OnAllowClearTribe", ForPlayerState); }
	bool OnAllowModifyStatusValue(UPrimalCharacterStatusComponent * forComp, EPrimalCharacterStatusValue::Type valueType, float Amount) { return NativeCall<bool, UPrimalCharacterStatusComponent *, EPrimalCharacterStatusValue::Type, float>(this, "ACustomGameMode.OnAllowModifyStatusValue", forComp, valueType, Amount); }
	bool OnAllowNotifyRemotePlayerDeath(AShooterCharacter * forChar) { return NativeCall<bool, AShooterCharacter *>(this, "ACustomGameMode.OnAllowNotifyRemotePlayerDeath", forChar); }
	bool OnAllowRenameTribe(AShooterPlayerState * ForPlayerState, const FString * TribeName) { return NativeCall<bool, AShooterPlayerState *, const FString *>(this, "ACustomGameMode.OnAllowRenameTribe", ForPlayerState, TribeName); }
	FString * OnDoGameCommand(FString * result, const FString * TheCommand) { return NativeCall<FString *, FString *, const FString *>(this, "ACustomGameMode.OnDoGameCommand", result, TheCommand); }
	bool OnHandleLeavingMap() { return NativeCall<bool>(this, "ACustomGameMode.OnHandleLeavingMap"); }
	bool OnInitGame(const FString * MapName, const FString * Options, FString * ErrorMessage) { return NativeCall<bool, const FString *, const FString *, FString *>(this, "ACustomGameMode.OnInitGame", MapName, Options, ErrorMessage); }
	bool OnInitGameState() { return NativeCall<bool>(this, "ACustomGameMode.OnInitGameState"); }
	bool OnInitOptionEvent(const FString * Options) { return NativeCall<bool, const FString *>(this, "ACustomGameMode.OnInitOptionEvent", Options); }
	bool OnIsSpawnpointAllowed(APlayerStart * SpawnPoint, AController * Player) { return NativeCall<bool, APlayerStart *, AController *>(this, "ACustomGameMode.OnIsSpawnpointAllowed", SpawnPoint, Player); }
	bool OnIsUsedSpawnPointStillSupported(APlayerStart * SpawnPoint, AController * Player) { return NativeCall<bool, APlayerStart *, AController *>(this, "ACustomGameMode.OnIsUsedSpawnPointStillSupported", SpawnPoint, Player); }
	bool OnPlayerCanRestart(APlayerController * Player) { return NativeCall<bool, APlayerController *>(this, "ACustomGameMode.OnPlayerCanRestart", Player); }
	bool OnRemoveTribe(int TribeID) { return NativeCall<bool, int>(this, "ACustomGameMode.OnRemoveTribe", TribeID); }
	bool OnUpdateTribeData(const FTribeData * NewTribeData) { return NativeCall<bool, const FTribeData *>(this, "ACustomGameMode.OnUpdateTribeData", NewTribeData); }
};

