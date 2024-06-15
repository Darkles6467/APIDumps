#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPSetInitialAimOffsetTargets_Parms
{
	char __padding[0x30L];
	FVector& TargetRootLocField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPSetInitialAimOffsetTargets_Parms.TargetRootLoc"); }
	FRotator& TargetAimRotField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventBPSetInitialAimOffsetTargets_Parms.TargetAimRot"); }
	FVector& OutTargetRootLocField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPSetInitialAimOffsetTargets_Parms.OutTargetRootLoc"); }
	FRotator& OutTargetAimRotField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventBPSetInitialAimOffsetTargets_Parms.OutTargetAimRot"); }
};

