#pragma once

#include "BaseDeclarations.h"
struct FCableParticle
{
	char __padding[0x1cL];
	bool& bFreeField() { return *GetNativePointerField<bool*>(this, "FCableParticle.bFree"); }
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FCableParticle.Position"); }
	FVector& OldPositionField() { return *GetNativePointerField<FVector*>(this, "FCableParticle.OldPosition"); }

	// Functions

};

