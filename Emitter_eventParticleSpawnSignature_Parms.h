#pragma once

#include "BaseDeclarations.h"
struct Emitter_eventParticleSpawnSignature_Parms
{
	char __padding[0x24L];
	FName& EventNameField() { return *GetNativePointerField<FName*>(this, "Emitter_eventParticleSpawnSignature_Parms.EventName"); }
	float& EmitterTimeField() { return *GetNativePointerField<float*>(this, "Emitter_eventParticleSpawnSignature_Parms.EmitterTime"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "Emitter_eventParticleSpawnSignature_Parms.Location"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "Emitter_eventParticleSpawnSignature_Parms.Velocity"); }
};

