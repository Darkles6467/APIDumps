#pragma once

#include "BaseDeclarations.h"
struct Actor_eventReceiveHit_Parms
{
	char __padding[0xc8L];
	bool& bSelfMovedField() { return *GetNativePointerField<bool*>(this, "Actor_eventReceiveHit_Parms.bSelfMoved"); }
	FVector& HitLocationField() { return *GetNativePointerField<FVector*>(this, "Actor_eventReceiveHit_Parms.HitLocation"); }
	FVector& HitNormalField() { return *GetNativePointerField<FVector*>(this, "Actor_eventReceiveHit_Parms.HitNormal"); }
	FVector& NormalImpulseField() { return *GetNativePointerField<FVector*>(this, "Actor_eventReceiveHit_Parms.NormalImpulse"); }
	FHitResult& HitField() { return *GetNativePointerField<FHitResult*>(this, "Actor_eventReceiveHit_Parms.Hit"); }
};

