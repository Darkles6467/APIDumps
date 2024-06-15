#pragma once

#include "BaseDeclarations.h"
struct Actor_eventTakePointDamageSignature_Parms
{
	char __padding[0x50L];
	float& DamageField() { return *GetNativePointerField<float*>(this, "Actor_eventTakePointDamageSignature_Parms.Damage"); }
	FVector& HitLocationField() { return *GetNativePointerField<FVector*>(this, "Actor_eventTakePointDamageSignature_Parms.HitLocation"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "Actor_eventTakePointDamageSignature_Parms.BoneName"); }
	FVector& ShotFromDirectionField() { return *GetNativePointerField<FVector*>(this, "Actor_eventTakePointDamageSignature_Parms.ShotFromDirection"); }
};

