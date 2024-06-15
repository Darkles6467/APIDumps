#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_InstantPenetrating_eventBPStopPenetratingAtHit_Parms
{
	char __padding[0x98L];
	FHitResult& CurrentHitField() { return *GetNativePointerField<FHitResult*>(this, "ShooterWeapon_InstantPenetrating_eventBPStopPenetratingAtHit_Parms.CurrentHit"); }
	bool& bIsEntryHitField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_InstantPenetrating_eventBPStopPenetratingAtHit_Parms.bIsEntryHit"); }
	float& CurrentDistanceField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_InstantPenetrating_eventBPStopPenetratingAtHit_Parms.CurrentDistance"); }
	float& CurrentMaxDistanceField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_InstantPenetrating_eventBPStopPenetratingAtHit_Parms.CurrentMaxDistance"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_InstantPenetrating_eventBPStopPenetratingAtHit_Parms.ReturnValue"); }
};

