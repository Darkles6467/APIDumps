#pragma once

#include "BaseDeclarations.h"
struct FPenetrationTraceHit
{
	char __padding[0x90L];
	FHitResult& HitField() { return *GetNativePointerField<FHitResult*>(this, "FPenetrationTraceHit.Hit"); }
	float& DistanceFromLastHitField() { return *GetNativePointerField<float*>(this, "FPenetrationTraceHit.DistanceFromLastHit"); }
	float& TotalDistanceField() { return *GetNativePointerField<float*>(this, "FPenetrationTraceHit.TotalDistance"); }

	// Functions

};

