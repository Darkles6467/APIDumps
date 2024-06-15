#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "FAIRequestID.h"

struct UPawnAction : UObject
{
	char __padding[0x60L];
	EAIRequestPriority::Type& ExecutionPriorityField() { return *GetNativePointerField<EAIRequestPriority::Type*>(this, "UPawnAction.ExecutionPriority"); }
	FAIRequestID& RequestIDField() { return *GetNativePointerField<FAIRequestID*>(this, "UPawnAction.RequestID"); }
	EPawnActionAbortState::Type& AbortStateField() { return *GetNativePointerField<EPawnActionAbortState::Type*>(this, "UPawnAction.AbortState"); }
	EPawnActionResult::Type& FinishResultField() { return *GetNativePointerField<EPawnActionResult::Type*>(this, "UPawnAction.FinishResult"); }
	int& IndexOnStackField() { return *GetNativePointerField<int*>(this, "UPawnAction.IndexOnStack"); }

	// Functions

	EPawnActionAbortState::Type Abort(EAIForceParam::Type ShouldForce) { return NativeCall<EPawnActionAbortState::Type, EAIForceParam::Type>(this, "UPawnAction.Abort", ShouldForce); }
	bool Activate() { return NativeCall<bool>(this, "UPawnAction.Activate"); }
	void Finish(TEnumAsByte<enum EPawnActionResult::Type> WithResult) { NativeCall<void, TEnumAsByte<enum EPawnActionResult::Type>>(this, "UPawnAction.Finish", WithResult); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UPawnAction.GetWorld"); }
	void OnChildFinished(UPawnAction * Action, EPawnActionResult::Type WithResult) { NativeCall<void, UPawnAction *, EPawnActionResult::Type>(this, "UPawnAction.OnChildFinished", Action, WithResult); }
	bool Pause(const UPawnAction * PausedBy) { return NativeCall<bool, const UPawnAction *>(this, "UPawnAction.Pause", PausedBy); }
	bool PushChildAction(UPawnAction * Action) { return NativeCall<bool, UPawnAction *>(this, "UPawnAction.PushChildAction", Action); }
	bool Resume() { return NativeCall<bool>(this, "UPawnAction.Resume"); }
	void SetOwnerComponent(UPawnActionsComponent * Component) { NativeCall<void, UPawnActionsComponent *>(this, "UPawnAction.SetOwnerComponent", Component); }
	bool Start() { return NativeCall<bool>(this, "UPawnAction.Start"); }
	void WaitForMessage(FName MessageType, FAIRequestID RequestID) { NativeCall<void, FName, FAIRequestID>(this, "UPawnAction.WaitForMessage", MessageType, RequestID); }
};

