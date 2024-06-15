#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventRaceClosestPlayerToCheckpoint_Parms
{
	char __padding[0x40L];
	TArray<FRacePlayerData>& PlayerDataField() { return *GetNativePointerField<TArray<FRacePlayerData>*>(this, "MissionType_eventRaceClosestPlayerToCheckpoint_Parms.PlayerData"); }
	FVector& MissionStartLocationField() { return *GetNativePointerField<FVector*>(this, "MissionType_eventRaceClosestPlayerToCheckpoint_Parms.MissionStartLocation"); }
	TArray<AMissionTrigger *>& CheckpointsField() { return *GetNativePointerField<TArray<AMissionTrigger *>*>(this, "MissionType_eventRaceClosestPlayerToCheckpoint_Parms.Checkpoints"); }
	int& aField() { return *GetNativePointerField<int*>(this, "MissionType_eventRaceClosestPlayerToCheckpoint_Parms.a"); }
	int& bField() { return *GetNativePointerField<int*>(this, "MissionType_eventRaceClosestPlayerToCheckpoint_Parms.b"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventRaceClosestPlayerToCheckpoint_Parms.ReturnValue"); }

	// Functions

};

