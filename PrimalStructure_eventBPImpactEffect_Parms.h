#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPImpactEffect_Parms
{
	char __padding[0x98L];
	FHitResult& HitResField() { return *GetNativePointerField<FHitResult*>(this, "PrimalStructure_eventBPImpactEffect_Parms.HitRes"); }
	FVector& ShootDirectionField() { return *GetNativePointerField<FVector*>(this, "PrimalStructure_eventBPImpactEffect_Parms.ShootDirection"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPImpactEffect_Parms.ReturnValue"); }

	// Functions

};

