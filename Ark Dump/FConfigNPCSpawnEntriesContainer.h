#pragma once

#include "BaseDeclarations.h"
struct FConfigNPCSpawnEntriesContainer
{
	char __padding[0x30L];
	FString& NPCSpawnEntriesContainerClassStringField() { return *GetNativePointerField<FString*>(this, "FConfigNPCSpawnEntriesContainer.NPCSpawnEntriesContainerClassString"); }
	TArray<FNPCSpawnEntry>& NPCSpawnEntriesField() { return *GetNativePointerField<TArray<FNPCSpawnEntry>*>(this, "FConfigNPCSpawnEntriesContainer.NPCSpawnEntries"); }
	TArray<FNPCSpawnLimit>& NPCSpawnLimitsField() { return *GetNativePointerField<TArray<FNPCSpawnLimit>*>(this, "FConfigNPCSpawnEntriesContainer.NPCSpawnLimits"); }

	// Functions

	FConfigNPCSpawnEntriesContainer * operator=(const FConfigNPCSpawnEntriesContainer * __that) { return NativeCall<FConfigNPCSpawnEntriesContainer *, const FConfigNPCSpawnEntriesContainer *>(this, "FConfigNPCSpawnEntriesContainer.operator=", __that); }
};

