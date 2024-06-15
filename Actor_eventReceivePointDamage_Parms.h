#pragma once

#include "BaseDeclarations.h"
struct Actor_eventReceivePointDamage_Parms
{
	char __padding[0x58L];
	float& DamageField() { return *GetNativePointerField<float*>(this, "Actor_eventReceivePointDamage_Parms.Damage"); }
	FVector& HitLocationField() { return *GetNativePointerField<FVector*>(this, "Actor_eventReceivePointDamage_Parms.HitLocation"); }
	FVector& HitNormalField() { return *GetNativePointerField<FVector*>(this, "Actor_eventReceivePointDamage_Parms.HitNormal"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "Actor_eventReceivePointDamage_Parms.BoneName"); }
	FVector& ShotFromDirectionField() { return *GetNativePointerField<FVector*>(this, "Actor_eventReceivePointDamage_Parms.ShotFromDirection"); }
};

