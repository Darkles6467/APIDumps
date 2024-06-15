#pragma once

#include "BaseDeclarations.h"
struct FRacePlayerData
{
	char __padding[0x38L];
	AShooterPlayerController * ControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "FRacePlayerData.Controller"); }
	AShooterCharacter * CharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "FRacePlayerData.Character"); }
	int& TargetCheckpointField() { return *GetNativePointerField<int*>(this, "FRacePlayerData.TargetCheckpoint"); }
	TArray<bool>& CheckpointsHitField() { return *GetNativePointerField<TArray<bool>*>(this, "FRacePlayerData.CheckpointsHit"); }
	TArray<float>& CheckpointTimesField() { return *GetNativePointerField<TArray<float>*>(this, "FRacePlayerData.CheckpointTimes"); }

	// Functions

	FRacePlayerData * operator=(const FRacePlayerData * __that) { return NativeCall<FRacePlayerData *, const FRacePlayerData *>(this, "FRacePlayerData.operator=", __that); }
};

