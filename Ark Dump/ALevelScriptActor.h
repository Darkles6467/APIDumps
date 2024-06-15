#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ALevelScriptActor : AActor
{
	char __padding[0x8L];

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ALevelScriptActor.BeginPlay"); }
	void DisableInput(APlayerController * PlayerController) { NativeCall<void, APlayerController *>(this, "ALevelScriptActor.DisableInput", PlayerController); }
	void EnableInput(APlayerController * PlayerController) { NativeCall<void, APlayerController *>(this, "ALevelScriptActor.EnableInput", PlayerController); }
	void PreInitializeComponents() { NativeCall<void>(this, "ALevelScriptActor.PreInitializeComponents"); }
	bool RemoteEvent(FName EventName) { return NativeCall<bool, FName>(this, "ALevelScriptActor.RemoteEvent", EventName); }
	void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) { NativeCall<void, bool, bool, bool, bool, bool>(this, "ALevelScriptActor.SetCinematicMode", bCinematicMode, bHidePlayer, bAffectsHUD, bAffectsMovement, bAffectsTurning); }
	void LevelReset() { NativeCall<void>(this, "ALevelScriptActor.LevelReset"); }
	void OnGameStateReady(AGameState * GameState) { NativeCall<void, AGameState *>(this, "ALevelScriptActor.OnGameStateReady", GameState); }
	void WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation) { NativeCall<void, FIntVector, FIntVector>(this, "ALevelScriptActor.WorldOriginLocationChanged", OldOriginLocation, NewOriginLocation); }
};

