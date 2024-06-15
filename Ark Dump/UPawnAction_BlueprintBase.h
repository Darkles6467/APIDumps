#pragma once

#include "BaseDeclarations.h"
#include "UPawnAction.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPawnAction_BlueprintBase : UPawnAction
{

	// Functions

	void OnFinished(EPawnActionResult::Type WithResult) { NativeCall<void, EPawnActionResult::Type>(this, "UPawnAction_BlueprintBase.OnFinished", WithResult); }
	bool Pause(const UPawnAction * PausedBy) { return NativeCall<bool, const UPawnAction *>(this, "UPawnAction_BlueprintBase.Pause", PausedBy); }
	bool Resume() { return NativeCall<bool>(this, "UPawnAction_BlueprintBase.Resume"); }
	bool Start() { return NativeCall<bool>(this, "UPawnAction_BlueprintBase.Start"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "UPawnAction_BlueprintBase.Tick", DeltaTime); }
	void ActionFinished(APawn * ControlledPawn, EPawnActionResult::Type WithResult) { NativeCall<void, APawn *, EPawnActionResult::Type>(this, "UPawnAction_BlueprintBase.ActionFinished", ControlledPawn, WithResult); }
	void ActionPause(APawn * ControlledPawn) { NativeCall<void, APawn *>(this, "UPawnAction_BlueprintBase.ActionPause", ControlledPawn); }
	void ActionResume(APawn * ControlledPawn) { NativeCall<void, APawn *>(this, "UPawnAction_BlueprintBase.ActionResume", ControlledPawn); }
	void ActionStart(APawn * ControlledPawn) { NativeCall<void, APawn *>(this, "UPawnAction_BlueprintBase.ActionStart", ControlledPawn); }
	void ActionTick(APawn * ControlledPawn, float DeltaSeconds) { NativeCall<void, APawn *, float>(this, "UPawnAction_BlueprintBase.ActionTick", ControlledPawn, DeltaSeconds); }
};

