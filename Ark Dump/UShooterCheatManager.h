#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FItemCount.h"
#include "AActor.h"
#include "APawn.h"

struct UCheatManager : UObject
{
	char __padding[0x58L];
	float& DebugTraceDistanceField() { return *GetNativePointerField<float*>(this, "UCheatManager.DebugTraceDistance"); }
	float& DebugCapsuleHalfHeightField() { return *GetNativePointerField<float*>(this, "UCheatManager.DebugCapsuleHalfHeight"); }
	float& DebugCapsuleRadiusField() { return *GetNativePointerField<float*>(this, "UCheatManager.DebugCapsuleRadius"); }
	float& DebugTraceDrawNormalLengthField() { return *GetNativePointerField<float*>(this, "UCheatManager.DebugTraceDrawNormalLength"); }
	TEnumAsByte<enum ECollisionChannel>& DebugTraceChannelField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionChannel>*>(this, "UCheatManager.DebugTraceChannel"); }
	TArray<FDebugTraceInfo>& DebugTraceInfoListField() { return *GetNativePointerField<TArray<FDebugTraceInfo>*>(this, "UCheatManager.DebugTraceInfoList"); }
	TArray<FDebugTraceInfo>& DebugTracePawnInfoListField() { return *GetNativePointerField<TArray<FDebugTraceInfo>*>(this, "UCheatManager.DebugTracePawnInfoList"); }
	int& CurrentTraceIndexField() { return *GetNativePointerField<int*>(this, "UCheatManager.CurrentTraceIndex"); }
	int& CurrentTracePawnIndexField() { return *GetNativePointerField<int*>(this, "UCheatManager.CurrentTracePawnIndex"); }
	float& DumpAILogsIntervalField() { return *GetNativePointerField<float*>(this, "UCheatManager.DumpAILogsInterval"); }

	// Functions

	void BugIt(const FString * ScreenShotDescription) { NativeCall<void, const FString *>(this, "UCheatManager.BugIt", ScreenShotDescription); }
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll) { NativeCall<void, float, float, float, float, float, float>(this, "UCheatManager.BugItGo", X, Y, Z, Pitch, Yaw, Roll); }
	void BugItGoString(const FString * TheLocation, const FString * TheRotation) { NativeCall<void, const FString *, const FString *>(this, "UCheatManager.BugItGoString", TheLocation, TheRotation); }
	void BugItStringCreator(FVector ViewLocation, FRotator ViewRotation, FString * GoString, FString * LocString) { NativeCall<void, FVector, FRotator, FString *, FString *>(this, "UCheatManager.BugItStringCreator", ViewLocation, ViewRotation, GoString, LocString); }
	void BugItWorker(FVector TheLocation, FRotator TheRotation) { NativeCall<void, FVector, FRotator>(this, "UCheatManager.BugItWorker", TheLocation, TheRotation); }
	void ChangeSize(float F) { NativeCall<void, float>(this, "UCheatManager.ChangeSize", F); }
	void DamageTarget(float DamageAmount) { NativeCall<void, float>(this, "UCheatManager.DamageTarget", DamageAmount); }
	void DebugCapsuleSweep() { NativeCall<void>(this, "UCheatManager.DebugCapsuleSweep"); }
	void DebugCapsuleSweepCapture() { NativeCall<void>(this, "UCheatManager.DebugCapsuleSweepCapture"); }
	void DebugCapsuleSweepChannel(ECollisionChannel Channel) { NativeCall<void, ECollisionChannel>(this, "UCheatManager.DebugCapsuleSweepChannel", Channel); }
	void DebugCapsuleSweepClear() { NativeCall<void>(this, "UCheatManager.DebugCapsuleSweepClear"); }
	void DebugCapsuleSweepComplex(bool bTraceComplex) { NativeCall<void, bool>(this, "UCheatManager.DebugCapsuleSweepComplex", bTraceComplex); }
	void DebugCapsuleSweepPawn() { NativeCall<void>(this, "UCheatManager.DebugCapsuleSweepPawn"); }
	void DebugCapsuleSweepSize(float HalfHeight, float Radius) { NativeCall<void, float, float>(this, "UCheatManager.DebugCapsuleSweepSize", HalfHeight, Radius); }
	void DestroyAll(TSubclassOf<AActor> aClass, bool bExactMatch) { NativeCall<void, TSubclassOf<AActor>, bool>(this, "UCheatManager.DestroyAll", aClass, bExactMatch); }
	void DestroyPawns(TSubclassOf<APawn> aClass) { NativeCall<void, TSubclassOf<APawn>>(this, "UCheatManager.DestroyPawns", aClass); }
	void DestroyTarget() { NativeCall<void>(this, "UCheatManager.DestroyTarget"); }
	void DisableDebugCamera() { NativeCall<void>(this, "UCheatManager.DisableDebugCamera"); }
	void DumpOnlineSessionState() { NativeCall<void>(this, "UCheatManager.DumpOnlineSessionState"); }
	void DumpVoiceMutingState() { NativeCall<void>(this, "UCheatManager.DumpVoiceMutingState"); }
	void EnableDebugCamera() { NativeCall<void>(this, "UCheatManager.EnableDebugCamera"); }
	void FlushLog() { NativeCall<void>(this, "UCheatManager.FlushLog"); }
	void Fly() { NativeCall<void>(this, "UCheatManager.Fly"); }
	void FreezeFrame(float delay) { NativeCall<void, float>(this, "UCheatManager.FreezeFrame", delay); }
	void Ghost() { NativeCall<void>(this, "UCheatManager.Ghost"); }
	void God() { NativeCall<void>(this, "UCheatManager.God"); }
	void LogLoc() { NativeCall<void>(this, "UCheatManager.LogLoc"); }
	void OnlyLoadLevel(FName PackageName) { NativeCall<void, FName>(this, "UCheatManager.OnlyLoadLevel", PackageName); }
	void PlayersOnly() { NativeCall<void>(this, "UCheatManager.PlayersOnly"); }
	void RebuildNavigation() { NativeCall<void>(this, "UCheatManager.RebuildNavigation"); }
	void SetLevelStreamingStatus(FName PackageName, bool bShouldBeLoaded, bool bShouldBeVisible) { NativeCall<void, FName, bool, bool>(this, "UCheatManager.SetLevelStreamingStatus", PackageName, bShouldBeLoaded, bShouldBeVisible); }
	void SetNavDrawDistance(float DrawDistance) { NativeCall<void, float>(this, "UCheatManager.SetNavDrawDistance", DrawDistance); }
	void SetWorldOrigin() { NativeCall<void>(this, "UCheatManager.SetWorldOrigin"); }
	void Slomo(float T) { NativeCall<void, float>(this, "UCheatManager.Slomo", T); }
	void StreamLevelIn(FName PackageName) { NativeCall<void, FName>(this, "UCheatManager.StreamLevelIn", PackageName); }
	void StreamLevelOut(FName PackageName) { NativeCall<void, FName>(this, "UCheatManager.StreamLevelOut", PackageName); }
	void Summon(const FString * ClassName) { NativeCall<void, const FString *>(this, "UCheatManager.Summon", ClassName); }
	void Teleport() { NativeCall<void>(this, "UCheatManager.Teleport"); }
	void TestCollisionDistance() { NativeCall<void>(this, "UCheatManager.TestCollisionDistance"); }
	void ToggleDebugCamera() { NativeCall<void>(this, "UCheatManager.ToggleDebugCamera"); }
	void ViewActor(FName ActorName) { NativeCall<void, FName>(this, "UCheatManager.ViewActor", ActorName); }
	void ViewClass(TSubclassOf<AActor> DesiredClass) { NativeCall<void, TSubclassOf<AActor>>(this, "UCheatManager.ViewClass", DesiredClass); }
	void ViewPlayer(const FString * S) { NativeCall<void, const FString *>(this, "UCheatManager.ViewPlayer", S); }
	void ViewSelf() { NativeCall<void>(this, "UCheatManager.ViewSelf"); }
	void Walk() { NativeCall<void>(this, "UCheatManager.Walk"); }
	void WidgetReflector() { NativeCall<void>(this, "UCheatManager.WidgetReflector"); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UCheatManager.GetWorld"); }
	void ServerToggleAILogging() { NativeCall<void>(this, "UCheatManager.ServerToggleAILogging"); }
};

struct UShooterCheatManager : UCheatManager
{
	char __padding[0x18L];
	bool& bIsRCONCheatManagerField() { return *GetNativePointerField<bool*>(this, "UShooterCheatManager.bIsRCONCheatManager"); }
	AShooterPlayerController * MyPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "UShooterCheatManager.MyPC"); }
	int& PendingTribeTeamIDField() { return *GetNativePointerField<int*>(this, "UShooterCheatManager.PendingTribeTeamID"); }

	// Functions

	void AddBuffPreventTagToSelf(FName TagName) { NativeCall<void, FName>(this, "UShooterCheatManager.AddBuffPreventTagToSelf", TagName); }
	void AddChibiExp(float HowMuch) { NativeCall<void, float>(this, "UShooterCheatManager.AddChibiExp", HowMuch); }
	void AddChibiExpToPlayer(__int64 PlayerID, float HowMuch) { NativeCall<void, __int64, float>(this, "UShooterCheatManager.AddChibiExpToPlayer", PlayerID, HowMuch); }
	void AddEquipmentDurability(const float durability) { NativeCall<void, const float>(this, "UShooterCheatManager.AddEquipmentDurability", durability); }
	void AddExperience(float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe) { NativeCall<void, float, bool, bool>(this, "UShooterCheatManager.AddExperience", HowMuch, fromTribeShare, bPreventSharingWithTribe); }
	void AddExperienceToTarget(float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe) { NativeCall<void, float, bool, bool>(this, "UShooterCheatManager.AddExperienceToTarget", HowMuch, fromTribeShare, bPreventSharingWithTribe); }
	void AddHexagons(float HowMuch) { NativeCall<void, float>(this, "UShooterCheatManager.AddHexagons", HowMuch); }
	void AddItemToAllClustersInventory(FString UserId, int MasterIndexNum) { NativeCall<void, FString, int>(this, "UShooterCheatManager.AddItemToAllClustersInventory", UserId, MasterIndexNum); }
	void AddWorldBuff(const FString * WorldBuffIdentifier) { NativeCall<void, const FString *>(this, "UShooterCheatManager.AddWorldBuff", WorldBuffIdentifier); }
	void AllowPlayerToJoinNoCheck(const FString * SteamId) { NativeCall<void, const FString *>(this, "UShooterCheatManager.AllowPlayerToJoinNoCheck", SteamId); }
	void BanPlayer(FString PlayerSteamName) { NativeCall<void, FString>(this, "UShooterCheatManager.BanPlayer", PlayerSteamName); }
	void Broadcast(const FString * MessageText) { NativeCall<void, const FString *>(this, "UShooterCheatManager.Broadcast", MessageText); }
	void CamZoomIn() { NativeCall<void>(this, "UShooterCheatManager.CamZoomIn"); }
	void CamZoomOut() { NativeCall<void>(this, "UShooterCheatManager.CamZoomOut"); }
	void ClearCryoSickness() { NativeCall<void>(this, "UShooterCheatManager.ClearCryoSickness"); }
	void ClearMessageOfTheDay() { NativeCall<void>(this, "UShooterCheatManager.ClearMessageOfTheDay"); }
	void ClearMyBuffs() { NativeCall<void>(this, "UShooterCheatManager.ClearMyBuffs"); }
	void ClearPlayerInventory(int playerID, bool bClearInventory, bool bClearSlotItems, bool bClearEquippedItems) { NativeCall<void, int, bool, bool, bool>(this, "UShooterCheatManager.ClearPlayerInventory", playerID, bClearInventory, bClearSlotItems, bClearEquippedItems); }
	void ClearTutorials() { NativeCall<void>(this, "UShooterCheatManager.ClearTutorials"); }
	void CompleteMission() { NativeCall<void>(this, "UShooterCheatManager.CompleteMission"); }
	void Cryo(const FString * DinoID) { NativeCall<void, const FString *>(this, "UShooterCheatManager.Cryo", DinoID); }
	void CryoAOE(float radius) { NativeCall<void, float>(this, "UShooterCheatManager.CryoAOE", radius); }
	void CryoMyTarget() { NativeCall<void>(this, "UShooterCheatManager.CryoMyTarget"); }
	void DCMSet(FName Cheat, float Val) { NativeCall<void, FName, float>(this, "UShooterCheatManager.DCMSet", Cheat, Val); }
	void DeactivateMission() { NativeCall<void>(this, "UShooterCheatManager.DeactivateMission"); }
	void DebugAllowVRMissionTeleport() { NativeCall<void>(this, "UShooterCheatManager.DebugAllowVRMissionTeleport"); }
	void DebugCompanionAsyncLoadedFiles() { NativeCall<void>(this, "UShooterCheatManager.DebugCompanionAsyncLoadedFiles"); }
	void DebugCompanionReactions() { NativeCall<void>(this, "UShooterCheatManager.DebugCompanionReactions"); }
	void DebugMyTarget() { NativeCall<void>(this, "UShooterCheatManager.DebugMyTarget"); }
	void DebugMyTargetFromLocation(const FVector * spectatorLocation, const FRotator * rotator) { NativeCall<void, const FVector *, const FRotator *>(this, "UShooterCheatManager.DebugMyTargetFromLocation", spectatorLocation, rotator); }
	void DebugMyTargetPrint(AActor * actor) { NativeCall<void, AActor *>(this, "UShooterCheatManager.DebugMyTargetPrint", actor); }
	void DebugToggleHLNAMonologue() { NativeCall<void>(this, "UShooterCheatManager.DebugToggleHLNAMonologue"); }
	void DeepPockets() { NativeCall<void>(this, "UShooterCheatManager.DeepPockets"); }
	void DefeatAllBosses(int playerID) { NativeCall<void, int>(this, "UShooterCheatManager.DefeatAllBosses", playerID); }
	void DefeatBoss(int playerID, FName bossName, char difficulty) { NativeCall<void, int, FName, char>(this, "UShooterCheatManager.DefeatBoss", playerID, bossName, difficulty); }
	void DestroyAOE(FName Category, float Radius) { NativeCall<void, FName, float>(this, "UShooterCheatManager.DestroyAOE", Category, Radius); }
	void DestroyActors(const FString * ClassName, bool bExactMatch) { NativeCall<void, const FString *, bool>(this, "UShooterCheatManager.DestroyActors", ClassName, bExactMatch); }
	void DestroyAllEnemies() { NativeCall<void>(this, "UShooterCheatManager.DestroyAllEnemies"); }
	void DestroyAllTames() { NativeCall<void>(this, "UShooterCheatManager.DestroyAllTames"); }
	void DestroyFoliage(float Radius, const bool PutFoliageResourcesInInventory) { NativeCall<void, float, const bool>(this, "UShooterCheatManager.DestroyFoliage", Radius, PutFoliageResourcesInInventory); }
	void DestroyMyPawn() { NativeCall<void>(this, "UShooterCheatManager.DestroyMyPawn"); }
	void DestroyMyTarget2() { NativeCall<void>(this, "UShooterCheatManager.DestroyMyTarget2"); }
	void DestroyMyTarget3() { NativeCall<void>(this, "UShooterCheatManager.DestroyMyTarget3"); }
	void DestroyMyTarget4() { NativeCall<void>(this, "UShooterCheatManager.DestroyMyTarget4"); }
	void DestroyMyTarget() { NativeCall<void>(this, "UShooterCheatManager.DestroyMyTarget"); }
	void DestroyStructures() { NativeCall<void>(this, "UShooterCheatManager.DestroyStructures"); }
	void DestroyTribeDinos() { NativeCall<void>(this, "UShooterCheatManager.DestroyTribeDinos"); }
	void DestroyTribeId(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeId", TribeTeamID); }
	void DestroyTribeIdDinos(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeIdDinos", TribeTeamID); }
	void DestroyTribeIdPlayers(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeIdPlayers", TribeTeamID); }
	void DestroyTribeIdStructures(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.DestroyTribeIdStructures", TribeTeamID); }
	void DestroyTribePlayers() { NativeCall<void>(this, "UShooterCheatManager.DestroyTribePlayers"); }
	void DestroyTribeStructures() { NativeCall<void>(this, "UShooterCheatManager.DestroyTribeStructures"); }
	void DestroyTribeStructuresLessThan(int TribeTeamID, int Connections, bool includeContainers, bool includeLargeGates) { NativeCall<void, int, int, bool, bool>(this, "UShooterCheatManager.DestroyTribeStructuresLessThan", TribeTeamID, Connections, includeContainers, includeLargeGates); }
	void DestroyWildDinoClasses(const FString * ClassName, bool bExactMatch) { NativeCall<void, const FString *, bool>(this, "UShooterCheatManager.DestroyWildDinoClasses", ClassName, bExactMatch); }
	void DestroyWildDinos() { NativeCall<void>(this, "UShooterCheatManager.DestroyWildDinos"); }
	void DetachChar() { NativeCall<void>(this, "UShooterCheatManager.DetachChar"); }
	void Dino(FName CheatName) { NativeCall<void, FName>(this, "UShooterCheatManager.Dino", CheatName); }
	void DinoSet(FName CheatName, float Value) { NativeCall<void, FName, float>(this, "UShooterCheatManager.DinoSet", CheatName, Value); }
	void DisableAllMating() { NativeCall<void>(this, "UShooterCheatManager.DisableAllMating"); }
	void DisableSpectator() { NativeCall<void>(this, "UShooterCheatManager.DisableSpectator"); }
	void DisallowPlayerToJoinNoCheck(const FString * SteamId) { NativeCall<void, const FString *>(this, "UShooterCheatManager.DisallowPlayerToJoinNoCheck", SteamId); }
	void DoDestroyTribeIdStructures() { NativeCall<void>(this, "UShooterCheatManager.DoDestroyTribeIdStructures"); }
	void DoExit() { NativeCall<void>(this, "UShooterCheatManager.DoExit"); }
	void DoHang() { NativeCall<void>(this, "UShooterCheatManager.DoHang"); }
	void DoRestartLevel() { NativeCall<void>(this, "UShooterCheatManager.DoRestartLevel"); }
	void DoTame() { NativeCall<void>(this, "UShooterCheatManager.DoTame"); }
	void DoTestingThing() { NativeCall<void>(this, "UShooterCheatManager.DoTestingThing"); }
	void DrainFood(float HowMuch) { NativeCall<void, float>(this, "UShooterCheatManager.DrainFood", HowMuch); }
	void DrainWater(float HowMuch) { NativeCall<void, float>(this, "UShooterCheatManager.DrainWater", HowMuch); }
	void DrawDebugBoxForVolumes(float Duration, int VolumeClassIndex, bool bDebugAllVolumeClasses, bool bDrawSolidBox, float LineThickness) { NativeCall<void, float, int, bool, bool, float>(this, "UShooterCheatManager.DrawDebugBoxForVolumes", Duration, VolumeClassIndex, bDebugAllVolumeClasses, bDrawSolidBox, LineThickness); }
	void DumpAssetProperties(const FString * Asset) { NativeCall<void, const FString *>(this, "UShooterCheatManager.DumpAssetProperties", Asset); }
	void DumpDinoStats() { NativeCall<void>(this, "UShooterCheatManager.DumpDinoStats"); }
	void DumpFallbackSeeds() { NativeCall<void>(this, "UShooterCheatManager.DumpFallbackSeeds"); }
	void DupeLastItem() { NativeCall<void>(this, "UShooterCheatManager.DupeLastItem"); }
	void EnableAllMating() { NativeCall<void>(this, "UShooterCheatManager.EnableAllMating"); }
	void EnableCheats(const FString pass) { NativeCall<void, const FString>(this, "UShooterCheatManager.EnableCheats", pass); }
	void EnableSpectator() { NativeCall<void>(this, "UShooterCheatManager.EnableSpectator"); }
	void EnemyInVisible(bool Invisible) { NativeCall<void, bool>(this, "UShooterCheatManager.EnemyInVisible", Invisible); }
	void ExportCurrentPlayerData() { NativeCall<void>(this, "UShooterCheatManager.ExportCurrentPlayerData"); }
	void ExportPlayerData(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.ExportPlayerData", PlayerID); }
	void ExportTargetPlayerData() { NativeCall<void>(this, "UShooterCheatManager.ExportTargetPlayerData"); }
	void FEMCOM(bool bEnableKillChecking, bool bEnableTeleportingChecking) { NativeCall<void, bool, bool>(this, "UShooterCheatManager.FEMCOM", bEnableKillChecking, bEnableTeleportingChecking); }
	void FindMutagenDrops() { NativeCall<void>(this, "UShooterCheatManager.FindMutagenDrops"); }
	AShooterPlayerController * FindPlayerControllerFromPlayerID(__int64 PlayerID) { return NativeCall<AShooterPlayerController *, __int64>(this, "UShooterCheatManager.FindPlayerControllerFromPlayerID", PlayerID); }
	void ForceCheckInMesh() { NativeCall<void>(this, "UShooterCheatManager.ForceCheckInMesh"); }
	void ForceCompleteActiveMission(const FString * MissionStateSimValues) { NativeCall<void, const FString *>(this, "UShooterCheatManager.ForceCompleteActiveMission", MissionStateSimValues); }
	void ForceEnableMeshCheckingOnMe(bool bEnableKillChecking, bool bEnableTeleportingChecking) { NativeCall<void, bool, bool>(this, "UShooterCheatManager.ForceEnableMeshCheckingOnMe", bEnableKillChecking, bEnableTeleportingChecking); }
	void ForceGiveBuff(const FName * BuffBlueprintPath, bool bEnable) { NativeCall<void, const FName *, bool>(this, "UShooterCheatManager.ForceGiveBuff", BuffBlueprintPath, bEnable); }
	void ForceJoinTribe() { NativeCall<void>(this, "UShooterCheatManager.ForceJoinTribe"); }
	void ForceMutagenSpawn() { NativeCall<void>(this, "UShooterCheatManager.ForceMutagenSpawn"); }
	void ForcePlayerToJoinTargetTribe(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.ForcePlayerToJoinTargetTribe", PlayerID); }
	void ForcePlayerToJoinTribe(__int64 PlayerID, FString TribeName) { NativeCall<void, __int64, FString>(this, "UShooterCheatManager.ForcePlayerToJoinTribe", PlayerID, TribeName); }
	void ForcePlayerToJoinTribeId(__int64 PlayerID, int TribeTeamID) { NativeCall<void, __int64, int>(this, "UShooterCheatManager.ForcePlayerToJoinTribeId", PlayerID, TribeTeamID); }
	void ForcePoop() { NativeCall<void>(this, "UShooterCheatManager.ForcePoop"); }
	void ForceReturnIsPS4BuildOnPC(bool ReturnValue) { NativeCall<void, bool>(this, "UShooterCheatManager.ForceReturnIsPS4BuildOnPC", ReturnValue); }
	void ForceReturnIsXboxOneBuildOnPC(bool ReturnValue) { NativeCall<void, bool>(this, "UShooterCheatManager.ForceReturnIsXboxOneBuildOnPC", ReturnValue); }
	void ForceStartMission(FName MissionTag) { NativeCall<void, FName>(this, "UShooterCheatManager.ForceStartMission", MissionTag); }
	void ForceTame() { NativeCall<void>(this, "UShooterCheatManager.ForceTame"); }
	void ForceTameAOE(float Radius) { NativeCall<void, float>(this, "UShooterCheatManager.ForceTameAOE", Radius); }
	void ForceTribes(const FString * PlayerName1, const FString * PlayerName2, const FString * NewTribeName) { NativeCall<void, const FString *, const FString *, const FString *>(this, "UShooterCheatManager.ForceTribes", PlayerName1, PlayerName2, NewTribeName); }
	void ForceUpdateDynamicConfig() { NativeCall<void>(this, "UShooterCheatManager.ForceUpdateDynamicConfig"); }
	void GCM() { NativeCall<void>(this, "UShooterCheatManager.GCM"); }
	void GCMP(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.GCMP", PlayerID); }
	void GCMT() { NativeCall<void>(this, "UShooterCheatManager.GCMT"); }
	void GFI(const FName * blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, const FName *, int, float, bool>(this, "UShooterCheatManager.GFI", blueprintPath, quantityOverride, qualityOverride, bForceBlueprint); }
	void GMBuff() { NativeCall<void>(this, "UShooterCheatManager.GMBuff"); }
	void GMComp(int level) { NativeCall<void, int>(this, "UShooterCheatManager.GMComp", level); }
	void GMSummon(const FString * ClassName, int Level) { NativeCall<void, const FString *, int>(this, "UShooterCheatManager.GMSummon", ClassName, Level); }
	void GameCommand(const FString * TheCommand) { NativeCall<void, const FString *>(this, "UShooterCheatManager.GameCommand", TheCommand); }
	void GetAllItemsNumber() { NativeCall<void>(this, "UShooterCheatManager.GetAllItemsNumber"); }
	void GetAllNumbers() { NativeCall<void>(this, "UShooterCheatManager.GetAllNumbers"); }
	void GetAllStructuresNumber() { NativeCall<void>(this, "UShooterCheatManager.GetAllStructuresNumber"); }
	void GetAllTamesNumber() { NativeCall<void>(this, "UShooterCheatManager.GetAllTamesNumber"); }
	void GetChat() { NativeCall<void>(this, "UShooterCheatManager.GetChat"); }
	void GetEgg(int NumMutationsToAdd) { NativeCall<void, int>(this, "UShooterCheatManager.GetEgg", NumMutationsToAdd); }
	void GetGameLog() { NativeCall<void>(this, "UShooterCheatManager.GetGameLog"); }
	void GetPlayerIDForSteamID(int SteamID) { NativeCall<void, int>(this, "UShooterCheatManager.GetPlayerIDForSteamID", SteamID); }
	void GetSteamIDForPlayerID(int PlayerID) { NativeCall<void, int>(this, "UShooterCheatManager.GetSteamIDForPlayerID", PlayerID); }
	void GTIPL(int TribeID) { NativeCall<void, int>(this, "UShooterCheatManager.GTIPL", TribeID); }
	void GetTribeIdPlayerList(int TribeID) { NativeCall<void, int>(this, "UShooterCheatManager.GetTribeIdPlayerList", TribeID); }
	void GiveAllExplorerNotes() { NativeCall<void>(this, "UShooterCheatManager.GiveAllExplorerNotes"); }
	static void GiveAllItemsInSet(AShooterPlayerController * Controller, const TArray<FItemCount> * Items) { NativeCall<void, AShooterPlayerController *, const TArray<FItemCount> *>(nullptr, "UShooterCheatManager.GiveAllItemsInSet", Controller, Items); }
	void GiveAllStructure() { NativeCall<void>(this, "UShooterCheatManager.GiveAllStructure"); }
	void GiveArmorSet(FName Tier, FName QualityName) { NativeCall<void, FName, FName>(this, "UShooterCheatManager.GiveArmorSet", Tier, QualityName); }
	void GiveBossEngrams(int playerID, FName bossName, char difficulty) { NativeCall<void, int, FName, char>(this, "UShooterCheatManager.GiveBossEngrams", playerID, bossName, difficulty); }
	void GiveBossItems() { NativeCall<void>(this, "UShooterCheatManager.GiveBossItems"); }
	void GiveCreativeMode() { NativeCall<void>(this, "UShooterCheatManager.GiveCreativeMode"); }
	void GiveCreativeModeToPlayer(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.GiveCreativeModeToPlayer", PlayerID); }
	void GiveCreativeModeToTarget() { NativeCall<void>(this, "UShooterCheatManager.GiveCreativeModeToTarget"); }
	void GiveDinoSet(FName Tier, int NumDinos) { NativeCall<void, FName, int>(this, "UShooterCheatManager.GiveDinoSet", Tier, NumDinos); }
	void GiveEngrams() { NativeCall<void>(this, "UShooterCheatManager.GiveEngrams"); }
	void GiveEngramsTekOnly() { NativeCall<void>(this, "UShooterCheatManager.GiveEngramsTekOnly"); }
	void GiveExpToPlayer(__int64 PlayerID, float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe) { NativeCall<void, __int64, float, bool, bool>(this, "UShooterCheatManager.GiveExpToPlayer", PlayerID, HowMuch, fromTribeShare, bPreventSharingWithTribe); }
	void GiveExpToTarget(float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe) { NativeCall<void, float, bool, bool>(this, "UShooterCheatManager.GiveExpToTarget", HowMuch, fromTribeShare, bPreventSharingWithTribe); }
	void GiveExplorerNote(int NoteIndex) { NativeCall<void, int>(this, "UShooterCheatManager.GiveExplorerNote", NoteIndex); }
	void GiveInfiniteStatsToTarget() { NativeCall<void>(this, "UShooterCheatManager.GiveInfiniteStatsToTarget"); }
	void GiveItem(const FString * blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, const FString *, int, float, bool>(this, "UShooterCheatManager.GiveItem", blueprintPath, quantityOverride, qualityOverride, bForceBlueprint); }
	void GiveItemNum(int masterIndexNum, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, int, int, float, bool>(this, "UShooterCheatManager.GiveItemNum", masterIndexNum, quantityOverride, qualityOverride, bForceBlueprint); }
	void GiveItemNumToPlayer(int playerID, int masterIndexNum, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, int, int, int, float, bool>(this, "UShooterCheatManager.GiveItemNumToPlayer", playerID, masterIndexNum, quantityOverride, qualityOverride, bForceBlueprint); }
	void GiveItemSet(FName Tier) { NativeCall<void, FName>(this, "UShooterCheatManager.GiveItemSet", Tier); }
	void GiveItemSkins(const FString * EquipmentType) { NativeCall<void, const FString *>(this, "UShooterCheatManager.GiveItemSkins", EquipmentType); }
	void GiveItemToPlayer(int playerID, const FString * blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint) { NativeCall<void, int, const FString *, int, float, bool>(this, "UShooterCheatManager.GiveItemToPlayer", playerID, blueprintPath, quantityOverride, qualityOverride, bForceBlueprint); }
	void GiveMaxLevel(int playerID) { NativeCall<void, int>(this, "UShooterCheatManager.GiveMaxLevel", playerID); }
	void GiveResources() { NativeCall<void>(this, "UShooterCheatManager.GiveResources"); }
	void GiveTekEngramsTo(__int64 PlayerID, const FName * blueprintPath) { NativeCall<void, __int64, const FName *>(this, "UShooterCheatManager.GiveTekEngramsTo", PlayerID, blueprintPath); }
	void GiveToMe() { NativeCall<void>(this, "UShooterCheatManager.GiveToMe"); }
	void GiveToMeAOE(float Radius) { NativeCall<void, float>(this, "UShooterCheatManager.GiveToMeAOE", Radius); }
	void GiveWeaponSet(FName Tier, FName QualityName) { NativeCall<void, FName, FName>(this, "UShooterCheatManager.GiveWeaponSet", Tier, QualityName); }
	void GlobalObjectCount() { NativeCall<void>(this, "UShooterCheatManager.GlobalObjectCount"); }
	void GoToFirstMutagenDrop() { NativeCall<void>(this, "UShooterCheatManager.GoToFirstMutagenDrop"); }
	void God() { NativeCall<void>(this, "UShooterCheatManager.God"); }
	void HatchEgg() { NativeCall<void>(this, "UShooterCheatManager.HatchEgg"); }
	void HiWarp(const FString * ClassName, int Index) { NativeCall<void, const FString *, int>(this, "UShooterCheatManager.HiWarp", ClassName, Index); }
	void HibernationReport(const FString * ClassName) { NativeCall<void, const FString *>(this, "UShooterCheatManager.HibernationReport", ClassName); }
	void HideTutorial(int TutorialInde) { NativeCall<void, int>(this, "UShooterCheatManager.HideTutorial", TutorialInde); }
	void HurtMyAOE(int HowMuch, float Radius) { NativeCall<void, int, float>(this, "UShooterCheatManager.HurtMyAOE", HowMuch, Radius); }
	void HurtMyTarget(int HowMuch) { NativeCall<void, int>(this, "UShooterCheatManager.HurtMyTarget", HowMuch); }
	void Impregnate() { NativeCall<void>(this, "UShooterCheatManager.Impregnate"); }
	void InfiniteStats() { NativeCall<void>(this, "UShooterCheatManager.InfiniteStats"); }
	void InfiniteWeight() { NativeCall<void>(this, "UShooterCheatManager.InfiniteWeight"); }
	void IsUndermesh(const float debugDrawSeconds) { NativeCall<void, const float>(this, "UShooterCheatManager.IsUndermesh", debugDrawSeconds); }
	void JoinTribe(__int64 PlayerID, int TribeTeamID) { NativeCall<void, __int64, int>(this, "UShooterCheatManager.JoinTribe", PlayerID, TribeTeamID); }
	void KickPlayer(FString PlayerSteamName) { NativeCall<void, FString>(this, "UShooterCheatManager.KickPlayer", PlayerSteamName); }
	void Kill() { NativeCall<void>(this, "UShooterCheatManager.Kill"); }
	void KillAOE(FName Category, float Radius) { NativeCall<void, FName, float>(this, "UShooterCheatManager.KillAOE", Category, Radius); }
	void KillAOETribe(FName Category, float Radius, int TribeID, bool destroyOnly) { NativeCall<void, FName, float, int, bool>(this, "UShooterCheatManager.KillAOETribe", Category, Radius, TribeID, destroyOnly); }
	void KillPlayer(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.KillPlayer", PlayerID); }
	void LMA() { NativeCall<void>(this, "UShooterCheatManager.LMA"); }
	void LeaveMeAlone() { NativeCall<void>(this, "UShooterCheatManager.LeaveMeAlone"); }
	void LeaveMission() { NativeCall<void>(this, "UShooterCheatManager.LeaveMission"); }
	void LessThan(int TribeTeamID, int Connections, bool includeContainers) { NativeCall<void, int, int, bool>(this, "UShooterCheatManager.LessThan", TribeTeamID, Connections, includeContainers); }
	void LevelUp(FName statName, int numLevels) { NativeCall<void, FName, int>(this, "UShooterCheatManager.LevelUp", statName, numLevels); }
	void LevelUpAOE(FName statName, float Radius, int numLevels) { NativeCall<void, FName, float, int>(this, "UShooterCheatManager.LevelUpAOE", statName, Radius, numLevels); }
	void LevelUpInternal(APrimalCharacter * character, FName statName, int numLevels) { NativeCall<void, APrimalCharacter *, FName, int>(this, "UShooterCheatManager.LevelUpInternal", character, statName, numLevels); }
	void LevelUpTarget(FName StatName, int NumLevels) { NativeCall<void, FName, int>(this, "UShooterCheatManager.LevelUpTarget", StatName, NumLevels); }
	void ListActiveHordeEvents() { NativeCall<void>(this, "UShooterCheatManager.ListActiveHordeEvents"); }
	void ListAllItems() { NativeCall<void>(this, "UShooterCheatManager.ListAllItems"); }
	void ListAllPlayerBuffs() { NativeCall<void>(this, "UShooterCheatManager.ListAllPlayerBuffs"); }
	FString * ListBuffs(FString * result, APrimalCharacter * target) { return NativeCall<FString *, FString *, APrimalCharacter *>(this, "UShooterCheatManager.ListBuffs", result, target); }
	void ListDinos() { NativeCall<void>(this, "UShooterCheatManager.ListDinos"); }
	void ListMyBuffs() { NativeCall<void>(this, "UShooterCheatManager.ListMyBuffs"); }
	void ListMyTargetBuffs() { NativeCall<void>(this, "UShooterCheatManager.ListMyTargetBuffs"); }
	void ListPlayers() { NativeCall<void>(this, "UShooterCheatManager.ListPlayers"); }
	void LogStackTrace() { NativeCall<void>(this, "UShooterCheatManager.LogStackTrace"); }
	void LvlUp(__int64 PlayerID, __int16 Level) { NativeCall<void, __int64, __int16>(this, "UShooterCheatManager.LvlUp", PlayerID, Level); }
	void MakeTribeAdmin() { NativeCall<void>(this, "UShooterCheatManager.MakeTribeAdmin"); }
	void MakeTribeFounder() { NativeCall<void>(this, "UShooterCheatManager.MakeTribeFounder"); }
	void MaxAscend(int playerID) { NativeCall<void, int>(this, "UShooterCheatManager.MaxAscend", playerID); }
	void Mission(FName CheatName, float Value) { NativeCall<void, FName, float>(this, "UShooterCheatManager.Mission", CheatName, Value); }
	void MoveTargetTo(float x, float y, float z) { NativeCall<void, float, float, float>(this, "UShooterCheatManager.MoveTargetTo", x, y, z); }
	void OnToggleInGameMenu() { NativeCall<void>(this, "UShooterCheatManager.OnToggleInGameMenu"); }
	void OpenMap(const FString * MapName) { NativeCall<void, const FString *>(this, "UShooterCheatManager.OpenMap", MapName); }
	void PlayerCommand(const FString * TheCommand) { NativeCall<void, const FString *>(this, "UShooterCheatManager.PlayerCommand", TheCommand); }
	void PrintActorLocation(const FString * ActorName) { NativeCall<void, const FString *>(this, "UShooterCheatManager.PrintActorLocation", ActorName); }
	void PrintMessageOut(const FString * Msg) { NativeCall<void, const FString *>(this, "UShooterCheatManager.PrintMessageOut", Msg); }
	static float QualityNameToFloat(FName QualityName) { return NativeCall<float, FName>(nullptr, "UShooterCheatManager.QualityNameToFloat", QualityName); }
	void RainCritters(int NumberActors, float SpreadAmount, float ZOffset) { NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainCritters", NumberActors, SpreadAmount, ZOffset); }
	void RainDanger(int NumberActors, float SpreadAmount, float ZOffset) { NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainDanger", NumberActors, SpreadAmount, ZOffset); }
	void RainDinos(int NumberActors, float SpreadAmount, float ZOffset) { NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainDinos", NumberActors, SpreadAmount, ZOffset); }
	void RainDinosHelper(const TArray<FString> * dinoRefs, int NumberActors, float SpreadAmount, float ZOffset) { NativeCall<void, const TArray<FString> *, int, float, float>(this, "UShooterCheatManager.RainDinosHelper", dinoRefs, NumberActors, SpreadAmount, ZOffset); }
	void RainMonkeys(int NumberActors, float SpreadAmount, float ZOffset) { NativeCall<void, int, float, float>(this, "UShooterCheatManager.RainMonkeys", NumberActors, SpreadAmount, ZOffset); }
	void ReassertColorization() { NativeCall<void>(this, "UShooterCheatManager.ReassertColorization"); }
	void RefillStats() { NativeCall<void>(this, "UShooterCheatManager.RefillStats"); }
	void RegrowFoliage(float Radius) { NativeCall<void, float>(this, "UShooterCheatManager.RegrowFoliage", Radius); }
	void ReloadAdminIPs() { NativeCall<void>(this, "UShooterCheatManager.ReloadAdminIPs"); }
	void RemoveAllWorldBuffs() { NativeCall<void>(this, "UShooterCheatManager.RemoveAllWorldBuffs"); }
	void RemoveTribeAdmin() { NativeCall<void>(this, "UShooterCheatManager.RemoveTribeAdmin"); }
	void RemoveWorldBuff(const FString * WorldBuffIdentifier) { NativeCall<void, const FString *>(this, "UShooterCheatManager.RemoveWorldBuff", WorldBuffIdentifier); }
	void RenamePlayer(const FString * PlayerName, const FString * NewName) { NativeCall<void, const FString *, const FString *>(this, "UShooterCheatManager.RenamePlayer", PlayerName, NewName); }
	void RenamePlayerId(int PlayerID, const FString * NewName) { NativeCall<void, int, const FString *>(this, "UShooterCheatManager.RenamePlayerId", PlayerID, NewName); }
	void RenameTribe(const FString * TribeName, const FString * NewName) { NativeCall<void, const FString *, const FString *>(this, "UShooterCheatManager.RenameTribe", TribeName, NewName); }
	void RenameTribeID(int TribeID, const FString * NewName) { NativeCall<void, int, const FString *>(this, "UShooterCheatManager.RenameTribeID", TribeID, NewName); }
	void RepairArea(float radius) { NativeCall<void, float>(this, "UShooterCheatManager.RepairArea", radius); }
	void ReportLeastSpawnManagers() { NativeCall<void>(this, "UShooterCheatManager.ReportLeastSpawnManagers"); }
	void ReportSpawnManagers() { NativeCall<void>(this, "UShooterCheatManager.ReportSpawnManagers"); }
	void RequestUpdateActiveMissionTags() { NativeCall<void>(this, "UShooterCheatManager.RequestUpdateActiveMissionTags"); }
	void ResetLeaderboards() { NativeCall<void>(this, "UShooterCheatManager.ResetLeaderboards"); }
	void ResetLiveTuningOverloads() { NativeCall<void>(this, "UShooterCheatManager.ResetLiveTuningOverloads"); }
	void SAP() { NativeCall<void>(this, "UShooterCheatManager.SAP"); }
	void SDF(const FName * DinoBlueprintPath, bool bIsTamed, int DinoLevel) { NativeCall<void, const FName *, bool, int>(this, "UShooterCheatManager.SDF", DinoBlueprintPath, bIsTamed, DinoLevel); }
	void SDFRide(const FName * DinoBlueprintPath, int DinoLevel) { NativeCall<void, const FName *, int>(this, "UShooterCheatManager.SDFRide", DinoBlueprintPath, DinoLevel); }
	void SPI(float X, float Y, float Z, float Yaw, float Pitch) { NativeCall<void, float, float, float, float, float>(this, "UShooterCheatManager.SPI", X, Y, Z, Yaw, Pitch); }
	void SaveWorld() { NativeCall<void>(this, "UShooterCheatManager.SaveWorld"); }
	void SaveWorldDisableTransfer() { NativeCall<void>(this, "UShooterCheatManager.SaveWorldDisableTransfer"); }
	void ScriptCommand(const FString * commandString) { NativeCall<void, const FString *>(this, "UShooterCheatManager.ScriptCommand", commandString); }
	void SendDataDogMetric(FString msg) { NativeCall<void, FString>(this, "UShooterCheatManager.SendDataDogMetric", msg); }
	void ServerChat(const FString * MessageText) { NativeCall<void, const FString *>(this, "UShooterCheatManager.ServerChat", MessageText); }
	void ServerChatTo(const FString * SteamID, const FString * MessageText) { NativeCall<void, const FString *, const FString *>(this, "UShooterCheatManager.ServerChatTo", SteamID, MessageText); }
	void ServerChatToPlayer(const FString * PlayerName, const FString * MessageText) { NativeCall<void, const FString *, const FString *>(this, "UShooterCheatManager.ServerChatToPlayer", PlayerName, MessageText); }
	void SetActiveMissionDebugFlags(int DebugFlags) { NativeCall<void, int>(this, "UShooterCheatManager.SetActiveMissionDebugFlags", DebugFlags); }
	void SetAllAvailableMissionsComplete() { NativeCall<void>(this, "UShooterCheatManager.SetAllAvailableMissionsComplete"); }
	void SetBabyAge(float AgeValue) { NativeCall<void, float>(this, "UShooterCheatManager.SetBabyAge", AgeValue); }
	void SetBabyAgeAOE(float AgeValue, float Radius) { NativeCall<void, float, float>(this, "UShooterCheatManager.SetBabyAgeAOE", AgeValue, Radius); }
	void SetChatLogMaxAgeInDays(int NumDays) { NativeCall<void, int>(this, "UShooterCheatManager.SetChatLogMaxAgeInDays", NumDays); }
	bool SetCreativeModeOnPawn(AShooterCharacter * Pawn, bool bCreativeMode) { return NativeCall<bool, AShooterCharacter *, bool>(this, "UShooterCheatManager.SetCreativeModeOnPawn", Pawn, bCreativeMode); }
	void SetDay(const int day) { NativeCall<void, const int>(this, "UShooterCheatManager.SetDay", day); }
	void SetDebugMeleeAttacks(bool bDebugMelee, const float drawDuration) { NativeCall<void, bool, const float>(this, "UShooterCheatManager.SetDebugMeleeAttacks", bDebugMelee, drawDuration); }
	void SetDifficultyValue(float Value) { NativeCall<void, float>(this, "UShooterCheatManager.SetDifficultyValue", Value); }
	void SetFacialHairPercent(float thePercent) { NativeCall<void, float>(this, "UShooterCheatManager.SetFacialHairPercent", thePercent); }
	void SetFacialHairstyle(int hairStyleIndex) { NativeCall<void, int>(this, "UShooterCheatManager.SetFacialHairstyle", hairStyleIndex); }
	void SetGlobalPause(bool bIsPaused) { NativeCall<void, bool>(this, "UShooterCheatManager.SetGlobalPause", bIsPaused); }
	void SetGodMode(bool bEnable) { NativeCall<void, bool>(this, "UShooterCheatManager.SetGodMode", bEnable); }
	void SetGraphicsQuality(int val) { NativeCall<void, int>(this, "UShooterCheatManager.SetGraphicsQuality", val); }
	void SetHeadHairPercent(float thePercent) { NativeCall<void, float>(this, "UShooterCheatManager.SetHeadHairPercent", thePercent); }
	void SetHeadHairstyle(int hairStyleIndex) { NativeCall<void, int>(this, "UShooterCheatManager.SetHeadHairstyle", hairStyleIndex); }
	void SetImprintQuality(float ImprintQuality) { NativeCall<void, float>(this, "UShooterCheatManager.SetImprintQuality", ImprintQuality); }
	void SetImprintedPlayer(FString NewImprinterName, int NewImprinterPlayerDataID) { NativeCall<void, FString, int>(this, "UShooterCheatManager.SetImprintedPlayer", NewImprinterName, NewImprinterPlayerDataID); }
	void SetInfiniteStats(bool bInfinite) { NativeCall<void, bool>(this, "UShooterCheatManager.SetInfiniteStats", bInfinite); }
	void SetInstantHarvest(bool bEnable) { NativeCall<void, bool>(this, "UShooterCheatManager.SetInstantHarvest", bEnable); }
	void SetMaterialParamaterCollectionByNameAndFloatValue(FName ParamaterName, float ParamaterValue) { NativeCall<void, FName, float>(this, "UShooterCheatManager.SetMaterialParamaterCollectionByNameAndFloatValue", ParamaterName, ParamaterValue); }
	void SetMessageOfTheDay(const FString * Message) { NativeCall<void, const FString *>(this, "UShooterCheatManager.SetMessageOfTheDay", Message); }
	void SetMyTargetSleeping(bool bIsSleeping) { NativeCall<void, bool>(this, "UShooterCheatManager.SetMyTargetSleeping", bIsSleeping); }
	void SetNetworkTime(float NewTime) { NativeCall<void, float>(this, "UShooterCheatManager.SetNetworkTime", NewTime); }
	void SetPlayerLevel(__int64 PlayerID, __int16 Level) { NativeCall<void, __int64, __int16>(this, "UShooterCheatManager.SetPlayerLevel", PlayerID, Level); }
	void SetPlayerPos(float X, float Y, float Z) { NativeCall<void, float, float, float>(this, "UShooterCheatManager.SetPlayerPos", X, Y, Z); }
	void SetShowAllPlayers(bool bEnable) { NativeCall<void, bool>(this, "UShooterCheatManager.SetShowAllPlayers", bEnable); }
	void SetStatOnTarget(FName StatName, float value) { NativeCall<void, FName, float>(this, "UShooterCheatManager.SetStatOnTarget", StatName, value); }
	void SetTamingEffectivenessModifier(float TamingEffectiveness) { NativeCall<void, float>(this, "UShooterCheatManager.SetTamingEffectivenessModifier", TamingEffectiveness); }
	void SetTargetDinoColor(int ColorRegion, int ColorID) { NativeCall<void, int, int>(this, "UShooterCheatManager.SetTargetDinoColor", ColorRegion, ColorID); }
	void SetTargetPlayerBodyVal(int BodyValIndex, float BodyVal) { NativeCall<void, int, float>(this, "UShooterCheatManager.SetTargetPlayerBodyVal", BodyValIndex, BodyVal); }
	void SetTargetPlayerColorVal(int ColorValIndex, float ColorVal) { NativeCall<void, int, float>(this, "UShooterCheatManager.SetTargetPlayerColorVal", ColorValIndex, ColorVal); }
	void SetTimeOfDay(const FString * timeString) { NativeCall<void, const FString *>(this, "UShooterCheatManager.SetTimeOfDay", timeString); }
	void ShowActiveMissions() { NativeCall<void>(this, "UShooterCheatManager.ShowActiveMissions"); }
	void ShowAvailableMissionTags() { NativeCall<void>(this, "UShooterCheatManager.ShowAvailableMissionTags"); }
	void ShowInGameMenu() { NativeCall<void>(this, "UShooterCheatManager.ShowInGameMenu"); }
	void ShowMessageOfTheDay() { NativeCall<void>(this, "UShooterCheatManager.ShowMessageOfTheDay"); }
	void ShowTutorial(int TutorialIndex, bool bForceDisplay) { NativeCall<void, int, bool>(this, "UShooterCheatManager.ShowTutorial", TutorialIndex, bForceDisplay); }
	void SpawnActor(const FString * blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset) { NativeCall<void, const FString *, float, float, float>(this, "UShooterCheatManager.SpawnActor", blueprintPath, spawnDistance, spawnYOffset, ZOffset); }
	void SpawnActorSpread(const FString * blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount) { NativeCall<void, const FString *, float, float, float, int, float>(this, "UShooterCheatManager.SpawnActorSpread", blueprintPath, spawnDistance, spawnYOffset, ZOffset, NumberActors, SpreadAmount); }
	void SpawnActorSpreadTamed(const FString * blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount) { NativeCall<void, const FString *, float, float, float, int, float>(this, "UShooterCheatManager.SpawnActorSpreadTamed", blueprintPath, spawnDistance, spawnYOffset, ZOffset, NumberActors, SpreadAmount); }
	void SpawnActorTamed(const FString * blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset) { NativeCall<void, const FString *, float, float, float>(this, "UShooterCheatManager.SpawnActorTamed", blueprintPath, spawnDistance, spawnYOffset, ZOffset); }
	void SpawnDino(const FString * blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int DinoLevel) { NativeCall<void, const FString *, float, float, float, int>(this, "UShooterCheatManager.SpawnDino", blueprintPath, spawnDistance, spawnYOffset, ZOffset, DinoLevel); }
	void SpawnExactDino(const FString * DinoBlueprintPath, const FString * SaddleBlueprintPath, float SaddleQuality, int BaseLevel, int ExtraLevels, const FString * BaseStats, const FString * AddedStats, const FString * DinoName, char Cloned, char Neutered, const FString * TamedOn, const FString * UploadedFrom, const FString * ImprinterName, int ImprinterPlayerID, float ImprintQuality, const FString * Colors, __int64 DinoID, __int64 Exp, float SpawnDistance, float YOffset, float ZOffset) { NativeCall<void, const FString *, const FString *, float, int, int, const FString *, const FString *, const FString *, char, char, const FString *, const FString *, const FString *, int, float, const FString *, __int64, __int64, float, float, float>(this, "UShooterCheatManager.SpawnExactDino", DinoBlueprintPath, SaddleBlueprintPath, SaddleQuality, BaseLevel, ExtraLevels, BaseStats, AddedStats, DinoName, Cloned, Neutered, TamedOn, UploadedFrom, ImprinterName, ImprinterPlayerID, ImprintQuality, Colors, DinoID, Exp, SpawnDistance, YOffset, ZOffset); }
	void SpawnSetupDino(const FString * DinoBlueprintPath, const FString * SaddleBlueprintPath, float SaddleQuality, int DinoLevel, const FString * DinoStats, float SpawnDistance, float YOffset, float ZOffset) { NativeCall<void, const FString *, const FString *, float, int, const FString *, float, float, float>(this, "UShooterCheatManager.SpawnSetupDino", DinoBlueprintPath, SaddleBlueprintPath, SaddleQuality, DinoLevel, DinoStats, SpawnDistance, YOffset, ZOffset); }
	APrimalDinoCharacter * SpawnSetupDinoInternal(const FDinoSetup * DinoSetup, const FRotator * SpawnRot) { return NativeCall<APrimalDinoCharacter *, const FDinoSetup *, const FRotator *>(this, "UShooterCheatManager.SpawnSetupDinoInternal", DinoSetup, SpawnRot); }
	void StartMission(FName MissionTag) { NativeCall<void, FName>(this, "UShooterCheatManager.StartMission", MissionTag); }
	void StartMissionWithMetaData(FName MissionTag) { NativeCall<void, FName>(this, "UShooterCheatManager.StartMissionWithMetaData", MissionTag); }
	void StartNearestHorde(FName HordeType, int DifficultyLevel) { NativeCall<void, FName, int>(this, "UShooterCheatManager.StartNearestHorde", HordeType, DifficultyLevel); }
	void StartSaveBackup() { NativeCall<void>(this, "UShooterCheatManager.StartSaveBackup"); }
	void Suicide() { NativeCall<void>(this, "UShooterCheatManager.Suicide"); }
	void Summon(const FString * ClassName) { NativeCall<void, const FString *>(this, "UShooterCheatManager.Summon", ClassName); }
	void SummonTamed(const FString * ClassName) { NativeCall<void, const FString *>(this, "UShooterCheatManager.SummonTamed", ClassName); }
	void TCTM(const FString * DinoID) { NativeCall<void, const FString *>(this, "UShooterCheatManager.TCTM", DinoID); }
	void TOD(const FString * timeString) { NativeCall<void, const FString *>(this, "UShooterCheatManager.TOD", timeString); }
	void TP(FString LocationName) { NativeCall<void, FString>(this, "UShooterCheatManager.TP", LocationName); }
	void TPCoords(float lat, float lon, float z) { NativeCall<void, float, float, float>(this, "UShooterCheatManager.TPCoords", lat, lon, z); }
	void TPName(const FString * PlayerName) { NativeCall<void, const FString *>(this, "UShooterCheatManager.TPName", PlayerName); }
	void TTC(const FString * DinoID) { NativeCall<void, const FString *>(this, "UShooterCheatManager.TTC", DinoID); }
	void TakeAllDino() { NativeCall<void>(this, "UShooterCheatManager.TakeAllDino"); }
	void TakeAllStructure() { NativeCall<void>(this, "UShooterCheatManager.TakeAllStructure"); }
	void TakeTribe(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.TakeTribe", TribeTeamID); }
	void TameAOE(float Radius, float affinity, float effectiveness) { NativeCall<void, float, float, float>(this, "UShooterCheatManager.TameAOE", Radius, affinity, effectiveness); }
	void TeleportCreatureToMe(const FString * DinoID) { NativeCall<void, const FString *>(this, "UShooterCheatManager.TeleportCreatureToMe", DinoID); }
	void TeleportPlayerIDToMe(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.TeleportPlayerIDToMe", PlayerID); }
	void TeleportPlayerNameToMe(const FString * PlayerName) { NativeCall<void, const FString *>(this, "UShooterCheatManager.TeleportPlayerNameToMe", PlayerName); }
	void TeleportToActiveHorde(int EventIndex) { NativeCall<void, int>(this, "UShooterCheatManager.TeleportToActiveHorde", EventIndex); }
	void TeleportToActorLocation(const FString * ActorName) { NativeCall<void, const FString *>(this, "UShooterCheatManager.TeleportToActorLocation", ActorName); }
	void TeleportToCreature(const FString * DinoID) { NativeCall<void, const FString *>(this, "UShooterCheatManager.TeleportToCreature", DinoID); }
	void TeleportToPlayer(__int64 PlayerID) { NativeCall<void, __int64>(this, "UShooterCheatManager.TeleportToPlayer", PlayerID); }
	void TeleportToPlayerName(const FString * PlayerName) { NativeCall<void, const FString *>(this, "UShooterCheatManager.TeleportToPlayerName", PlayerName); }
	void TestSteamRefreshItems() { NativeCall<void>(this, "UShooterCheatManager.TestSteamRefreshItems"); }
	void ToggleClawStepping() { NativeCall<void>(this, "UShooterCheatManager.ToggleClawStepping"); }
	void ToggleDamageLogging() { NativeCall<void>(this, "UShooterCheatManager.ToggleDamageLogging"); }
	void ToggleDamageNumbers() { NativeCall<void>(this, "UShooterCheatManager.ToggleDamageNumbers"); }
	void ToggleFreezeStatusValues() { NativeCall<void>(this, "UShooterCheatManager.ToggleFreezeStatusValues"); }
	void ToggleGun() { NativeCall<void>(this, "UShooterCheatManager.ToggleGun"); }
	void ToggleHud() { NativeCall<void>(this, "UShooterCheatManager.ToggleHud"); }
	void ToggleLocation() { NativeCall<void>(this, "UShooterCheatManager.ToggleLocation"); }
	void ToggleLowGravSpin() { NativeCall<void>(this, "UShooterCheatManager.ToggleLowGravSpin"); }
	void TransferImprints(int oldPlayerId, int newPlayerId, FString NewImprinterName) { NativeCall<void, int, int, FString>(this, "UShooterCheatManager.TransferImprints", oldPlayerId, newPlayerId, NewImprinterName); }
	void TribeDinoAudit(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.TribeDinoAudit", TribeTeamID); }
	void TribeMessage(int TribeTeamID, FString Message) { NativeCall<void, int, FString>(this, "UShooterCheatManager.TribeMessage", TribeTeamID, Message); }
	void TribeStructureAudit(int TribeTeamID) { NativeCall<void, int>(this, "UShooterCheatManager.TribeStructureAudit", TribeTeamID); }
	void UnbanPlayer(FString PlayerSteamName) { NativeCall<void, FString>(this, "UShooterCheatManager.UnbanPlayer", PlayerSteamName); }
	void UnlockAllExplorerNotes() { NativeCall<void>(this, "UShooterCheatManager.UnlockAllExplorerNotes"); }
	void UnlockEmote(const FString * EmoteName) { NativeCall<void, const FString *>(this, "UShooterCheatManager.UnlockEmote", EmoteName); }
	void UnlockEngram(const FString * ItemClassName) { NativeCall<void, const FString *>(this, "UShooterCheatManager.UnlockEngram", ItemClassName); }
	void VerifyTransferInventory() { NativeCall<void>(this, "UShooterCheatManager.VerifyTransferInventory"); }
	void VisualizeClass(const FString * ClassIn, int MaxTotal) { NativeCall<void, const FString *, int>(this, "UShooterCheatManager.VisualizeClass", ClassIn, MaxTotal); }
	void WhatIsMyTarget() { NativeCall<void>(this, "UShooterCheatManager.WhatIsMyTarget"); }
	void psc(const FString * command) { NativeCall<void, const FString *>(this, "UShooterCheatManager.psc", command); }
};

