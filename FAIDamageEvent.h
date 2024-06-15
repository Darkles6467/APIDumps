#pragma once

#include "BaseDeclarations.h"
struct FAIDamageEvent
{
	char __padding[0x30L];
	float& AmountField() { return *GetNativePointerField<float*>(this, "FAIDamageEvent.Amount"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FAIDamageEvent.Location"); }
	FVector& HitLocationField() { return *GetNativePointerField<FVector*>(this, "FAIDamageEvent.HitLocation"); }

	// Functions

};

