#pragma once

#include "BaseDeclarations.h"
struct Emitter_eventParticleDeathSignature_Parms
{
	char __padding[0x34L];
	FName& EventNameField() { return *GetNativePointerField<FName*>(this, "Emitter_eventParticleDeathSignature_Parms.EventName"); }
	float& EmitterTimeField() { return *GetNativePointerField<float*>(this, "Emitter_eventParticleDeathSignature_Parms.EmitterTime"); }
	int& ParticleTimeField() { return *GetNativePointerField<int*>(this, "Emitter_eventParticleDeathSignature_Parms.ParticleTime"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "Emitter_eventParticleDeathSignature_Parms.Location"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "Emitter_eventParticleDeathSignature_Parms.Velocity"); }
	FVector& DirectionField() { return *GetNativePointerField<FVector*>(this, "Emitter_eventParticleDeathSignature_Parms.Direction"); }
};

