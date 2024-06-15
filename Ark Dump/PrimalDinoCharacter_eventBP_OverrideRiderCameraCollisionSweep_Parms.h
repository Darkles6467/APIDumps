#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_OverrideRiderCameraCollisionSweep_Parms
{
	char __padding[0xa0L];
	FVector& SweepStartField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBP_OverrideRiderCameraCollisionSweep_Parms.SweepStart"); }
	FVector& SweepEndField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBP_OverrideRiderCameraCollisionSweep_Parms.SweepEnd"); }
	FHitResult& ReturnValueField() { return *GetNativePointerField<FHitResult*>(this, "PrimalDinoCharacter_eventBP_OverrideRiderCameraCollisionSweep_Parms.ReturnValue"); }
};

