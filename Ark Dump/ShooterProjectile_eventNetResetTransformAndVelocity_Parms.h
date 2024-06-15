#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventNetResetTransformAndVelocity_Parms
{
	char __padding[0x38L];
	FVector& NewLocationField() { return *GetNativePointerField<FVector*>(this, "ShooterProjectile_eventNetResetTransformAndVelocity_Parms.NewLocation"); }
	FRotator& NewRotationField() { return *GetNativePointerField<FRotator*>(this, "ShooterProjectile_eventNetResetTransformAndVelocity_Parms.NewRotation"); }
	FVector& NewVelocityField() { return *GetNativePointerField<FVector*>(this, "ShooterProjectile_eventNetResetTransformAndVelocity_Parms.NewVelocity"); }
};

