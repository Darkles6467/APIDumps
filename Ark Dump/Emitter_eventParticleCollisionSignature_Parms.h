#pragma once

#include "BaseDeclarations.h"
struct Emitter_eventParticleCollisionSignature_Parms
{
	char __padding[0x48L];
	FName& EventNameField() { return *GetNativePointerField<FName*>(this, "Emitter_eventParticleCollisionSignature_Parms.EventName"); }
	float& EmitterTimeField() { return *GetNativePointerField<float*>(this, "Emitter_eventParticleCollisionSignature_Parms.EmitterTime"); }
	int& ParticleTimeField() { return *GetNativePointerField<int*>(this, "Emitter_eventParticleCollisionSignature_Parms.ParticleTime"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "Emitter_eventParticleCollisionSignature_Parms.Location"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "Emitter_eventParticleCollisionSignature_Parms.Velocity"); }
	FVector& DirectionField() { return *GetNativePointerField<FVector*>(this, "Emitter_eventParticleCollisionSignature_Parms.Direction"); }
	FVector& NormalField() { return *GetNativePointerField<FVector*>(this, "Emitter_eventParticleCollisionSignature_Parms.Normal"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "Emitter_eventParticleCollisionSignature_Parms.BoneName"); }
};

