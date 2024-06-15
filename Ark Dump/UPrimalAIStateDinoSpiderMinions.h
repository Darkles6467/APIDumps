#pragma once

#include "BaseDeclarations.h"
#include "UPrimalAIState.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalAIStateDinoSpiderMinions : UPrimalAIState
{
	char __padding[0x78L];
	TSubclassOf<APrimalDinoCharacter>& MinionCharacterTypeClassField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "UPrimalAIStateDinoSpiderMinions.MinionCharacterTypeClass"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& MinionCharacterTypeClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "UPrimalAIStateDinoSpiderMinions.MinionCharacterTypeClasses"); }
	TArray<float>& MinionCharacterTypeClassesWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalAIStateDinoSpiderMinions.MinionCharacterTypeClassesWeights"); }
	char& MinionMaxCountField() { return *GetNativePointerField<char*>(this, "UPrimalAIStateDinoSpiderMinions.MinionMaxCount"); }
	TArray<TWeakObjectPtr<APrimalDinoCharacter>>& SpawnedMinionsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalDinoCharacter>>*>(this, "UPrimalAIStateDinoSpiderMinions.SpawnedMinions"); }
	FVector& SpawnRandomOffsetField() { return *GetNativePointerField<FVector*>(this, "UPrimalAIStateDinoSpiderMinions.SpawnRandomOffset"); }
	FVector& SpawnFixedOffsetField() { return *GetNativePointerField<FVector*>(this, "UPrimalAIStateDinoSpiderMinions.SpawnFixedOffset"); }
	FName& EggSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderMinions.EggSocket"); }
	bool& bFirstBatchField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateDinoSpiderMinions.bFirstBatch"); }
	bool& bPreventMinionTamingField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateDinoSpiderMinions.bPreventMinionTaming"); }
	bool& bPreventMinionSavingField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateDinoSpiderMinions.bPreventMinionSaving"); }
	float& BatchMinionCoolDownField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderMinions.BatchMinionCoolDown"); }
	float& LastBatchTimeField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderMinions.LastBatchTime"); }
	char& BatchCountField() { return *GetNativePointerField<char*>(this, "UPrimalAIStateDinoSpiderMinions.BatchCount"); }
	char& AbsoluteMaxMinionsField() { return *GetNativePointerField<char*>(this, "UPrimalAIStateDinoSpiderMinions.AbsoluteMaxMinions"); }
	char& RemainingMinionBatchCountField() { return *GetNativePointerField<char*>(this, "UPrimalAIStateDinoSpiderMinions.RemainingMinionBatchCount"); }
	int& OverrideMinionBaseLevelField() { return *GetNativePointerField<int*>(this, "UPrimalAIStateDinoSpiderMinions.OverrideMinionBaseLevel"); }
	int& NumMinionsToSpawnField() { return *GetNativePointerField<int*>(this, "UPrimalAIStateDinoSpiderMinions.NumMinionsToSpawn"); }

	// Functions

	bool IsInAnimationStateActive() { return NativeCall<bool>(this, "UPrimalAIStateDinoSpiderMinions.IsInAnimationStateActive"); }
	bool CanUseState() { return NativeCall<bool>(this, "UPrimalAIStateDinoSpiderMinions.CanUseState"); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderMinions.EndAnimationState", CustomEventName, Role); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoSpiderMinions.OnEnd"); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderMinions.TickAnimationState", DeltaTime, CustomEventName, Role); }
};

