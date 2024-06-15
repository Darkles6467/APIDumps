#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AAIAttackCoordinator : AActor
{
	char __padding[0x20L];
	int& MaxAttackersPerTargetField() { return *GetNativePointerField<int*>(this, "AAIAttackCoordinator.MaxAttackersPerTarget"); }
	float& UpdateIntervalField() { return *GetNativePointerField<float*>(this, "AAIAttackCoordinator.UpdateInterval"); }
	long double& LastUpdateTimeField() { return *GetNativePointerField<long double*>(this, "AAIAttackCoordinator.LastUpdateTime"); }

	// Functions

	void AddAttacker(APrimalDinoAIController * Controller) { NativeCall<void, APrimalDinoAIController *>(this, "AAIAttackCoordinator.AddAttacker", Controller); }
	void AddAttackerCharacter(APrimalDinoCharacter * Character) { NativeCall<void, APrimalDinoCharacter *>(this, "AAIAttackCoordinator.AddAttackerCharacter", Character); }
	float CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController * Attacker) { return NativeCall<float, APrimalDinoAIController *>(this, "AAIAttackCoordinator.CalculateAttackerPriorityWeight_Implementation", Attacker); }
	void ClearAllAttackers() { NativeCall<void>(this, "AAIAttackCoordinator.ClearAllAttackers"); }
	int GetNumAttackersForTarget(AActor * Target) { return NativeCall<int, AActor *>(this, "AAIAttackCoordinator.GetNumAttackersForTarget", Target); }
	int GetNumAttackersWithPriorityForTarget(AActor * Target) { return NativeCall<int, AActor *>(this, "AAIAttackCoordinator.GetNumAttackersWithPriorityForTarget", Target); }
	void RemoveAttacker(APrimalDinoAIController * Controller) { NativeCall<void, APrimalDinoAIController *>(this, "AAIAttackCoordinator.RemoveAttacker", Controller); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AAIAttackCoordinator.Tick", DeltaSeconds); }
	void UpdateAttackGroup_Implementation(TArray<APrimalDinoAIController *> * AttackGroup) { NativeCall<void, TArray<APrimalDinoAIController *> *>(this, "AAIAttackCoordinator.UpdateAttackGroup_Implementation", AttackGroup); }
	void UpdateAttackPriorities() { NativeCall<void>(this, "AAIAttackCoordinator.UpdateAttackPriorities"); }
	float CalculateAttackerPriorityWeight(APrimalDinoAIController * Attacker) { return NativeCall<float, APrimalDinoAIController *>(this, "AAIAttackCoordinator.CalculateAttackerPriorityWeight", Attacker); }
	void UpdateAttackGroup(TArray<APrimalDinoAIController *> * AttackGroup) { NativeCall<void, TArray<APrimalDinoAIController *> *>(this, "AAIAttackCoordinator.UpdateAttackGroup", AttackGroup); }
};

struct ACorruptedAvatarAttackCoordinator : AAIAttackCoordinator
{
	char __padding[0x8L];
	float& MinAttackPriorityHeldTimeField() { return *GetNativePointerField<float*>(this, "ACorruptedAvatarAttackCoordinator.MinAttackPriorityHeldTime"); }

	// Functions

	float CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController * Attacker) { return NativeCall<float, APrimalDinoAIController *>(this, "ACorruptedAvatarAttackCoordinator.CalculateAttackerPriorityWeight_Implementation", Attacker); }
};

