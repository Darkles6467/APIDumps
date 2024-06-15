#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureSeating.h"
#include "APrimalStructureItemContainer.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"

struct APrimalStructureBed : APrimalStructureSeating
{
	char __padding[0x60L];
	FVector& PlayerSpawnLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructureBed.PlayerSpawnLocOffset"); }
	FRotator& PlayerSpawnRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructureBed.PlayerSpawnRotOffset"); }
	unsigned int& LinkedPlayerIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureBed.LinkedPlayerID"); }
	FString& LinkedPlayerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.LinkedPlayerName"); }
	FString& BedNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.BedName"); }
	float& UseCooldownTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.UseCooldownTime"); }
	float& UseCooldownRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.UseCooldownRadius"); }
	float& AttachedToPlatformStructureEnemySpawnPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.AttachedToPlatformStructureEnemySpawnPreventionRadius"); }
	long double& NextAllowedUseTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBed.NextAllowedUseTime"); }
	long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBed.LastSignNamingTime"); }

	// Functions

	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructureBed.AllowPickupForItem", ForPC); }
	bool AllowSpawnForDownloadedPlayer(unsigned __int64 PlayerDataID, unsigned __int64 TribeID, bool bCheckCooldownTime) { return NativeCall<bool, unsigned __int64, unsigned __int64, bool>(this, "APrimalStructureBed.AllowSpawnForDownloadedPlayer", PlayerDataID, TribeID, bCheckCooldownTime); }
	bool AllowSpawnForPlayer(AShooterPlayerController * PC, bool bCheckCooldownTime, APrimalStructure * FromStructure) { return NativeCall<bool, AShooterPlayerController *, bool, APrimalStructure *>(this, "APrimalStructureBed.AllowSpawnForPlayer", PC, bCheckCooldownTime, FromStructure); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureBed.BeginPlay"); }
	bool CheckStructureActivateTribeGroupPermission(unsigned __int64 PlayerDataID, unsigned __int64 TribeID) { return NativeCall<bool, unsigned __int64, unsigned __int64>(this, "APrimalStructureBed.CheckStructureActivateTribeGroupPermission", PlayerDataID, TribeID); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureBed.ClientMultiUse", ForPC, UseIndex); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructureBed.Destroyed"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructureBed.DrawHUD", HUD); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructureBed.GetDescriptiveName", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureBed.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureBed.GetMultiUseEntries", ForPC, MultiUseEntries); }
	FVector * GetPlayerSpawnLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalStructureBed.GetPlayerSpawnLocation", result); }
	FRotator * GetPlayerSpawnRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalStructureBed.GetPlayerSpawnRotation", result); }
	FSpawnPointInfo * GetSpawnPointInfo(FSpawnPointInfo * result) { return NativeCall<FSpawnPointInfo *, FSpawnPointInfo *>(this, "APrimalStructureBed.GetSpawnPointInfo", result); }
	void PlacedStructure(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructureBed.PlacedStructure", PC); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureBed.PostInitializeComponents"); }
	void ProcessEditText(AShooterPlayerController * ForPC, const FString * TextToUse, bool __formal) { NativeCall<void, AShooterPlayerController *, const FString *, bool>(this, "APrimalStructureBed.ProcessEditText", ForPC, TextToUse, __formal); }
	void SpawnedPlayerFor_Implementation(AShooterPlayerController * PC, APawn * ForPawn) { NativeCall<void, AShooterPlayerController *, APawn *>(this, "APrimalStructureBed.SpawnedPlayerFor_Implementation", PC, ForPawn); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureBed.TryMultiUse", ForPC, UseIndex); }
	void SpawnedPlayerFor(AShooterPlayerController * PC, APawn * ForPawn) { NativeCall<void, AShooterPlayerController *, APawn *>(this, "APrimalStructureBed.SpawnedPlayerFor", PC, ForPawn); }
};

