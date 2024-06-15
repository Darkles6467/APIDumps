#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleEventBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleEventGenerator : UParticleModuleEventBase
{
	char __padding[0x10L];
	TArray<FParticleEvent_GenerateInfo>& EventsField() { return *GetNativePointerField<TArray<FParticleEvent_GenerateInfo>*>(this, "UParticleModuleEventGenerator.Events"); }

	// Functions

	bool HandleParticleBurst(FParticleEmitterInstance * Owner, FParticleEventInstancePayload * EventPayload, const int ParticleCount) { return NativeCall<bool, FParticleEmitterInstance *, FParticleEventInstancePayload *, const int>(this, "UParticleModuleEventGenerator.HandleParticleBurst", Owner, EventPayload, ParticleCount); }
	bool HandleParticleCollision(FParticleEmitterInstance * Owner, FParticleEventInstancePayload * EventPayload, FParticleCollisionPayload * CollidePayload, FHitResult * Hit, FBaseParticle * CollideParticle, FVector * CollideDirection) { return NativeCall<bool, FParticleEmitterInstance *, FParticleEventInstancePayload *, FParticleCollisionPayload *, FHitResult *, FBaseParticle *, FVector *>(this, "UParticleModuleEventGenerator.HandleParticleCollision", Owner, EventPayload, CollidePayload, Hit, CollideParticle, CollideDirection); }
	bool HandleParticleKilled(FParticleEmitterInstance * Owner, FParticleEventInstancePayload * EventPayload, FBaseParticle * DeadParticle) { return NativeCall<bool, FParticleEmitterInstance *, FParticleEventInstancePayload *, FBaseParticle *>(this, "UParticleModuleEventGenerator.HandleParticleKilled", Owner, EventPayload, DeadParticle); }
	bool HandleParticleSpawned(FParticleEmitterInstance * Owner, FParticleEventInstancePayload * EventPayload, FBaseParticle * NewParticle) { return NativeCall<bool, FParticleEmitterInstance *, FParticleEventInstancePayload *, FBaseParticle *>(this, "UParticleModuleEventGenerator.HandleParticleSpawned", Owner, EventPayload, NewParticle); }
	unsigned int PrepPerInstanceBlock(FParticleEmitterInstance * Owner, void * InstData) { return NativeCall<unsigned int, FParticleEmitterInstance *, void *>(this, "UParticleModuleEventGenerator.PrepPerInstanceBlock", Owner, InstData); }
};

