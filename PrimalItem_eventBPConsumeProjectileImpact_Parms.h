#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPConsumeProjectileImpact_Parms
{
	char __padding[0x98L];
	FHitResult& HitResultField() { return *GetNativePointerField<FHitResult*>(this, "PrimalItem_eventBPConsumeProjectileImpact_Parms.HitResult"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPConsumeProjectileImpact_Parms.ReturnValue"); }

	// Functions

};

