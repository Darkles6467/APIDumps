#pragma once

#include "BaseDeclarations.h"
struct DestructibleComponent_eventComponentFractureSignature_Parms
{
	char __padding[0x18L];
	FVector& HitPointField() { return *GetNativePointerField<FVector*>(this, "DestructibleComponent_eventComponentFractureSignature_Parms.HitPoint"); }
	FVector& HitDirectionField() { return *GetNativePointerField<FVector*>(this, "DestructibleComponent_eventComponentFractureSignature_Parms.HitDirection"); }
};

