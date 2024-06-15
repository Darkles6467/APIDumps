#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleEventReceiverBase.h"
#include "UParticleModuleEventBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase
{
	char __padding[0x78L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleEventReceiverSpawn.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleEventReceiverSpawn.PostInitProperties"); }
	bool ProcessParticleEvent(FParticleEmitterInstance * Owner, FParticleEventData * InEvent, float DeltaTime) { return NativeCall<bool, FParticleEmitterInstance *, FParticleEventData *, float>(this, "UParticleModuleEventReceiverSpawn.ProcessParticleEvent", Owner, InEvent, DeltaTime); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleEventReceiverSpawn.Serialize", Ar); }
};

