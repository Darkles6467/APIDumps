#pragma once

#include "BaseDeclarations.h"
struct FNPCSpawnEntriesContainerAdditions
{
	char __padding[0x28L];
	TSubclassOf<UNPCSpawnEntriesContainer>& SpawnEntriesContainerClassField() { return *GetNativePointerField<TSubclassOf<UNPCSpawnEntriesContainer>*>(this, "FNPCSpawnEntriesContainerAdditions.SpawnEntriesContainerClass"); }
	TArray<FNPCSpawnEntry>& AdditionalNPCSpawnEntriesField() { return *GetNativePointerField<TArray<FNPCSpawnEntry>*>(this, "FNPCSpawnEntriesContainerAdditions.AdditionalNPCSpawnEntries"); }
	TArray<FNPCSpawnLimit>& AdditionalNPCSpawnLimitsField() { return *GetNativePointerField<TArray<FNPCSpawnLimit>*>(this, "FNPCSpawnEntriesContainerAdditions.AdditionalNPCSpawnLimits"); }

	// Functions

};

