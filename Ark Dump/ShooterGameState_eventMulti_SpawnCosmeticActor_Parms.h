#pragma once

#include "BaseDeclarations.h"
struct ShooterGameState_eventMulti_SpawnCosmeticActor_Parms
{
	char __padding[0x20L];
	FVector& SpawnAtLocationField() { return *GetNativePointerField<FVector*>(this, "ShooterGameState_eventMulti_SpawnCosmeticActor_Parms.SpawnAtLocation"); }
	FRotator& SpawnWithRotationField() { return *GetNativePointerField<FRotator*>(this, "ShooterGameState_eventMulti_SpawnCosmeticActor_Parms.SpawnWithRotation"); }
};

