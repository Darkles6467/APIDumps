#pragma once

#include "BaseDeclarations.h"
struct FNPCDifficultyLevelRange
{
	char __padding[0x30L];
	TArray<float>& EnemyLevelsMinField() { return *GetNativePointerField<TArray<float>*>(this, "FNPCDifficultyLevelRange.EnemyLevelsMin"); }
	TArray<float>& EnemyLevelsMaxField() { return *GetNativePointerField<TArray<float>*>(this, "FNPCDifficultyLevelRange.EnemyLevelsMax"); }
	TArray<float>& GameDifficultiesField() { return *GetNativePointerField<TArray<float>*>(this, "FNPCDifficultyLevelRange.GameDifficulties"); }

	// Functions

	FNPCDifficultyLevelRange * operator=(const FNPCDifficultyLevelRange * __that) { return NativeCall<FNPCDifficultyLevelRange *, const FNPCDifficultyLevelRange *>(this, "FNPCDifficultyLevelRange.operator=", __that); }
};

