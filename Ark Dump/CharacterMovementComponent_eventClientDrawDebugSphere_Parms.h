#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventClientDrawDebugSphere_Parms
{
	char __padding[0x18L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "CharacterMovementComponent_eventClientDrawDebugSphere_Parms.Location"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventClientDrawDebugSphere_Parms.Radius"); }
	FColor& SphereColorField() { return *GetNativePointerField<FColor*>(this, "CharacterMovementComponent_eventClientDrawDebugSphere_Parms.SphereColor"); }
	float& LifeSpanField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventClientDrawDebugSphere_Parms.LifeSpan"); }
};

