#pragma once

#include "BaseDeclarations.h"
struct FCollisionResponseParams
{
	char __padding[0x20L];
	FCollisionResponseContainer& CollisionResponseField() { return *GetNativePointerField<FCollisionResponseContainer*>(this, "FCollisionResponseParams.CollisionResponse"); }

	// Functions

};

