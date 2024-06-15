#pragma once

#include "BaseDeclarations.h"
struct Actor_eventReceiveRadialDamage_Parms
{
	char __padding[0xb8L];
	float& DamageReceivedField() { return *GetNativePointerField<float*>(this, "Actor_eventReceiveRadialDamage_Parms.DamageReceived"); }
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "Actor_eventReceiveRadialDamage_Parms.Origin"); }
	FHitResult& HitInfoField() { return *GetNativePointerField<FHitResult*>(this, "Actor_eventReceiveRadialDamage_Parms.HitInfo"); }
};

