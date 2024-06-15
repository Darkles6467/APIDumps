#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventBPCheckCanDinoSpawnFromLocation_Parms
{
	char __padding[0x20L];
	TSubclassOf<APrimalDinoCharacter>& DinoClassField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "ShooterPlayerController_eventBPCheckCanDinoSpawnFromLocation_Parms.DinoClass"); }
	FVector& CheckLocationField() { return *GetNativePointerField<FVector*>(this, "ShooterPlayerController_eventBPCheckCanDinoSpawnFromLocation_Parms.CheckLocation"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "ShooterPlayerController_eventBPCheckCanDinoSpawnFromLocation_Parms.ReturnValue"); }

	// Functions

};

