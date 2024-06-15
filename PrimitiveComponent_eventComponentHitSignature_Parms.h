#pragma once

#include "BaseDeclarations.h"
struct PrimitiveComponent_eventComponentHitSignature_Parms
{
	char __padding[0xa8L];
	FVector& NormalImpulseField() { return *GetNativePointerField<FVector*>(this, "PrimitiveComponent_eventComponentHitSignature_Parms.NormalImpulse"); }
	FHitResult& HitField() { return *GetNativePointerField<FHitResult*>(this, "PrimitiveComponent_eventComponentHitSignature_Parms.Hit"); }
};

