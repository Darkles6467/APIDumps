#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AHordeCrateManager : AActor
{
	char __padding[0x58L];
	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "AHordeCrateManager.bIsEnabled"); }
	bool& bUseBPForceStartHordeField() { return *GetNativePointerField<bool*>(this, "AHordeCrateManager.bUseBPForceStartHorde"); }
	float& MinDelayBeforeInitialEventField() { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MinDelayBeforeInitialEvent"); }
	float& MaxDelayBeforeInitialEventField() { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MaxDelayBeforeInitialEvent"); }
	float& MinEventCheckIntervalField() { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MinEventCheckInterval"); }
	float& MaxEventCheckIntervalField() { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MaxEventCheckInterval"); }
	float& MinDistanceFromOtherEventField() { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MinDistanceFromOtherEvent"); }
	TArray<FHordeCrateDifficultyLevel>& CrateDifficultyLevelsField() { return *GetNativePointerField<TArray<FHordeCrateDifficultyLevel>*>(this, "AHordeCrateManager.CrateDifficultyLevels"); }
	TArray<FHordeCrateDifficultyLevel>& ElementNodeDifficultyLevelsField() { return *GetNativePointerField<TArray<FHordeCrateDifficultyLevel>*>(this, "AHordeCrateManager.ElementNodeDifficultyLevels"); }
	TArray<FHordeCrateEvent>& ActiveEventsField() { return *GetNativePointerField<TArray<FHordeCrateEvent>*>(this, "AHordeCrateManager.ActiveEvents"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "AHordeCrateManager.BeginPlay"); }
	void ForceStartHorde(AActor * SpawnNetwork, AShooterPlayerController * PC, TSubclassOf<AActor> ActorClass, int DifficultyIndex) { NativeCall<void, AActor *, AShooterPlayerController *, TSubclassOf<AActor>, int>(this, "AHordeCrateManager.ForceStartHorde", SpawnNetwork, PC, ActorClass, DifficultyIndex); }
	void BPForceStartHorde(AActor * SpawnNetwork, AShooterPlayerController * PC, TSubclassOf<AActor> ActorClass, int DifficultyIndex) { NativeCall<void, AActor *, AShooterPlayerController *, TSubclassOf<AActor>, int>(this, "AHordeCrateManager.BPForceStartHorde", SpawnNetwork, PC, ActorClass, DifficultyIndex); }
};

