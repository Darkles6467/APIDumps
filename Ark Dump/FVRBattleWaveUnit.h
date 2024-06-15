#pragma once

#include "BaseDeclarations.h"
struct FVRBattleWaveUnit
{
	char __padding[0x38L];
	TSubclassOf<APrimalDinoCharacter>& DinoTypeField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "FVRBattleWaveUnit.DinoType"); }
	FString& DinoBlueprintPathField() { return *GetNativePointerField<FString*>(this, "FVRBattleWaveUnit.DinoBlueprintPath"); }
	int& DinoLevelField() { return *GetNativePointerField<int*>(this, "FVRBattleWaveUnit.DinoLevel"); }
	FVector& SpawnOffsetField() { return *GetNativePointerField<FVector*>(this, "FVRBattleWaveUnit.SpawnOffset"); }
	TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>>& PrioritizeStatsField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>>*>(this, "FVRBattleWaveUnit.PrioritizeStats"); }

	// Functions

	FVRBattleWaveUnit * operator=(const FVRBattleWaveUnit * __that) { return NativeCall<FVRBattleWaveUnit *, const FVRBattleWaveUnit *>(this, "FVRBattleWaveUnit.operator=", __that); }
};

