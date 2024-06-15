#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventBPInitializedVelocity_Parms
{
	char __padding[0x10L];
	FVector& InVelocityField() { return *GetNativePointerField<FVector*>(this, "ShooterProjectile_eventBPInitializedVelocity_Parms.InVelocity"); }
	float& CustomSpeedField() { return *GetNativePointerField<float*>(this, "ShooterProjectile_eventBPInitializedVelocity_Parms.CustomSpeed"); }
};

