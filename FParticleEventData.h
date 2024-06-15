#pragma once

#include "BaseDeclarations.h"
struct FParticleEventData
{
	char __padding[0x38L];
	int& TypeField() { return *GetNativePointerField<int*>(this, "FParticleEventData.Type"); }
	FName& EventNameField() { return *GetNativePointerField<FName*>(this, "FParticleEventData.EventName"); }
	float& EmitterTimeField() { return *GetNativePointerField<float*>(this, "FParticleEventData.EmitterTime"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FParticleEventData.Location"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "FParticleEventData.Velocity"); }
};

