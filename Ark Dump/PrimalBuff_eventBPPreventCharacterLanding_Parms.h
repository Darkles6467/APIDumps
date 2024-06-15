#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPPreventCharacterLanding_Parms
{
	char __padding[0x34L];
	FVector& ImpactPointField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPPreventCharacterLanding_Parms.ImpactPoint"); }
	FVector& ImpactAccelField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPPreventCharacterLanding_Parms.ImpactAccel"); }
	FVector& ImpactVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPPreventCharacterLanding_Parms.ImpactVelocity"); }
	FVector& NewVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPPreventCharacterLanding_Parms.NewVelocity"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPPreventCharacterLanding_Parms.ReturnValue"); }

	// Functions

};

