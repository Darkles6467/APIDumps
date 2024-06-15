#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventUpdateOwnerMovementSpeed_Parms
{
	char __padding[0xcL];
	FVector& WithCharVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventUpdateOwnerMovementSpeed_Parms.WithCharVelocity"); }
};

