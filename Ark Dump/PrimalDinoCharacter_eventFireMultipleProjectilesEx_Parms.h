#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventFireMultipleProjectilesEx_Parms
{
	char __padding[0x48L];
	TArray<FVector>& LocationsField() { return *GetNativePointerField<TArray<FVector>*>(this, "PrimalDinoCharacter_eventFireMultipleProjectilesEx_Parms.Locations"); }
	TArray<FVector>& DirectionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "PrimalDinoCharacter_eventFireMultipleProjectilesEx_Parms.Directions"); }
	bool& bAddPawnVelocityToProjectileField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventFireMultipleProjectilesEx_Parms.bAddPawnVelocityToProjectile"); }
	bool& bScaleProjDamageByDinoDamageField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventFireMultipleProjectilesEx_Parms.bScaleProjDamageByDinoDamage"); }
	FVector& HomingTargetOffsetField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventFireMultipleProjectilesEx_Parms.HomingTargetOffset"); }
	float& OverrideInitialSpeedField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventFireMultipleProjectilesEx_Parms.OverrideInitialSpeed"); }
};

