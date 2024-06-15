#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOverrideHurtAnim_Parms
{
	char __padding[0x60L];
	float& DamageTakenField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPOverrideHurtAnim_Parms.DamageTaken"); }
	bool& bIsLocalPathField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOverrideHurtAnim_Parms.bIsLocalPath"); }
	bool& bIsPointDamageField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOverrideHurtAnim_Parms.bIsPointDamage"); }
	FVector& PointDamageLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPOverrideHurtAnim_Parms.PointDamageLocation"); }
	FVector& PointDamageHitNormalField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPOverrideHurtAnim_Parms.PointDamageHitNormal"); }
	UAnimMontage * ReturnValueField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalCharacter_eventBPOverrideHurtAnim_Parms.ReturnValue"); }

	// Functions

};

