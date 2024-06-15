#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPIsBlockedByShield_Parms
{
	char __padding[0x98L];
	FHitResult& HitInfoField() { return *GetNativePointerField<FHitResult*>(this, "PrimalCharacter_eventBPIsBlockedByShield_Parms.HitInfo"); }
	FVector& ShotDirectionField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPIsBlockedByShield_Parms.ShotDirection"); }
	bool& bBlockAllPointDamageField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPIsBlockedByShield_Parms.bBlockAllPointDamage"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPIsBlockedByShield_Parms.ReturnValue"); }

	// Functions

};

