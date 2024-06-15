#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPAdjustDamage_Parms
{
	char __padding[0xd0L];
	float& IncomingDamageField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPAdjustDamage_Parms.IncomingDamage"); }
	bool& bIsPointDamageField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPAdjustDamage_Parms.bIsPointDamage"); }
	FHitResult& PointHitInfoField() { return *GetNativePointerField<FHitResult*>(this, "PrimalCharacter_eventBPAdjustDamage_Parms.PointHitInfo"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPAdjustDamage_Parms.ReturnValue"); }

	// Functions

};

