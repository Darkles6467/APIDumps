#pragma once

#include "BaseDeclarations.h"
#include "AShooterGameState.h"
#include "AGameState.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FPrimalPlayerCharacterConfigStructReplicated.h"
#include "FBattlePlayerData.h"
#include "UPrimalUI.h"

struct ACustomGameState : AShooterGameState
{

	// Functions

	bool OnAllowFastTravel_Implementation(AShooterPlayerState * ForPlayerState, const FTribeData * MyNewTribe) { return NativeCall<bool, AShooterPlayerState *, const FTribeData *>(this, "ACustomGameState.OnAllowFastTravel_Implementation", ForPlayerState, MyNewTribe); }
	bool AllowCreateSurvivor() { return NativeCall<bool>(this, "ACustomGameState.AllowCreateSurvivor"); }
	bool AllowDaytimeTransitionSounds() { return NativeCall<bool>(this, "ACustomGameState.AllowDaytimeTransitionSounds"); }
	bool AllowFastTravel(APrimalStructureBed * ForBed, AShooterPlayerController * forPC) { return NativeCall<bool, APrimalStructureBed *, AShooterPlayerController *>(this, "ACustomGameState.AllowFastTravel", ForBed, forPC); }
	bool AllowOrbitCamera(APrimalCharacter * ForCharacter) { return NativeCall<bool, APrimalCharacter *>(this, "ACustomGameState.AllowOrbitCamera", ForCharacter); }
	bool AllowPopUps() { return NativeCall<bool>(this, "ACustomGameState.AllowPopUps"); }
	bool AllowRemoveItems(UPrimalInventoryComponent * ForInv, AShooterPlayerController * PC, UPrimalItem * anItemToTransfer) { return NativeCall<bool, UPrimalInventoryComponent *, AShooterPlayerController *, UPrimalItem *>(this, "ACustomGameState.AllowRemoveItems", ForInv, PC, anItemToTransfer); }
	bool AllowShowPlayerHudUI(APrimalCharacter * forPawn) { return NativeCall<bool, APrimalCharacter *>(this, "ACustomGameState.AllowShowPlayerHudUI", forPawn); }
	bool AllowStartSupplyCrateSpawns() { return NativeCall<bool>(this, "ACustomGameState.AllowStartSupplyCrateSpawns"); }
	bool AllowTribeManagement() { return NativeCall<bool>(this, "ACustomGameState.AllowTribeManagement"); }
	bool AllowTribeManager(AShooterPlayerController * forPC) { return NativeCall<bool, AShooterPlayerController *>(this, "ACustomGameState.AllowTribeManager", forPC); }
	void BreakActionReportItem(const FActionReportItem * Data, FString * PlayerName, FString * TribeName, FString * TimeOfDeath, FString * LevelOfDeath, FString * DeathMessage) { NativeCall<void, const FActionReportItem *, FString *, FString *, FString *, FString *, FString *>(this, "ACustomGameState.BreakActionReportItem", Data, PlayerName, TribeName, TimeOfDeath, LevelOfDeath, DeathMessage); }
	static void BreakBattlePlayerData(const FBattlePlayerData Data, FString * PlayerName, bool * bConnected, bool * bAlive, int * TribeID, FString * PlayerID) { NativeCall<void, const FBattlePlayerData, FString *, bool *, bool *, int *, FString *>(nullptr, "ACustomGameState.BreakBattlePlayerData", Data, PlayerName, bConnected, bAlive, TribeID, PlayerID); }
	static void BreakBattleTribeData(const FBattleTribeData InData, FString * TribeName, int * TribeID) { NativeCall<void, const FBattleTribeData, FString *, int *>(nullptr, "ACustomGameState.BreakBattleTribeData", InData, TribeName, TribeID); }
	static void BreakPlayerDeathNotification(const FPlayerDeathNotification Data, FString * PlayerDeathStringEnemy, FString * PlayerDeathStringAlly, FString * PlayerDeathStringYou, FString * DeathReason, TArray<FString> * DeadPlayerNames, bool * bIsTribeDeath, FString * DeathTribeName, int * TargetingTeam, FString * LinkedPlayerID, TArray<FPrimalPlayerCharacterConfigStructReplicated> * PlayersData) { NativeCall<void, const FPlayerDeathNotification, FString *, FString *, FString *, FString *, TArray<FString> *, bool *, FString *, int *, FString *, TArray<FPrimalPlayerCharacterConfigStructReplicated> *>(nullptr, "ACustomGameState.BreakPlayerDeathNotification", Data, PlayerDeathStringEnemy, PlayerDeathStringAlly, PlayerDeathStringYou, DeathReason, DeadPlayerNames, bIsTribeDeath, DeathTribeName, TargetingTeam, LinkedPlayerID, PlayersData); }
	static void BreakTribeData(const FTribeData InData, FString * TribeName, int * OwnerPlayerDataID, int * TribeID, TArray<FString> * MembersPlayerName, TArray<int> * MembersPlayerDataID, TArray<int> * TribeAdmins, bool * bSetGovernment, TArray<FPrimalPlayerCharacterConfigStructReplicated> * MembersConfigs) { NativeCall<void, const FTribeData, FString *, int *, int *, TArray<FString> *, TArray<int> *, TArray<int> *, bool *, TArray<FPrimalPlayerCharacterConfigStructReplicated> *>(nullptr, "ACustomGameState.BreakTribeData", InData, TribeName, OwnerPlayerDataID, TribeID, MembersPlayerName, MembersPlayerDataID, TribeAdmins, bSetGovernment, MembersConfigs); }
	void BroadcastActorCustomEvent(AActor * Actor, FName EventCustomName, FString EventCustomString, AActor * InstigatorActor) { NativeCall<void, AActor *, FName, FString, AActor *>(this, "ACustomGameState.BroadcastActorCustomEvent", Actor, EventCustomName, EventCustomString, InstigatorActor); }
	bool CheckGameStateIfCanRespawn(APlayerController * forPC) { return NativeCall<bool, APlayerController *>(this, "ACustomGameState.CheckGameStateIfCanRespawn", forPC); }
	bool CheckTimeSince(float Time, float Duration) { return NativeCall<bool, float, float>(this, "ACustomGameState.CheckTimeSince", Time, Duration); }
	FPlayerDeathNotification * CreateDeathNotification(FPlayerDeathNotification * result, AShooterCharacter * theShooterChar, AShooterPlayerController * prevController, APawn * InstigatingPawn, int MaxNumberOfRespawns) { return NativeCall<FPlayerDeathNotification *, FPlayerDeathNotification *, AShooterCharacter *, AShooterPlayerController *, APawn *, int>(this, "ACustomGameState.CreateDeathNotification", result, theShooterChar, prevController, InstigatingPawn, MaxNumberOfRespawns); }
	void DisplayWelcomeUI() { NativeCall<void>(this, "ACustomGameState.DisplayWelcomeUI"); }
	void DrawExtraPlayerFloatingHUD(AShooterHUD * HUD, AShooterCharacter * theShooterChar, const FVector * AtLoc) { NativeCall<void, AShooterHUD *, AShooterCharacter *, const FVector *>(this, "ACustomGameState.DrawExtraPlayerFloatingHUD", HUD, theShooterChar, AtLoc); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "ACustomGameState.DrawHUD", HUD); }
	void DrawHUDNotifications(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "ACustomGameState.DrawHUDNotifications", HUD); }
	void ExtraShooterCharacterTick(AShooterCharacter * ForChar, float DeltaTime) { NativeCall<void, AShooterCharacter *, float>(this, "ACustomGameState.ExtraShooterCharacterTick", ForChar, DeltaTime); }
	bool ForceOccludedFloatingHUD(AActor * anActor, AShooterPlayerController * ForPC) { return NativeCall<bool, AActor *, AShooterPlayerController *>(this, "ACustomGameState.ForceOccludedFloatingHUD", anActor, ForPC); }
	TArray<APrimalDinoCharacter *> * GetAllDinoCharactersOfTeam(TArray<APrimalDinoCharacter *> * result, int Team) { return NativeCall<TArray<APrimalDinoCharacter *> *, TArray<APrimalDinoCharacter *> *, int>(this, "ACustomGameState.GetAllDinoCharactersOfTeam", result, Team); }
	TArray<AShooterCharacter *> * GetAllShooterCharacters(TArray<AShooterCharacter *> * result) { return NativeCall<TArray<AShooterCharacter *> *, TArray<AShooterCharacter *> *>(this, "ACustomGameState.GetAllShooterCharacters", result); }
	TArray<AShooterCharacter *> * GetAllShooterCharactersOfTeam(TArray<AShooterCharacter *> * result, int Team) { return NativeCall<TArray<AShooterCharacter *> *, TArray<AShooterCharacter *> *, int>(this, "ACustomGameState.GetAllShooterCharactersOfTeam", result, Team); }
	TArray<AShooterPlayerController *> * GetAllShooterControllers(TArray<AShooterPlayerController *> * result) { return NativeCall<TArray<AShooterPlayerController *> *, TArray<AShooterPlayerController *> *>(this, "ACustomGameState.GetAllShooterControllers", result); }
	void GetDeathNotificationText(AShooterCharacter * theShooterChar, APawn * InstigatingPawn, FString * Killer, FString * KillerAndTribe, FString * theNotificationStringYou, FString * theNotificationStringAlly, FString * theNotificationStringEnemy) { NativeCall<void, AShooterCharacter *, APawn *, FString *, FString *, FString *, FString *, FString *>(this, "ACustomGameState.GetDeathNotificationText", theShooterChar, InstigatingPawn, Killer, KillerAndTribe, theNotificationStringYou, theNotificationStringAlly, theNotificationStringEnemy); }
	FString * GetPawnKillerName(FString * result, APawn * Pawn) { return NativeCall<FString *, FString *, APawn *>(this, "ACustomGameState.GetPawnKillerName", result, Pawn); }
	FString * GetPawnName(FString * result, APawn * Pawn) { return NativeCall<FString *, FString *, APawn *>(this, "ACustomGameState.GetPawnName", result, Pawn); }
	TArray<FBattlePlayerData> * GetPlayerDatasForTribe(TArray<FBattlePlayerData> * result, int TribeID, const TArray<FBattlePlayerData> * AllPlayerDatas) { return NativeCall<TArray<FBattlePlayerData> *, TArray<FBattlePlayerData> *, int, const TArray<FBattlePlayerData> *>(this, "ACustomGameState.GetPlayerDatasForTribe", result, TribeID, AllPlayerDatas); }
	long double GetTimeSeconds() { return NativeCall<long double>(this, "ACustomGameState.GetTimeSeconds"); }
	void HandleActorEvent(AActor * ForActor, FName NameParam, FVector VecParam) { NativeCall<void, AActor *, FName, FVector>(this, "ACustomGameState.HandleActorEvent", ForActor, NameParam, VecParam); }
	bool HasGameModeMatchStarted() { return NativeCall<bool>(this, "ACustomGameState.HasGameModeMatchStarted"); }
	static void HideUIScene(TSubclassOf<UPrimalUI> SceneClass) { NativeCall<void, TSubclassOf<UPrimalUI>>(nullptr, "ACustomGameState.HideUIScene", SceneClass); }
	bool IsAuthorityRole() { return NativeCall<bool>(this, "ACustomGameState.IsAuthorityRole"); }
	void KickPlayer(APlayerController * Controller, const FString * Reason) { NativeCall<void, APlayerController *, const FString *>(this, "ACustomGameState.KickPlayer", Controller, Reason); }
	static FBattlePlayerData * MakeBattlePlayerData(FBattlePlayerData * result, FString PlayerName, bool bConnected, bool bAlive, int TribeID, FString PlayerID) { return NativeCall<FBattlePlayerData *, FBattlePlayerData *, FString, bool, bool, int, FString>(nullptr, "ACustomGameState.MakeBattlePlayerData", result, PlayerName, bConnected, bAlive, TribeID, PlayerID); }
	static FBattleTribeData * MakeBattleTribeData(FBattleTribeData * result, FString TribeName, int TribeID) { return NativeCall<FBattleTribeData *, FBattleTribeData *, FString, int>(nullptr, "ACustomGameState.MakeBattleTribeData", result, TribeName, TribeID); }
	static FPlayerDeathNotification * MakePlayerDeathNotification(FPlayerDeathNotification * result, FString PlayerDeathStringEnemy, FString PlayerDeathStringAlly, FString PlayerDeathStringYou, FString DeathReason, TArray<FString> DeadPlayerNames, bool bIsTribeDeath, FString DeathTribeName, int TargetingTeam, FString LinkedPlayerID, TArray<FPrimalPlayerCharacterConfigStructReplicated> PlayersData) { return NativeCall<FPlayerDeathNotification *, FPlayerDeathNotification *, FString, FString, FString, FString, TArray<FString>, bool, FString, int, FString, TArray<FPrimalPlayerCharacterConfigStructReplicated>>(nullptr, "ACustomGameState.MakePlayerDeathNotification", result, PlayerDeathStringEnemy, PlayerDeathStringAlly, PlayerDeathStringYou, DeathReason, DeadPlayerNames, bIsTribeDeath, DeathTribeName, TargetingTeam, LinkedPlayerID, PlayersData); }
	void NotifyPlayerDied(AShooterCharacter * theShooterChar, AShooterPlayerController * prevController, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, AShooterCharacter *, AShooterPlayerController *, APawn *, AActor *>(this, "ACustomGameState.NotifyPlayerDied", theShooterChar, prevController, InstigatingPawn, DamageCauser); }
	bool OnAllowPopUps_Implementation() { return NativeCall<bool>(this, "ACustomGameState.OnAllowPopUps_Implementation"); }
	bool OnAllowRemoveItems_Implementation(UPrimalInventoryComponent * ForInv, AShooterPlayerController * PC, UPrimalItem * anItemToTransfer) { return NativeCall<bool, UPrimalInventoryComponent *, AShooterPlayerController *, UPrimalItem *>(this, "ACustomGameState.OnAllowRemoveItems_Implementation", ForInv, PC, anItemToTransfer); }
	bool OnAllowTribeManager_Implementation(AShooterCharacter * forChar) { return NativeCall<bool, AShooterCharacter *>(this, "ACustomGameState.OnAllowTribeManager_Implementation", forChar); }
	bool OnCheckGameStateIfCanRespawn_Implementation(APlayerController * forPC) { return NativeCall<bool, APlayerController *>(this, "ACustomGameState.OnCheckGameStateIfCanRespawn_Implementation", forPC); }
	void OnDrawExtraPlayerFloatingHUD_Implementation(AShooterHUD * HUD, AShooterCharacter * theShooterChar, const FVector * AtLoc) { NativeCall<void, AShooterHUD *, AShooterCharacter *, const FVector *>(this, "ACustomGameState.OnDrawExtraPlayerFloatingHUD_Implementation", HUD, theShooterChar, AtLoc); }
	bool OnDrawingHUDNotifications_Implementation(AShooterHUD * HUD) { return NativeCall<bool, AShooterHUD *>(this, "ACustomGameState.OnDrawingHUDNotifications_Implementation", HUD); }
	void OnExtraShooterCharacterTick_Implementation(AShooterCharacter * ForChar, float DeltaTime) { NativeCall<void, AShooterCharacter *, float>(this, "ACustomGameState.OnExtraShooterCharacterTick_Implementation", ForChar, DeltaTime); }
	bool OnForceOccludedFloatingHUD_Implementation(AActor * anActor, AShooterPlayerController * ForPC) { return NativeCall<bool, AActor *, AShooterPlayerController *>(this, "ACustomGameState.OnForceOccludedFloatingHUD_Implementation", anActor, ForPC); }
	void OnHandleActorEvent_Implementation(AActor * ForActor, FName NameParam, FVector VecParam) { NativeCall<void, AActor *, FName, FVector>(this, "ACustomGameState.OnHandleActorEvent_Implementation", ForActor, NameParam, VecParam); }
	void OnNotifyPlayerDied_Implementation(AShooterCharacter * theShooterChar, AShooterPlayerController * prevController, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, AShooterCharacter *, AShooterPlayerController *, APawn *, AActor *>(this, "ACustomGameState.OnNotifyPlayerDied_Implementation", theShooterChar, prevController, InstigatingPawn, DamageCauser); }
	void SetActionReportItem(FActionReportItem * Data, const FString * PlayerName, const FString * TribeName, const FString * TimeOfDeath, const FString * LevelOfDeath, const FString * DeathMessage) { NativeCall<void, FActionReportItem *, const FString *, const FString *, const FString *, const FString *, const FString *>(this, "ACustomGameState.SetActionReportItem", Data, PlayerName, TribeName, TimeOfDeath, LevelOfDeath, DeathMessage); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ACustomGameState.Tick", DeltaSeconds); }
	static bool IsTribeID(int TeamId) { return NativeCall<bool, int>(nullptr, "ACustomGameState.IsTribeID", TeamId); }
	static FVector2D * ProjectWorldToScreenPosition(FVector2D * result, const FVector * WorldLocation, APlayerController * ThePC) { return NativeCall<FVector2D *, FVector2D *, const FVector *, APlayerController *>(nullptr, "ACustomGameState.ProjectWorldToScreenPosition", result, WorldLocation, ThePC); }
	bool OnAllowCreateSurvivor() { return NativeCall<bool>(this, "ACustomGameState.OnAllowCreateSurvivor"); }
	bool OnAllowDaytimeTransitionSounds() { return NativeCall<bool>(this, "ACustomGameState.OnAllowDaytimeTransitionSounds"); }
	bool OnAllowFastTravel(APrimalStructureBed * ForBed, AShooterPlayerController * forPC) { return NativeCall<bool, APrimalStructureBed *, AShooterPlayerController *>(this, "ACustomGameState.OnAllowFastTravel", ForBed, forPC); }
	bool OnAllowOrbitCamera(APrimalCharacter * ForCharacter) { return NativeCall<bool, APrimalCharacter *>(this, "ACustomGameState.OnAllowOrbitCamera", ForCharacter); }
	bool OnAllowPopUps() { return NativeCall<bool>(this, "ACustomGameState.OnAllowPopUps"); }
	bool OnAllowRemoveItems(UPrimalInventoryComponent * ForInv, AShooterPlayerController * PC, UPrimalItem * anItemToTransfer) { return NativeCall<bool, UPrimalInventoryComponent *, AShooterPlayerController *, UPrimalItem *>(this, "ACustomGameState.OnAllowRemoveItems", ForInv, PC, anItemToTransfer); }
	bool OnAllowShowPlayerHudUI(APrimalCharacter * forPawn) { return NativeCall<bool, APrimalCharacter *>(this, "ACustomGameState.OnAllowShowPlayerHudUI", forPawn); }
	bool OnAllowStartSupplyCrateSpawns() { return NativeCall<bool>(this, "ACustomGameState.OnAllowStartSupplyCrateSpawns"); }
	bool OnAllowTribeManagement() { return NativeCall<bool>(this, "ACustomGameState.OnAllowTribeManagement"); }
	bool OnAllowTribeManager(AShooterPlayerController * forPC) { return NativeCall<bool, AShooterPlayerController *>(this, "ACustomGameState.OnAllowTribeManager", forPC); }
	bool OnCheckGameStateIfCanRespawn(APlayerController * forPC) { return NativeCall<bool, APlayerController *>(this, "ACustomGameState.OnCheckGameStateIfCanRespawn", forPC); }
	void OnDrawExtraPlayerFloatingHUD(AShooterHUD * HUD, AShooterCharacter * theShooterChar, const FVector * AtLoc) { NativeCall<void, AShooterHUD *, AShooterCharacter *, const FVector *>(this, "ACustomGameState.OnDrawExtraPlayerFloatingHUD", HUD, theShooterChar, AtLoc); }
	bool OnDrawHUD(AShooterHUD * HUD) { return NativeCall<bool, AShooterHUD *>(this, "ACustomGameState.OnDrawHUD", HUD); }
	bool OnDrawingHUDNotifications(AShooterHUD * HUD) { return NativeCall<bool, AShooterHUD *>(this, "ACustomGameState.OnDrawingHUDNotifications", HUD); }
	void OnExtraShooterCharacterTick(AShooterCharacter * ForChar, float DeltaTime) { NativeCall<void, AShooterCharacter *, float>(this, "ACustomGameState.OnExtraShooterCharacterTick", ForChar, DeltaTime); }
	void OnHandleActorEvent(AActor * ForActor, FName NameParam, FVector VecParam) { NativeCall<void, AActor *, FName, FVector>(this, "ACustomGameState.OnHandleActorEvent", ForActor, NameParam, VecParam); }
	bool OnHasGameModeMatchStarted() { return NativeCall<bool>(this, "ACustomGameState.OnHasGameModeMatchStarted"); }
	void OnNotifyPlayerDied(AShooterCharacter * theShooterChar, AShooterPlayerController * prevController, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, AShooterCharacter *, AShooterPlayerController *, APawn *, AActor *>(this, "ACustomGameState.OnNotifyPlayerDied", theShooterChar, prevController, InstigatingPawn, DamageCauser); }
	void OnSetHudEvent() { NativeCall<void>(this, "ACustomGameState.OnSetHudEvent"); }
};

