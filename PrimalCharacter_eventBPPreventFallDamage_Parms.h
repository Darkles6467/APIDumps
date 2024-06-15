#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPPreventFallDamage_Parms
{
	char __padding[0x90L];
	FHitResult& HitResultField() { return *GetNativePointerField<FHitResult*>(this, "PrimalCharacter_eventBPPreventFallDamage_Parms.HitResult"); }
	float& FallDamageAmountField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPPreventFallDamage_Parms.FallDamageAmount"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPPreventFallDamage_Parms.ReturnValue"); }

	// Functions

};

