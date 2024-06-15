#pragma once

#include "BaseDeclarations.h"
#include "UPawnAction.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPawnAction_Move : UPawnAction
{
	char __padding[0x40L];
	FVector& GoalLocationField() { return *GetNativePointerField<FVector*>(this, "UPawnAction_Move.GoalLocation"); }
	float& AcceptableRadiusField() { return *GetNativePointerField<float*>(this, "UPawnAction_Move.AcceptableRadius"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UPawnAction_Move.BeginDestroy"); }
	static bool CheckAlreadyAtGoal(AAIController * Controller, const FVector * TestLocation, float Radius) { return NativeCall<bool, AAIController *, const FVector *, float>(nullptr, "UPawnAction_Move.CheckAlreadyAtGoal", Controller, TestLocation, Radius); }
	static bool CheckAlreadyAtGoal(AAIController * Controller, AActor * TestGoal, float Radius) { return NativeCall<bool, AAIController *, AActor *, float>(nullptr, "UPawnAction_Move.CheckAlreadyAtGoal", Controller, TestGoal, Radius); }
	void ClearPath() { NativeCall<void>(this, "UPawnAction_Move.ClearPath"); }
	void ClearPendingRepath() { NativeCall<void>(this, "UPawnAction_Move.ClearPendingRepath"); }
	void DeferredPerformMoveAction() { NativeCall<void>(this, "UPawnAction_Move.DeferredPerformMoveAction"); }
	void HandleAIMessage(UBrainComponent * __formal, const FAIMessage * Message) { NativeCall<void, UBrainComponent *, const FAIMessage *>(this, "UPawnAction_Move.HandleAIMessage", __formal, Message); }
	void OnFinished(EPawnActionResult::Type WithResult) { NativeCall<void, EPawnActionResult::Type>(this, "UPawnAction_Move.OnFinished", WithResult); }
	void OnPathUpdated(FNavigationPath * UpdatedPath, ENavPathEvent::Type Event) { NativeCall<void, FNavigationPath *, ENavPathEvent::Type>(this, "UPawnAction_Move.OnPathUpdated", UpdatedPath, Event); }
	bool Pause(const UPawnAction * PausedBy) { return NativeCall<bool, const UPawnAction *>(this, "UPawnAction_Move.Pause", PausedBy); }
	EPawnActionAbortState::Type PerformAbort(EAIForceParam::Type ShouldForce) { return NativeCall<EPawnActionAbortState::Type, EAIForceParam::Type>(this, "UPawnAction_Move.PerformAbort", ShouldForce); }
	bool PerformMoveAction() { return NativeCall<bool>(this, "UPawnAction_Move.PerformMoveAction"); }
	EPathFollowingRequestResult::Type RequestMove(AAIController * Controller) { return NativeCall<EPathFollowingRequestResult::Type, AAIController *>(this, "UPawnAction_Move.RequestMove", Controller); }
	bool Resume() { return NativeCall<bool>(this, "UPawnAction_Move.Resume"); }
	bool Start() { return NativeCall<bool>(this, "UPawnAction_Move.Start"); }
	void TryToRepath() { NativeCall<void>(this, "UPawnAction_Move.TryToRepath"); }
};

