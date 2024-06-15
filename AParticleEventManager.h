#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FParticleEventBurstData.h"
#include "FParticleEventCollideData.h"
#include "FParticleEventDeathData.h"
#include "FParticleEventSpawnData.h"

struct AParticleEventManager : AActor
{

	// Functions

	void HandleParticleBurstEvents(UParticleSystemComponent * Component, const TArray<FParticleEventBurstData> * BurstEvents) { NativeCall<void, UParticleSystemComponent *, const TArray<FParticleEventBurstData> *>(this, "AParticleEventManager.HandleParticleBurstEvents", Component, BurstEvents); }
	void HandleParticleCollisionEvents(UParticleSystemComponent * Component, const TArray<FParticleEventCollideData> * CollisionEvents) { NativeCall<void, UParticleSystemComponent *, const TArray<FParticleEventCollideData> *>(this, "AParticleEventManager.HandleParticleCollisionEvents", Component, CollisionEvents); }
	void HandleParticleDeathEvents(UParticleSystemComponent * Component, const TArray<FParticleEventDeathData> * DeathEvents) { NativeCall<void, UParticleSystemComponent *, const TArray<FParticleEventDeathData> *>(this, "AParticleEventManager.HandleParticleDeathEvents", Component, DeathEvents); }
	void HandleParticleSpawnEvents(UParticleSystemComponent * Component, const TArray<FParticleEventSpawnData> * SpawnEvents) { NativeCall<void, UParticleSystemComponent *, const TArray<FParticleEventSpawnData> *>(this, "AParticleEventManager.HandleParticleSpawnEvents", Component, SpawnEvents); }
};

