#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOverrideDamageCauserHitMarker_Parms
{
	char __padding[0xf0L];
	AShooterPlayerController * DamageCauserControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalCharacter_eventBPOverrideDamageCauserHitMarker_Parms.DamageCauserController"); }
	bool& bHitFriendlyTargetField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOverrideDamageCauserHitMarker_Parms.bHitFriendlyTarget"); }
	float& PreDamageHealthField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPOverrideDamageCauserHitMarker_Parms.PreDamageHealth"); }
	float& DamageAmountField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPOverrideDamageCauserHitMarker_Parms.DamageAmount"); }
	bool& bIsPointDamageField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOverrideDamageCauserHitMarker_Parms.bIsPointDamage"); }
	FHitResult& PointDamageHitResultField() { return *GetNativePointerField<FHitResult*>(this, "PrimalCharacter_eventBPOverrideDamageCauserHitMarker_Parms.PointDamageHitResult"); }
	FHitMarkerSettings& ReturnValueField() { return *GetNativePointerField<FHitMarkerSettings*>(this, "PrimalCharacter_eventBPOverrideDamageCauserHitMarker_Parms.ReturnValue"); }
};

