#pragma once

#include "BaseDeclarations.h"
struct FParticleCollisionPayload
{
	char __padding[0x20L];
	FVector& UsedDampingFactorField() { return *GetNativePointerField<FVector*>(this, "FParticleCollisionPayload.UsedDampingFactor"); }
	FVector& UsedDampingFactorRotationField() { return *GetNativePointerField<FVector*>(this, "FParticleCollisionPayload.UsedDampingFactorRotation"); }
	int& UsedCollisionsField() { return *GetNativePointerField<int*>(this, "FParticleCollisionPayload.UsedCollisions"); }
	float& DelayField() { return *GetNativePointerField<float*>(this, "FParticleCollisionPayload.Delay"); }
};

