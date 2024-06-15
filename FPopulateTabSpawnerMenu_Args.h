#pragma once

#include "BaseDeclarations.h"
struct FPopulateTabSpawnerMenu_Args
{
	char __padding[0x28L];
	TSharedRef<TArray<TWeakPtr<FTabSpawnerEntry,0>>,0>& AllSpawnersField() { return *GetNativePointerField<TSharedRef<TArray<TWeakPtr<FTabSpawnerEntry,0>>,0>*>(this, "FPopulateTabSpawnerMenu_Args.AllSpawners"); }
	int& LevelField() { return *GetNativePointerField<int*>(this, "FPopulateTabSpawnerMenu_Args.Level"); }
};

