#pragma once

#include "BaseDeclarations.h"
struct FSupplyCrateSpawnEntry
{
	char __padding[0x18L];
	float& EntryWeightField() { return *GetNativePointerField<float*>(this, "FSupplyCrateSpawnEntry.EntryWeight"); }
	TSubclassOf<UNPCSpawnEntriesContainer>& CrateEnemySpawnEntriesField() { return *GetNativePointerField<TSubclassOf<UNPCSpawnEntriesContainer>*>(this, "FSupplyCrateSpawnEntry.CrateEnemySpawnEntries"); }

	// Functions

};

