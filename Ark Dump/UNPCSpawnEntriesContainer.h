#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNPCSpawnEntriesContainer : UObject
{
	char __padding[0x28L];
	TArray<FNPCSpawnEntry>& NPCSpawnEntriesField() { return *GetNativePointerField<TArray<FNPCSpawnEntry>*>(this, "UNPCSpawnEntriesContainer.NPCSpawnEntries"); }
	TArray<FNPCSpawnLimit>& NPCSpawnLimitsField() { return *GetNativePointerField<TArray<FNPCSpawnLimit>*>(this, "UNPCSpawnEntriesContainer.NPCSpawnLimits"); }
	float& MaxDesiredNumEnemiesMultiplierField() { return *GetNativePointerField<float*>(this, "UNPCSpawnEntriesContainer.MaxDesiredNumEnemiesMultiplier"); }

	// Functions

};

