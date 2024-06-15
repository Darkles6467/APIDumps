#pragma once

#include "BaseDeclarations.h"
struct FExplorerNoteAchievement
{
	char __padding[0x20L];
	FString& AchievementNameField() { return *GetNativePointerField<FString*>(this, "FExplorerNoteAchievement.AchievementName"); }
	TArray<int>& ExplorerNoteIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FExplorerNoteAchievement.ExplorerNoteIndices"); }

	// Functions

	FExplorerNoteAchievement * operator=(const FExplorerNoteAchievement * __that) { return NativeCall<FExplorerNoteAchievement *, const FExplorerNoteAchievement *>(this, "FExplorerNoteAchievement.operator=", __that); }
};

