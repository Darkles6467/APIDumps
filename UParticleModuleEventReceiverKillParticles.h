#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleEventReceiverBase.h"
#include "UParticleModuleEventBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase
{
	char __padding[0x8L];

	// Functions

	bool ProcessParticleEvent(FParticleEmitterInstance * Owner, FParticleEventData * InEvent, float DeltaTime) { return NativeCall<bool, FParticleEmitterInstance *, FParticleEventData *, float>(this, "UParticleModuleEventReceiverKillParticles.ProcessParticleEvent", Owner, InEvent, DeltaTime); }
};

